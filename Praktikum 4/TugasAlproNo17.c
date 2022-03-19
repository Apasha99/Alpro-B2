/*Nama File : TarifPLN.c*/
/*Deskripsi : Menghitung besarnya tarif pemakaian listrik dan menampikan nya pada layar*/
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 19 Maret 2022*/

#include <stdio.h>

int main (){
	//Kamus
	int g,d,T;

    //Algoritma
	printf("Membuat Program Tarif PLN \n");
	printf("Golongan Tarif  : ");
	scanf("%d", &g);
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &d);

	if(g==1 || g==2){
        if(d>=100){
            if(d<1000){
                T = d*g*1000;
                printf("Maka besarnya tarif PLN yaitu: %d", T);
            }else{
                T = d*g*1000*1.1;
                printf("Maka besarnya tarif PLN yaitu: %d", T);
            }
        } else {
            printf("Minimal pembayaran 100kWH", g);
        }
	} else{
        printf("Masukan golongan salah", d);
	}
    return 0;
}
