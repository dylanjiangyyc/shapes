#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int height = atoi(argv[1]);

    if (!( argc == 2 ))
    {
        printf("Error: maximum amount of arguments is 1");
        return 1;
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
        return 0;
    }
}
