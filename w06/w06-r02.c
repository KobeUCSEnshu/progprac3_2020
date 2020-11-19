/*
 * w06-r02
 *
 * $ gcc w06-r02.c -o w06-r02
 * $ ./w06-r02
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char name[32];
    int hp;
    int win;
    int lose;
    int draw;
    float score;
} Player;

Player Player_create( char* name, int hp )
{
    Player p;
    strcpy( p.name, name );
    p.hp = hp;
    p.win = 0;
    p.lose = 0;
    p.draw = 0;
    p.score = 0.0;
    return p;
}

void Player_win( Player* p )
{
    p->win++;
    p->score = p->score + 1.0;
}

void Player_lose( Player* p )
{
    p->lose++;
    p->hp--;
}

void Player_draw( Player* p )
{
    p->draw++;
    p->score = p->score + 0.5;
}

void Player_print( Player* p )
{
    printf("%s: hp = %d, (win,lose,draw) = (%d,%d,%d), score = %.1f\n",
        p->name, p->hp, p->win, p->lose, p->draw, p->score);
}

typedef struct
{
    int hand;
} Janken;

Janken Janken_input()
{
    Janken j = {0};
    scanf("%d", &j.hand);
    return j;
}

Janken Janken_random()
{
    Janken j;
    j.hand = rand() % 3 + 1;
    return j;
}

int Janken_judge( Janken* j1, Janken* j2 )
{
    /* Draw */
    if ( j1->hand == j2->hand ) { return 0; }

    /* j1 Win */
    if ( j1->hand == 1 && j2->hand == 3 ) { return 1; } /* Rock,Scissors */
    if ( j1->hand == 2 && j2->hand == 1 ) { return 1; } /* Paper,Rock */
    if ( j1->hand == 3 && j2->hand == 2 ) { return 1; } /* Scissors,Paper */

    /* j1 Lose (j2 Win) */
    return -1;
}

void Janken_print( Janken* j )
{
    switch ( j->hand )
    {
    case 1: printf("Rock\n"); break;
    case 2: printf("Paper\n"); break;
    case 3: printf("Scissors\n"); break;
    default: printf("Unknown\n"); break;
    }
}

int Janken_competition( Player *p, Player you )
{   int result = 0;
    Player com;
    com = *p;
    
    int max_trials = 20;
    int counter = 0;
   
    srand( time(NULL) );
    
    while ( counter++ < max_trials )
    {
        Janken your_choice;
        Janken comp_choice;
        

        printf("Enter your choise (Rock=1, Paper=2, Scissors=3): ");
        your_choice = Janken_input();
        comp_choice = Janken_random();
        printf("Game with %s, Round %d\n", com.name, counter);
        printf("\t%s choice: ", you.name); Janken_print( &your_choice );
        printf("\t%s choice: ", com.name); Janken_print( &comp_choice );

        result = Janken_judge( &your_choice, &comp_choice );
        if ( result > 0 )
        {
            printf("\t%s wins\n", you.name);
            Player_win( &you );
            Player_lose( &com );
        }
        else if ( result < 0 )
        {
            printf("\t%s wins\n", com.name);
            Player_lose( &you );
            Player_win( &com );
        }
        else
        {
            printf("\tDraw\n", com.name);
            Player_draw( &you );
            Player_draw( &com );
        }

        printf("\t"); Player_print( &you );
        printf("\t"); Player_print( &com );
        
        if ( you.hp == 0 )
        {
            printf("\n");
            printf("%s wins!\n", com.name);
            return 0;
        }

        if ( com.hp == 0 )
        {
            printf("\n");
            printf("%s wins!\n", you.name);
            Player_print( &you );
            Player_print( &com );
            return 1;
        }
        
    }
    
    printf("\n");
    printf("Draw...\n");
}


int main()
{
    int J1,J2,J3;
    Player you = Player_create( "Player", 5 );
    Player com1 = Player_create( "Computer1", 5 );
    Player com2 = Player_create( "Computer2", 5 );
    Player com3 = Player_create( "Computer3", 5 );

    
    J1=Janken_competition( &com1, you );
    if (J1==1)
       { 
           J2=Janken_competition( &com2, you ); 
       }
    else 
       {
           return 0;
       }
    if (J2==1)
       {
           J3=Janken_competition( &com3, you );
       }

    return 0;
}









