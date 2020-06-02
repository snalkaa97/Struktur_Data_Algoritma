#include <stdio.h>

int main()
{

	struct bangunDatar
	{
		float jari; //elemen / atribut
		float luas;
		int keliling;
		int sisi;
	} lingkaran, lingkaran2, persegi; //objek

	lingkaran.jari = 3, 0;
	lingkaran.luas = 3.14 * (lingkaran.jari * lingkaran.jari);

	lingkaran2.jari = 5.5;
	lingkaran2.luas = 3.14 * (lingkaran2.jari * lingkaran2.jari);

	printf("luas lingkaran = %f\n", lingkaran.luas);
	printf("luas lingkaran 2 = %f\n", lingkaran2.luas);

	printf("masukan sisi persegi = ");
	scanf("%d", &persegi.sisi);

	persegi.keliling = persegi.sisi + persegi.sisi + persegi.sisi + persegi.sisi;

	printf("keliling persegi = %d\n", persegi.keliling);

	//kalkulator
	struct kalkulator
	{
		float a;
		float b;
		float c;
	} penjumlahan, pengurangan, pembagian;

	printf("a = ");
	scanf("%f", &penjumlahan.a);
	printf("b = ");
	scanf("%f", &penjumlahan.b);

	penjumlahan.c = penjumlahan.a + penjumlahan.b;

	printf("hasil penjumlahan = %f", penjumlahan.c);
}