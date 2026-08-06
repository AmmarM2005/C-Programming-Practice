#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int matrix[100][100];

    // Input the matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check elements below the main diagonal
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
            {
                printf("0");
                return 0;
            }
        }
    }

    printf("1");

    return 0;
}