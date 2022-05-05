/*Nama File 	: counting_sort.c*/
/*Deskripsi 	: pengurutan data dengan cara menghitung jumlah kemunculan dari setiap data yang berada di dalam array*/
/*Pembuat   	: 24060121120032-Elisabeth zefanya putri*/
/*Tgl Pembuatan	: 5 Mei 2022*/

#include<stdio.h>

int getMax(int a[], int n) {
   int max = a[0];
   for(int i = 1; i<n; i++) {
      if(a[i] > max)
         max = a[i];
   }
   return max; //elemen maksimum dari array
}

void countSort(int a[], int n) // berfungsi untuk melakukan counting sort
{
   int output[n+1];
   int max = getMax(a, n);
   int count[max+1]; //membuat array hitungan dengan size [max+1]


  for (int i = 0; i <= max; ++i)
  {
    count[i] = 0; // Inisialisasi array hitungan dengan nol
  }

  for (int i = 0; i < n; i++) // Simpan hitungan setiap elemen
  {
    count[a[i]]++;
  }

   for(int i = 1; i<=max; i++)
      count[i] += count[i-1]; //cari frekuensi kumulatif

  /* Loop ini akan menemukan indeks dari setiap elemen dari array asli di count array, dan
   tempatkan elemen dalam array keluaran*/
  for (int i = n - 1; i >= 0; i--) {
    output[count[a[i]] - 1] = a[i];
    count[a[i]]--; // kurangi hitungan untuk angka yang sama
}

   for(int i = 0; i<n; i++) {
      a[i] = output[i]; //simpan elemen yaSebelum menyortir elemen array adalahng diurutkan ke dalam baris utama
   }
}

void printArr(int a[], int n) /* fungsi untuk mencetak array*/
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int a[] = {2,14,9,34,64,13,99,12,10,3,24,9,18};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Elements before sorting are: \n");
    printArr(a, n);
    countSort(a, n);
    printf("\nThe elements after sorting are: \n");
    printArr(a, n);
    return 0;

}
