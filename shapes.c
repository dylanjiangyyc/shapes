#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_square(int length);
void print_rectangle(int length, int width);
void print_right_triangle(char *align, int height);

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "-s") == 0 ||strcmp(argv[1], "--square") == 0)
    {
        if (!( argc == 3 ))
        {
            printf("Error: printing a square requires 2 arguments.\n");
            return 1;
        }
        else if (atoi(argv[2]) == 0)
        {
            printf("Error: unknown arguments.");
            return 2;
        }
        else
        {
            print_square(atoi(argv[2]));
            return 0;
        }
    }
    else if (strcmp(argv[1], "-t") == 0 ||strcmp(argv[1], "--triangle") == 0)
    {
        if (!( argc == 4 ))
        {
            printf("Error: printing a right triangle requires 3 arguments.\n");
            return 1;
        }
        else if (atoi(argv[3]) == 0)
        {
            printf("Error: unknown arguments.");
            return 2;
        }
        else
        {
            print_right_triangle(argv[2], atoi(argv[3]));
            return 0;
        }
    }
    else if (strcmp(argv[1], "-r") == 0 || strcmp(argv[1], "--rectangle") == 0)
    {
        if (!(argc == 4 ))
        {
            printf("Error: printing a rectangle requires 3 arguments.\n");
            return 1;
        }
        else if (atoi(argv[2]) == 0 || atoi(argv[3]) == 0)
        {
            printf("Error: unknown arguments.");
            return 2;
        }
        else
        {
            print_rectangle(atoi(argv[2]), atoi(argv[3]));
            return 0;
        }
    }
    else
    {
        printf("Error: shape does not exist\n");
        return 2;
    }
}

void print_square(int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void print_rectangle(int length, int width)
{
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void print_right_triangle(char *align, int height)
{
    if (strcmp(align, "-l") == 0 ||strcmp(align, "--left") == 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
