#include <stdio.h>

int main()
{

    union bangunDatar {
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
    union kalkulator {
        int a;
        int b;
        int c;
    } penjumlahan, pengurangan, pembagian;

    printf("a = ");
    scanf("%d", &penjumlahan.a);
    printf("b = ");
    scanf("%d", &penjumlahan.b);

    penjumlahan.c = penjumlahan.a + penjumlahan.b;

    printf("hasil penjumlahan = %d", penjumlahan.c);
}