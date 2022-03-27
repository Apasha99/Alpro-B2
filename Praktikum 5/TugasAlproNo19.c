/*Nama File : TugasAlproNo19.c*/
/*Deskripsi : Mengecek dan menampilkan hasil ketidakprimanan suatu bilangan integer
/*           sembarang N( N > 0 ) pada layar.*/
/*Pembuat   : 24060121120032-Elisabeth Zefanya Putri*/
/*Tgl Pembuatan : 15 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int N, i, P;
	P = 0;

	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &N);

	if ( N <= 0) {
        printf("Bilangan Harus Positif");
	}
	else {
        for (i = 2; i < N; i++) {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d Bukan Bilangan prima", N);
        }
        else {
            printf("%d Bilangan prima", N);
        }
	}
	return 0;
}
