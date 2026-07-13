#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_square(int height, int arg_count);

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "square") == 0)
    {
        print_square(atoi(argv[2]) , argc);
    }
}

void print_square(int height, int arg_count)
{

    if (!( arg_count == 3 ))
    {
        printf("Error: printing a square requires 2 arguments.\n");
    }
    else
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
