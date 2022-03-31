//Nama File : Tetris1_24.c
//Deskripsi : Menampilkan susunan karakter '*' sesuai masukan keyboard pada layar.
//Nama      : Elisabeth zefanya putri
//NIM       : 24060121120032
//Kelas     : B

#include <stdio.h>

int main (){
	//Kamus
	int N,i,j;

	//Algoritma
	printf("Membuat Program susunan '*' \n");
	printf("Masukan nilai N (N > 0)  : ");
	scanf("%d", &N);

	for (i = 1; i <= N; i++){
		for (j = i; j <= N; j++){
			printf("*");
		}
		printf("--%i\n", i-j);
	}
	return 0;
}
