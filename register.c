#include<stdio.h>
  
int main()
{
    int i = 10;
    register int* a = &i;
    printf("%d", *a);
    getchar();
    return 0;
}
/*
->	Kay�tlar�n eri�imi bellekten daha h�zl�d�r, 
	bu nedenle bir C program�nda en s�k kullan�lan 
	de�i�kenler, register anahtar s�zc��� kullan�larak 
	kay�tlara yerle�tirilebilir . Anahtar s�zc�k kayd�, 
	derleyiciye belirli bir de�i�kenin bir kayda konulabilece�ini 
	g�sterir. Bir sicile koyup koymamak derleyicinin se�imidir. 
	Genel olarak, derleyicilerin kendileri optimizasyonlar yapar 
	ve de�i�kenleri kay�t defterine koyar.

->	register anahtar s�zc��� i�aret�i de�i�kenleri 
	ile kullan�labilir. A��kt�r ki, bir kay�t, 
	bir haf�za konumunun adresine sahip olabilir.
*/
