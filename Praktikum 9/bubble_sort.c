/*Nama File 	: bubble_sort.c*/
/*Deskripsi 	: pengurutan data dengan cara menukar dua data yang bersebelahan jika urutan dari data tersebut salah*/
/*Pembuat   	: 24060121120032-Elisabeth zefanya putri*/
/*Tgl Pembuatan	: 5 Mei 2022*/

#include<stdio.h>
 void print(int a[], int n) //fungsi untuk mencetak elemen array
    {
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    }
 void bubble(int a[], int n) // fungsi untuk mengimplementasikan bubble sort
 {
   int i, j, temp;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 }
void main ()
{
    int i, j,temp;
    int a[13] = {2,14,9,34,64,13,99,12,10,3,24,9,18};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Elements before sorting are: \n");
    print(a, n);
    bubble(a, n);
    printf("\nThe elements after sorting are: \n");
    print(a, n);
}
