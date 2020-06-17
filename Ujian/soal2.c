#include <stdio.h>
//mendeklarasikan array di dalam struktur

int main()
{

    struct Mahasiswa
    {
        char nama[25];
        int nim;
        float tugas;
        float keaktifan;
        float ujian;
        float nilai_akhir;
        char indeks;
    } Mhs, Mhs2;

    int menu;
    printf("=====Menu Proses Nilai Mahasiswa=====\n");
    printf("1. Mahasiswa ke-1\n");
    printf("2. Mahasiswa ke-2\n");
    printf("3. Exit\n");

menu:
    printf("Pilih menu: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Nama\t : ");
        scanf("%s", &Mhs.nama);
        printf("NIM\t : ");
        scanf("%d", &Mhs.nim);
        printf("\n");
        printf("\n==== Nilai yang diperoleh ====\n");
        printf("Keaktifan: ");
        scanf("%f", &Mhs.keaktifan);
        printf("Tugas\t : ");
        scanf("%f", &Mhs.tugas);
        printf("Ujian\t : ");
        scanf("%f", &Mhs.ujian);
        Mhs.nilai_akhir = (Mhs.keaktifan * 0.30) + (Mhs.tugas * 0.35) + (Mhs.ujian * 0.35);
        printf("Nilai akhir Mahasiswa-1 = %.3f\n\n", Mhs.nilai_akhir);
        goto menu;
        break;
    case 2:
        printf("Nama\t : ");
        scanf("%s", &Mhs2.nama);
        printf("NIM\t : ");
        scanf("%d", &Mhs2.nim);
        printf("\n");
        printf("==== Nilai yang diperoleh ====\n");
        printf("Keaktifan: ");
        scanf("%f", &Mhs2.keaktifan);
        printf("Tugas\t : ");
        scanf("%f", &Mhs.tugas);
        printf("Ujian\t : ");
        scanf("%f", &Mhs2.ujian);
        Mhs2.nilai_akhir = (Mhs2.keaktifan * 0.30) + (Mhs2.tugas * 0.35) + (Mhs2.ujian * 0.35);
        printf("Nilai akhir Mahasiswa-2 = %.3f\n\n", Mhs2.nilai_akhir);
        goto menu;
    case 3:
        printf("Terima kasih. have a nice day! :)\n");
        return 0;
        break;
    default:
        printf("Pilih menu dengan benar! ");
        goto menu;
        break;
    }

    // //Memasukan nilai ke dalam M
    // printf("Input Nilai Praktikum Mahasiswa 1\n");
    // printf("=====================================\n\n");

    // printf("\nInput Nilai Praktikum Mahasiswa 2\n");
    // printf("=====================================\n\n");

    //
    //

    // float mhs = Mhs.nilai_akhir;
    // float mhs2 = Mhs2.nilai_akhir;

    // printf("Nilai Mahasiswa 1 = %.3f\n", mhs);
    // printf("Nilai Mahasiswa 2 = %.3f\n", mhs2);

    // if (mhs > mhs2)
    // {
    //     printf("nilai Mahasiswa 1 lebih besar dari Mahasiswa 2");
    // }
    // else if (mhs < mhs2)
    // {
    //     printf("nilai Mahasiswa 2 lebih besar dari Mahasiswa 1");
    // }
    // else
    // {
    //     printf("nilai kedua mahasiswa sama");
    // }

    return 0;
}
