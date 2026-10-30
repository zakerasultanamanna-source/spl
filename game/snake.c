#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

int gameOver;
int width = 30, height = 15;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int tailLength;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum Direction dir;

void setup()
{
    gameOver = 0;
    dir = RIGHT;

    x = width / 2;
    y = height / 2;

    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0;
    tailLength = 0;
}

void draw()
{
    system("cls");

    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                printf("#");

            if (i == y && j == x)
                printf("O");
            else if (i == fruitY && j == fruitX)
                printf("*");
            else
            {
                int printed = 0;

                for (int k = 0; k < tailLength; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        printf("o");
                        printed = 1;
                        break;
                    }
                }

                if (!printed)
                    printf(" ");
            }

            if (j == width - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < width + 2; i++)
        printf("#");

    printf("\nScore: %d\n", score);
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            if (dir != RIGHT)
                dir = LEFT;
            break;

        case 'd':
            if (dir != LEFT)
                dir = RIGHT;
            break;

        case 'w':
            if (dir != DOWN)
                dir = UP;
            break;

        case 's':
            if (dir != UP)
                dir = DOWN;
            break;

        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < tailLength; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];

        tailX[i] = prevX;
        tailY[i] = prevY;

        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case LEFT:
        x--;
        break;

    case RIGHT:
        x++;
        break;

    case UP:
        y--;
        break;

    case DOWN:
        y++;
        break;
    }

    // Wall collision
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = 1;

    // Snake body collision
    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // Eating fruit
    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        tailLength++;
    }
}

int main()
{
    setup();

    while (!gameOver)
    {
        draw();
        input();
        logic();
        Sleep(100);
    }

    printf("\nGAME OVER!\n");
    printf("Final Score: %d\n", score);

    return 0;
}