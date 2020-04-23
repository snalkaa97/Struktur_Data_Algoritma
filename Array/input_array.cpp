#include <stdio.h>

int main(){
	//array
	int array[4];
	int i;
	
	//input array
	for(i=0;i<4;i++){
		printf("data Array[%d] : ",i); scanf("%d", &array[i]);
	}
	
	//akses array
//	printf("%d", array[0]);
//	printf("%d", array[1]);
//	printf("%d", array[2]);
//	printf("%d", array[3]);
	
	//akses array dengan perulangan
	printf("\n");
	for(i=0;i<4;i++){
		printf("%d, ",array[i]);
	}
	
}
