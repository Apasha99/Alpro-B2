/*Nama File : TugasAlproNo20.c*/
/*Deskripsi : Mengecek dan menampilkan hasil kesempurnaan suatu bilangan integer*/
/*            sembarang N( N > 0 ) pada layar.*/
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 15 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b;
    b = 0;

	printf("Program Mengecek Bilangan Sempurna \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Masukkan bilangan positf");
    }
    else {
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                b = b + i;
            }
        }
        if (N == b) {
            printf("%d Bilangan sempurna", N);
        }
        else {
            printf("%d Bukan bilangan sempurna", N);
        }
    }
}
