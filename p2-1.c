#include <stdio.h> // standart giri� c�k�� k�t�phanesi
#include <locale.h> // t�rk�e karakter seti i�in ekledik 

// fonksiyon en y�ksek notu hesaplad�
int yuksekpuan(int a[10][2]){ // fonksiyon 10 a 2 lik matris de�eri ald�
    int eb = 0,i,j; // de�i�kenleri tan�mlad�k
    for(i=0; i<10; i++){ // sat�r say�s� 10 kadar artt�
        for(j=0; j<2; j++){ // s�tun say�s� 2 ye kadar d�nd�
            if(a[i][j]>=60&&a[i][j]>eb){ // e�er yeni de�i�kende not 60 dan b�y�kse ve en b�y�kten b�y�kse ;
                eb = a[i][j]; // en b�y�k(eb) not de�eri g�ncellendi 
            }
        }
    }
    return eb; // en b�y�k de�eri d�nd�rd�k
}
// en d���k notu hesaplayan fonksiyon olu�turduk
int dusukpuan(int a[10][2]){ // fonksiyon 10 a 2 lik matris de�eri ald�
    int ek = 100,i,j; // de�i�kenleri tan�mlad�k
    for(i=0; i<10; i++){ // sat�r say�s� 10 kadar artt�
        for(j=0; j<2; j++){ // s�tun say�s� 2 ye kadar d�nd� 
            if(a[i][j]>=60&&a[i][j]<ek){ // e�er yeni de�i�kende not 60 dan b�y�kse ve en k���kten k���kse;
                ek = a[i][j]; //en k���k(ek) not de�eri g�ncellendi 
            }
        }
    }
    return ek; // en k���k de�eri d�nd�rd�k 
}
 // ortalama hesaplayan fonksiyon tan�mlad�k
void orthesap(int a[10][2]){ // fonksiyon 10 a 2 lik matris de�eri ald�
	float ort; // kesirli say� t�r�nde  ort de�i�keni olu�turduk
	int i; // d�ng� sayac� tan�mlad�k
	for(i=0; i<10; i++){ // sat�r say�s� 10 kadar artt�
		ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6)); // ortlamay� ilk notun %40 ile ikinci notun %60 n�n toplam�na e�itledik
		printf("\n%.2f ",ort); // kesirli ortalaman�n noktadan sonra sadece 2 basama��n� ekrana bast�rd�k.
	}
	printf("\n\n"); // 2 sat�r asa�� 
}
// bu fonksiyon not ortalamas�na g�re ��rencinin ge�ip ge�meyece�ini hesapl�yor
void gecme(int a[10][2]){ 
	int i,j;
	float ort;
	for(i=0; i<10; i++){
			ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6)); 
			if(ort>=60){ // e�er ortalama 60 dan b�y�k e�itse ekrana ge�ti yazar
				printf("%d. ��renci ge�ti.\n",i+1);
			}
	}
	printf("\n");
}
// bu fonksiyon not ortalamas�na g�re ��rencinin kal�p kalmayaca��n� hesapl�yor
void kalma(int a[10][2]){
	int i,j;
	float ort;
	for(i=0; i<10; i++){
			ort = (a[i][0]*(0.4) )+ (a[i][1]*(0.6));
			if(ort<60){ // e�er ortalama 60 dan k���kse ekrana kald� yazd�r�r
				printf("%d. ��renci kald�.\n",i+1);
			}
	}
		printf("\n");
}

int main() {
	system("color F"); // yaz� rengini ayarlar
	setlocale(LC_ALL,"Turkish"); // t�rk�e karakter kullanabilmek i�in gereklidir
	int i,sayi,hata=1;
    int notlar[10][2] = { // ��renci notlar�n� matris ile atad�k
    {60,90},{70,80},{50,40},{35,90},{75,85},
    {45,38},{78,54},{67,90},{85,64},{50,100},
    };
    printf("Ho� Geldiniz...\n��lem Se�iniz:\n");
    for(i=0; i<30; i++){
    	printf("*");
	}
	printf("\n");
	// men� k�sm�
    while(1){
    	label:
    printf("1.Ge�me notu en y�ksek ��renci:\n");
    printf("2.Ge�me notu en d���k ��renci:\n");
    printf("3.Dersin vize ve vinal ortalamalar�:\n");
    printf("4.Dersten ge�en ��renciler:\n");
    printf("5.Dersten kalan ��renciler:\n");
    printf("��kmak i�in -1 e bas�n�z.\n");
    scanf("%d",&sayi);
    switch(sayi){ // girilen say�ya g�re ko�ula girdi
    	case -1:
    		break;
    	case 1:
    		printf("En y�ksek puan: %d\n\n",yuksekpuan(notlar));
    		break;
    	case 2:
    		printf("En d���k puan: %d\n\n",dusukpuan(notlar));
    		break;
    	case 3:
    		orthesap(notlar);
    		break;
    	case 4:
    		gecme(notlar);
    		break;
    	case 5:
    		kalma(notlar);
    		break;
    	default: // e�er di�er ko�ullar sa�lanmazsa bu k�sma girer
    		printf("Hatal� i�lem yapt�n�z...\nMen�ye d�nmek i�in 1'e bas�n�z.\n");
    		scanf("%d",&hata);
    		if(hata==1){ 
    			goto label;
			}else{
				break;
			}
	}
	if(sayi==-1||hata!=1){ // birden fazla hata durumu olursa men�den ��k�� durumu
		printf("�yi G�nler...");
		break;
	}
    }
    return 0;
}
