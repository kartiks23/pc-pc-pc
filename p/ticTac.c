#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void draw(char a[]);
void mark(char a[]);
void win(char a[]);
int main()
{
    // char a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // printf("Player 1 has X and player 2 has O\n");
    // draw(a);
    // mark(a);
    printf("\\\\");
}
void draw(char a[])
{
    for (int i = 0; i < 7; i += 3)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", a[i + j + 1]);
        }
        printf("\n------------------");
        printf("\n");
    }
}

void mark(char a[])
{
    int p;
    bool b = true;
    for (int i = 0; b; i++)
    {
        if (i % 2 == 0)
            printf("Player 1 please enter where you want to edit\t");
        else
            printf("Player 2 please enter where you want to edit\t");

        scanf("%d", &p);
        if (a[p] == 'X' || a[p] == 'O')
        {
            printf("The other player has already played at that position\n");
        }
        if (i % 2 == 0)
        {

            a[p] = 'X';
            draw(a);
            win(a);
        }
        else if (p > 10)
        {
            printf("Please enter a valid number.");
            mark(a);
        }
        else
        {
            a[p] = 'O';
            draw(a);
            win(a);
        }
    }
}

void win(char a[])
{
    if (a[1] == a[2] && a[2] == a[3])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }
    else if (a[4] == a[5] && a[5] == a[6])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }

    else if (a[7] == a[8] && a[8] == a[9])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }

    else if (a[1] == a[4] && a[4] == a[7])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }

    else if (a[2] == a[5] && a[5] == a[8])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }

    else if (a[3] == a[6] && a[6] == a[9])
    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }

    else if (a[1] == a[5] && a[5] == a[9])

    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }
    else if (a[3] == a[5] && a[5] == a[7])

    {
        if (a[1] == 'X')
        {
            printf("Player 1 won");
            exit(0);
        }
        else
        {
            printf("Player 2 won");
            exit(0);
        }
    }
    else if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9' && a[10] != '10')
    {
        printf("Nobody won you dumb fucks");
        exit(0);
    }
}