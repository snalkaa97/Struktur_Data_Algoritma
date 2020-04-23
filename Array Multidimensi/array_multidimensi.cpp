#include <stdio.h>

int main(){
	//array multidimensi
	int arrayMD[2][2] = {1,2,3,4};
	int i,j;
	//|1->0,0	2->0,1|
	//|3->1,0	4->1,1|
	
//	printf("%d ",arrayMD[0][0]);
//	printf("%d ",arrayMD[0][1]);
//	puts("");
//	printf("%d ",arrayMD[1][0]);
//	printf("%d ",arrayMD[1][1]);

	for(i=0;i<2;i++){
		printf("|");
		for(j=0;j<2;j++){
			printf(" %d ",arrayMD[i][j]);
			
		}
		printf("|");
		printf("\n");
	}
	
}
