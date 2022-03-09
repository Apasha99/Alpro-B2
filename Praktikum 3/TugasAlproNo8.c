/*Nama File 	: CekHari*/
/*Deskripsi 	: Menampilkan nama hari dari nomor hari yang dimasukkan pada layar*/
/*Pembuat   	: 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan	: Rabu 9 Maret 2022*/

#include<stdio.h>

int main(){
    //kamus
    int h;

    //algoritma
    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &h);

    switch (h){
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jumat");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Masukkan nomor hari tidak tepat");
    }

 return 0;
}
