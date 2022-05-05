/*Nama File 	: insertion_sort.c*/
/*Deskripsi 	: pengurutan data dengan cara membandingkan dan mengurutkan dua data
pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah
berada di tempat semestinya*/
/*Pembuat   	: 24060121120032-Elisabeth zefanya putri*/
/*Tgl Pembuatan	: 5 Mei 2022*/


#include <stdio.h>

void insert(int a[], int n) /* fungsi untuk mengurutkan array dengan insertion sort */
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while(j>=0 && temp <= a[j])  /* Pindahkan elemen yang lebih besar dari variabel sementara ke satu posisi di depan dari posisi mereka saat ini*/
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
}

void printArr(int a[], int n) /* fungsi untuk mencetak array */
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[] = {2,14,9,34,64,13,99,12,10,3,24,9,18};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Elements before sorting are: \n");
    printArr(a, n);
    insert(a, n);
    printf("\nThe elements after sorting are: \n");
    printArr(a, n);

    return 0;
}
