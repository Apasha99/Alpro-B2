/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan nama bulan dari nomor hari yang dimasukkan pada layar*/
/*Pembuat   	: 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan	: Rabu 9 Maret 2022*/

#include<stdio.h>

int main(){
    //kamus
    int b;
    //algoritma
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &b);

    switch (b){
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    default:
        printf("Masukkan nomor bulan tidak tepat");
    }
return 0;
}
