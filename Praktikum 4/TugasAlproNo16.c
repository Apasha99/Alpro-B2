/*Nama File : TunjAnak.c*/
/*Deskripsi : Menghitung dan menampilkan du layar besar tunjangan anak
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 19 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int a,g,T;

	//algoritma
    printf("Membuat Program Tunjangan Anak \n");
	printf("Jumlah Anak  : ");
	scanf("%d", &a);
	printf("Gaji Pokok  : ");
	scanf("%d", &g);

	if ( g > 0) {
		if(a>=0){
		    if(a<3){
		        T = a*(g*10/100);
		        printf("Maka tunjangan anak : %d", T);
		    } else{
                T = 3 *(g*10/100);
                printf("Maka tunjangan anak : %d", T);
		    }
		} else{
            printf("Masukan jumlah anak harus positif atau nol", a);
		}
	} else{
        printf("Masukan gaji harus bilangan positif", g);
	}
	return 0;
}
