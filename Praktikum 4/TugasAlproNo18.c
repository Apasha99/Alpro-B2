/*Nama File : FaktorBil.c*/
/*Deskripsi : Menghitung dan menampilkan faktor-faktor bilangan dari bilangan integer
/*            sembarang N( N > 0 ) pada layar.*/
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 15 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;

	printf("Program Menampilkan Faktor dari Bilangan Integer \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Masukkan bilangan positf");
    }
    else {
        printf("Faktor-faktor bilangan tersebut adalah \n");
        for (i = 1; i <= N; i++) {
            if (N % i == 0){
                printf(" %d,", i);
            }
        }
    }
}
