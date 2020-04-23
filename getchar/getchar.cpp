#include<stdio.h>
int main()
{
	char nama1[20], kar;
	int a;
	puts("masukkan nama anda : "); scanf("%s", &nama1);
	printf("masukkan angka yang anda suka : "); scanf("%d", &a);
	getchar();
	puts("\n\nHai "); puts(nama1);
	puts("Selamat belajar bahasa C");
	printf("\n\nAnda menyukai angka %d", a);
	getchar();
	puts("Terimakasih");
	return 0;
}
