/*Nama file : TugasAlproNo22.c*/
/*Deskripsi : Menampilkan program siputnaik yang berada pada lubang sedalam N meter
/*             yang dimasukkan melalui keyboard yang nilai N>0 dan ditampilkan pada layar*/
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 26 Maret 2022*/

#include <stdio.h>

int main(){
    /*Kamus*/
    float N,i;
    int hari;

    /*Algoritma*/
    printf("Membuat Program Siput Naik \n");
    printf("Masukkan kedalaman lubang :");
    scanf("%f", &N);

    hari = 0;
    i = 0;
    while (i < N-0.1)
    {
        hari = hari + 1;
        i = i + 0.2;
    }
    printf("Siput membutuhkan %i hari untuk mencapai ujung lubang", hari);
    printf("\nNilai N : %.2f\n", N);
    printf("\nNilai i : %.2f\n", i);


}
