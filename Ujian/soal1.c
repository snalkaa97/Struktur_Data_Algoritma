#include <stdio.h>

int main()
{
    int baris, kolom;
    printf("Masukan banyaknya baris: ");
    scanf("%d", &baris);
    printf("Masukan banyaknya kolom: ");
    scanf("%d", &kolom);

    int A[baris][kolom], i, j;
    ;
    for (i = 1; i <= baris; i++)
    {
        for (j = 1; j <= kolom; j++)
        {
            printf("data A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n Sebelum diproses: \n");
    for (i = 1; i <= baris; i++)
    {
        printf("|");
        for (j = 1; j <= kolom; j++)
        {
            printf(" %d\t", A[i][j]);
        }
        printf("|");
        printf("\n");
    }

    printf("\n Sesudah diproses: \n");
    for (i = 1; i <= baris; i++)
    {
        printf("|");
        for (j = 1; j <= kolom; j++)
        {
            int x = i + j;
            if (x == 1 || x == 3 || x == 5)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t", A[i][j]);
            }
        }
        printf("|");
        printf("\n");
    }
}
