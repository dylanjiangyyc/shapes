#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_square(int height);

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "square") == 0)
    {
        if (!( argc == 3 ))
        {
            printf("Error: printing a square requires 2 arguments.\n");
            return 1;
        }
        else
        {
            print_square(atoi(argv[2]));
            return 0;
        }
    }
    else
    {
        printf("Error: shape does not exist\n");
        return 2;
    }
}

void print_square(int height)
{
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < height; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
