/*Nama File 	: CekSeriPositif*/
/*Deskripsi 	: Menampilkan nilai kebenaran apakah masukkan bernilai negatif atau tidak pada layar*/
/*Pembuat   	: 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan	: Rabu 9 Maret 2022*/

#include<stdio.h>

int main(){
    //kamus
    float a,b,c,Total;
    //algoritma
    printf("Program CekSeriPositif \n");
    printf("Masukkan nilai tahanan 1: ");
    scanf("%f", &a);
    printf("Masukkan nilai tahanan 2: ");
    scanf("%f", &b);
    printf("Masukkan nilai tahanan 3: ");
    scanf("%f", &c);

    if ((a && b && c) >= 0) {
    Total = (a + b + c);
    printf("Nilai total adalah %.2f ", Total);
    } else{
    printf("Masukkan tahanan tidak boleh negatif");
    }
return 0;
}
