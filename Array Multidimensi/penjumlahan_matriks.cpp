#include <stdio.h>

int main()
{
	int baris, kolom;
	printf("Masukan banyaknya baris: ");
	scanf("%d", &baris);
	printf("Masukan banyaknya kolom: ");
	scanf("%d", &kolom);

	int A[baris][kolom], i, j;
	int B[baris][kolom];
	int C[baris][kolom];
	//i=baris j=kolom
	for (i = 1; i <= baris; i++)
	{
		for (j = 1; j <= kolom; j++)
		{
			printf("data A[%d][%d] : ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	puts("");
	for (i = 1; i <= baris; i++)
	{
		for (j = 1; j <= kolom; j++)
		{
			printf("data B[%d][%d] : ", i, j);
			scanf("%d", &B[i][j]);
		}
	}

	//cetak
	//github.com/snalkaa97/Struktur_Data_Algoritma
	printf("\n Matriks A: \n");
	for (i = 1; i <= baris; i++)
	{
		printf("|");
		for (j = 1; j <= kolom; j++)
		{
			printf(" %d ", A[i][j]);
		}
		printf("|");
		printf("\n");
	}

	printf("\n Matriks B: \n");
	for (i = 1; i <= baris; i++)
	{
		printf("|");
		for (j = 1; j <= kolom; j++)
		{
			printf(" %d ", B[i][j]);
		}
		printf("|");
		printf("\n");
	}

	printf("\n\n Penjumlahan matriks C= A+B");
	printf("\n Matriks C= \n");
	for (i = 1; i <= baris; i++)
	{
		printf("|");
		for (j = 1; j <= kolom; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			//C[1][1] = A[1][1] + B[1][1]
			//C[1][1] = 2 + 2
			//C[1][1] = 4
			printf("%d ", C[i][j]);
		}
		printf("|");
		printf("\n");
	}

	printf("\n\n Pengurangan matriks C= A-B");
	printf("\n Matriks C= \n");
	for (i = 1; i <= baris; i++)
	{
		printf("|");
		for (j = 1; j <= kolom; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
			//C[1][1] = A[1][1] + B[1][1]
			//C[1][1] = 2 + 2
			//C[1][1] = 4
			if (i == j)
			{
				C[i][j] = 0;
			}
			//| 0->1,1	2	3|
			//|	4	0->2,2	6|
			//|	7	8	0->3,3|

			//|	2 	1	0->1,3	|
			//|	2	0->2,2	1	|
			//|	0->3,1	3	1	|
			printf("%d\t", C[i][j]);
		}
		printf("|");
		printf("\n");
	}
}
