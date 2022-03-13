#include <stdio.h> // standart giri� c�k�� k�t�phanesi
#include <math.h> // matematik k�t�phanesi

int hesapla(int, int); // us hesaplama fonksiyon prototipi

int main() 
{
	int x,n,sonuc; // de�erleri tan�mlad�k
	
	printf("x (taban) degerini giriniz:"); // ekrana metni bast�k 
	scanf("%d",&x); // kullan�c�dan x de�erini ald�k
	printf("n (us) degerini giriniz:"); // ekrana metni bast�k
	scanf("%d",&n); // kullan�c�dan n de�erini ald�k
	sonuc = hesapla(x,n); // sonu� de�i�kenine hesapla fonksiyonunu atad�k
	printf("sonuc = %d",sonuc); // ekrana sonucu bast�k
	return 0;
}
// girilen x ve n de�erlerine g�re sonucu hesaplad�k 
int hesapla(int x, int n)
{
	int tp=0,i; // toplam de�erini 0 a e�itledik ve d�ng� i�in i de�i�keni tan�mlad�k.
	for(i=0; i<=n; i++) // i de�erini 0 a e�itledik. i yi her d�ng�de 1 artt�rd�k. girilen n de�erine kadar d�ng�y� devam ettirdik. 
	{
		tp += pow(x,i); // pow fonksiyonu �s alma i�ini g�r�r. toplam� her d�ng�de yeni gelen de�erle toplad�k. 
	}
	return tp; // tp (toplam) de�i�kenini d�nd�rd�k.
}
