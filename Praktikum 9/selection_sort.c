/*Nama File 	: selection_sort.c*/
/*Deskripsi 	: mencari nilai tertinggi / terendah di dalam array kemudian menempatkan
nilai tersebut di tempat semestinya.*/
/*Pembuat   	: 24060121120032-Elisabeth zefanya putri*/
/*Tgl Pembuatan	: 5 Mei 2022*/


#include <stdio.h>

void selection(int arr[], int n)
{
    int i, j, small;

    for (i = 0; i < n-1; i++)    // Satu per satu batas gerakan dari subarray yang tidak disortir
    {
        small = i; //elemen minimum dalam array yang tidak disortir

        for (j = i+1; j < n; j++)
        if (arr[j] < arr[small])
            small = j;
// Tukar elemen minimum dengan elemen pertama
    int temp = arr[small];
    arr[small] = arr[i];
    arr[i] = temp;
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
    printf("Elements before sorting are:\n");
    printArr(a, n);
    selection(a, n);
    printf("\nThe elements after sorting are: \n");
    printArr(a, n);
    return 0;
}
