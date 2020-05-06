#include <stdio.h>

int main(){
	int data,i,j,k,x,bantu;
	printf("banyaknya data: ");scanf("%d", &data);
	int A[data];
	
	for(i=1;i<=data;i++){
		printf("elemen ke-%d: ",i); scanf("%d", &A[i]);
	}
	
	printf("\n\n=============Data tak terurut=============\n");
	for(i=1;i<=data;i++){
		printf("%d\t",A[i]);
	}
	
	//selection sort
	for(i=1;i<=data;i++){
		k=i;
		j=i+1;
		//looping untuk swaping elemen array
		while(j<=data){
			//ascending
			if(A[k]>A[j]){
				k=j;
			}
			else{
				j=j+1;
			}
		}
		printf("\n");
		for(x = 1;x<=data;x++){
			printf("%d\t",A[x]);
		}
		printf("\n");
		//swap data
		bantu = A[i];
		A[i] = A[k];
		A[k] = bantu;
		
		
	}
	
//	printf("\n\n=============Data terurut=============\n");
//	for(i=1;i<=data;i++){
//		printf("%d\t",A[i]);
//	}
//	
	
}
