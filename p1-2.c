#include<stdio.h> // standart k�t�phane 
#include<math.h> // matematik k�t�phanesi
#include<conio.h> // getch fonksiyonu i�in 

int main(){

    int satir, X=1; // sonuc de�erini 1 den ba�latt�k 
    int Y, bosluk, Z; // Y sat�r say�s�, Z s�tun say�s�n� ifade eder
    printf ("satir sayisini giriniz =");
    scanf("%d",&satir); // pascal ��geninin sat�r say�s� girilir
    printf("%d  satirlik pascal ucgeni \n\n", satir ); // ka� sat�rl�k oldu�unu ekrana basar 
    for(Y=0;Y<satir;Y++) // d�ng� satir sayisina kadar d�nd�
    {// bo�luk say�s� azal�rken bast�r�lan say� artar 
        for(bosluk=1;bosluk<=satir-Y;bosluk++) // bosluk say�s� her d�ng�de 1 azal�r 
		{
            printf(" "); // ��gen g�r�n�m� olu�mas� i�in �nce bo�luk b�rak�r 
        }
        for(Z=0;Z<=Y;Z++) // sat�r say�s� kadar ekrana say� basar 
        {
        if(Z==0||Y==0) // en d��ta ise 1 bast�r 
        {
        	X=1;
      	}
	    else // �st durumlar sa�lanmazsa X de�eri form�le g�re hesaplan�r 
		{
	    	X=X*(Y-Z+1)/Z; // pascal ��gen form�l�. x in de�eri hesapland� 
	    }
	    	printf ("%d ", X); // �stte gelen duruma g�re x say�s� bast�r�l�r
        }
        printf ("\n"); // sat�r sonunda di�er sat�ra ge�mesi i�in 
    }
    getch(); // konsolun kapanmas�n� engeller
	return 0; // main fonksiyonu geriye bi�ey d�nd�rmez ve program sonlan�r 
}
