#include <stdio.h>
#include <stdlib.h>


int main()
{
    int** b = (int**) malloc(sizeof(int*) * 3);
    for(int i = 0; i < 3; i++)
    {
        b[i] = (int*) malloc(sizeof(int) * 3);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            b[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
    {
        free(b[i]);
    }

    free(b);
    return 0;
}