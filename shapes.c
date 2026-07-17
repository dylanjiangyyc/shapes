#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_square(int length);
void print_rectangle(int length, int width);
void print_triangle(char *align, int height);

int main(int argc, char *argv[])
{
    if (argc == 3 && (strcmp(argv[1], "-s") == 0 ||strcmp(argv[1], "--square") == 0))
    {
        if (atoi(argv[2]) <= 0)
        {
            printf("Error.\n");
            return 1;
        }
        else
        {
            print_square(atoi(argv[2]));
            return 0;
        }
    }
    else if (argc == 4 && (strcmp(argv[1], "-t") == 0 ||strcmp(argv[1], "--triangle") == 0))
    {
        if (atoi(argv[3]) <= 0)
        {
            printf("Error.\n");
            return 1;
        }
        else
        {
            print_triangle(argv[2], atoi(argv[3]));
            return 0;
        }
    }
    else if ( argc == 4 && (strcmp(argv[1], "-r") == 0 || strcmp(argv[1], "--rectangle") == 0 ))
    {
        if (atoi(argv[2]) <= 0 || atoi(argv[3]) <= 0)
        {
            printf("Error.\n");
            return 1;
        }
        else
        {
            print_rectangle(atoi(argv[2]), atoi(argv[3]));
            return 0;
        }
    }
    else
    {
        printf("Error.\n");
        return 1;
    }
}
void print_square(int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("|_");
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
            printf("|_");
        }
        printf("\n");
    }
}

void print_triangle(char *align, int height)
{
    if (strcmp(align, "-l") == 0 ||strcmp(align, "--left") == 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("|_");
            }
            printf("\n");
        }
    }
    else if (strcmp(align, "-r") == 0 || strcmp(align, "--right") == 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = height - i; j > 0; j--)
            {
                printf("  ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("|_");
            }
            printf("\n");
        }
    }
    else if (strcmp(align, "-i") == 0 || strcmp(align, "--isosceles") == 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = height - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("|_");
            }
            printf("\n");
        }
    }
    else if (strcmp(align, "-c") == 0 || strcmp(align, "--center") == 0)
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = height - i; j > 0; j--)
            {
                printf("  ");
            }
            for (int j = 0; j < i - 1; j++)
            {
                printf("|_");
            }
            for (int j = 0; j < i; j++)
            {
                printf("|_");
            }
            printf("\n");
        }
    }
}
