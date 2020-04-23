#include <stdio.h>

int main(){
	int baris, kolom;
	printf("Masukan banyaknya baris: "); scanf("%d", &baris);
	printf("Masukan banyaknya kolom: "); scanf("%d", &kolom);
	
	int A[baris][kolom], i, j;
	int B[baris][kolom];
	//i=baris j=kolom
	for(i=1;i<=baris;i++){
		for(j=1;j<=kolom;j++){
			printf("data A[%d][%d] : ",i,j); scanf("%d", &A[i][j]);
		}
	}
	
	puts("");
	for(i=1;i<=baris;i++){
		for(j=1;j<=kolom;j++){
			printf("data B[%d][%d] : ",i,j); scanf("%d", &B[i][j]);
		}
	}
	
	//cetak
	//github.com/snalkaa97
	printf("\n Matriks A: \n");
	for(i=1;i<=baris;i++){
		printf("|");
		for(j=1;j<=kolom;j++){
			printf(" %d ",A[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	printf("\n Matriks B: \n");
	for(i=1;i<=baris;i++){
		printf("|");
		for(j=1;j<=kolom;j++){
			printf(" %d ",B[i][j]);
		}
		printf("|");
		printf("\n");
	}
}
