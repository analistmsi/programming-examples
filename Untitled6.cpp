#include <stdio.h>
#include <time.h>
/*A��klama
Program�n ba�lat�lmas�ndan itibaren ge�en saat tik say�s�n� geri d�nd�r�r.
Elde edilen sonucu saniyeye d�n��t�rmek i�in CLOCKS_PER_SEC de�erine 
b�lmek gerekir.
Bir program�n ger�ek i�lem s�resini hesaplamak i�in, yap�lan i�lemden 
�nce ve sonra fonksiyona yap�lan iki �a�r� ile elde edilen de�erlerin 
fark� al�n�r.*/
int main(void)
{
    clock_t start_t, end_t;
    int id;

    start_t = clock();

    for(id=0; id<100; id++) {
        printf("%d ", id);
    }

    end_t = clock();

    printf("\nstart_t de�eri: %ld\n", start_t);
    printf("end_t de�eri: %ld\n", end_t);
    printf("CPU s�reci (saniye): %f\n", (double)(end_t - start_t) / CLOCKS_PER_SEC);

    return 0;
}

