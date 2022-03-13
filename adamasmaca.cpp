//Gerekli k�t�phaneler
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>
void enOrtala(int klmUzun) //metni bo�luklarla ortaya kadar sa�a kayd��r�r.
{
	int i,en=168;
	for(i=0;i<(en-klmUzun)/2;i++){printf(" ");}
	return;
}
void boyOrtala(int satirSayi) //metni satir atlayarak ortaya kadar ta��r.
{
	int j,boy=44;
	for(j=0;j<(boy-satirSayi)/2;j++){printf("\n");}
	return;
}
void adamCiz(int b) //oyunda kullan�lan adam asmaca fig�rlerini �izer
{
	switch (b)
	{
		case 1:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 2:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 3:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |    |    \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 4:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|    \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 5:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |         \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 6:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    O    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |   /     \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		case 7:{
			printf("  _______   \n");
			printf("  |/   :    \n");
			printf("  |    X    \n");
			printf("  |   /|\\  \n");
			printf("  |    |    \n");
			printf("  |   / \\  \n");
			printf("_/-\\_______\n");
			printf("===================================");
			break;
		}
		default:{                     //hata yap��lmam��sa bo� b�rak�r
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("            \n");
			printf("Henuz adam asilmaya baslanmadi.\n");
			printf("===================================");
			break;
		}
	}
}
void kelimeDurumu(int sehirUzun,int bulunan,char dizi1[],int d1,char dizi2[],int d2)  //kelimenin bulunamayan karekterleri i�in nokta, 
{                                                                                     //bulunan karekterleri i�in harfi yerine koyan fonksiyon
	int i,j;                              //sayaclar
	printf("\nKelimenin Durumu: ");
	for(i=0;i<sehirUzun;i++){      		  //d�ng� kelimenin uzunlu�unun tamam� i�in devam eder	
		for(j=0;j<=bulunan;j++){		  //bulunan karekter say�s�nca devam eder
			if(dizi1[i]==dizi2[j]){
				printf("%c",dizi2[j]);    //harf vas ise harfi koy 
				break;	                  //ve d�g�den ��k
			}	
		}
		if(dizi1[i]!=dizi2[j]){           //d�g�den ��kt�kdan sonra harfi tekrar kontrol eder yoksa nookta koyar
			printf(".");
		}
	}
}
char oyun(void) {//adam asmaca oyunudur. geri d�n���n�n char olmas�n�n nedeni oyun men�s�nde d�ng� kontrol etmek i�in
	char aciklama[]="Aciklama: Adam asmaca, bir harf tahmin oyunudur.Ve kelimeler sehir ismidir.\n\n\n";
	char oyunKural[]="-----------OYUN KURALLARI----------\n";
	char kural1[]=">7 tahmin hakkina sahipsiniz.\n";
	char kural2[]=">Harf veya kelime tahmin edebilirsiniz.\n";
	char kural3[]=">Yanlis tahmin yaptiginizda harf sayisinca tahmin hakki kaybedersiniz.\n";
	char kural4[]=">Harf disinda bir karakter girildiginde tekrar tahmin etmeniz istenecektir.\n";
	char kural5[]=">Tek tek harf girilirken pes pese 2 sesli harf giremezsiniz.\n";
	char kural6[]=">Turkce karakter girmeyiniz!\n";
	char basla[]="Baslamak icin Enter'a basiniz:";
	int aciklamaUzun=strlen(aciklama),baslaUzun=strlen(basla);
	system("CLS");
	boyOrtala(8);
	enOrtala(aciklamaUzun);
	printf("%s",aciklama);
	enOrtala(aciklamaUzun);
	printf("%s",oyunKural);
	enOrtala(aciklamaUzun);
	printf("%s",kural1);
	enOrtala(aciklamaUzun);
	printf("%s",kural2);
	enOrtala(aciklamaUzun);
	printf("%s",kural3);
	enOrtala(aciklamaUzun);
	printf("%s",kural4);
	enOrtala(aciklamaUzun);
	printf("%s",kural5);
	enOrtala(aciklamaUzun);
	printf("%s",kural6);
	//yukar�da oyun kurallar� ekran�n ortas�na yazd�r�l�r
//	sleep(5);//5 sn bekler
	system("CLS");//ekran� temizler
	boyOrtala(1);
	enOrtala(baslaUzun);
	printf("%s",basla);scanf("%c");getchar();//oyuna ba�lamak i�in enter � bekler
	system("CLS");
	char sehirler[16][15]={"AFYONKARAHISAR","MUS","VAN","ERZURUM","GAZIANTEP","BAYBURT","KIRIKKALE","KAHRAMANMARAS","CANKIRI","TRABZON","RIZE","KARS","ORDU","ANKARA","ANTALYA","ZONGULDAK"};
	//yukar�da kullan�lan kelimeler dizisi tan�mlan�r
	char sesliHarf[5]={'A','E','I','O','U'};// sesli harfler tan�mlan�r
	srand(time(NULL));//rand fonksiyonunu zamana ba�lar
	int nu=rand() % 16;//rasgele say� �retir ve bunu "nu" ya atar
	int tekrar,sesli,bul=0,yanlis=0,buldu=0,kontrol=0,ifade=0,bulunan=0,hak=0,l=0,k=1,i,j,n,t,q,y,w,e,u,p,r,s,c,b,m,a,sehirUzun=strlen(sehirler[nu]);
	//d�ng�de kullan�lan saya�lar ve kontrol i�in gereken de�i�kenler                                                 //�ehrin uzunlu�u  
	char tahminEski[50],dy[5],tahmin[15],bulunanlar[15]="xxxxxxxxxxxxxx";
	//yukar�dakiler s�ras�yla eski tahmini,do�ru yanl�� ifadesini,tahmini,bulunanlar� char dizisinde tutar
    boyOrtala(4);
	printf("\n===================================\n");
    for(r=0;r<sehirUzun;r++){
    	printf(".");
	}
	printf("(%d Harfli bir sehir.)",sehirUzun);
	printf("\n===================================\n");
    //yukar�da oyun baslamadan �nce �ehrin uzunlu�u g�sterilir
	while(hak!=7 && bulunan!=sehirUzun) //oyunun harf tahmininin devam edece�i d�ng� 
	{
		k=1; //tekrarlana d�ng�den sonra kontol� ilk haline d�nderir
		while(k==1){ //bu d�ng� sesli harf kontrol� i�in
			s=1;   //tekrarlana d�ng�den sonra kontol� ilk haline d�nderir
			while(s==1){	//bu d�ng� cikmis harfin tekrar girilmemesi i�in	
				ifade=0;   //tekrarlana d�ng�den sonra kontol� ilk haline d�nderir
				while(ifade==0){ //bu d�ng� girilen karakterin harf olup olmad���n� kontrol etmek i�in
					printf("\nHarf veya harf grubu tahmin ediniz:");scanf("%s",&tahmin);//harf tahminini al�r
					for(w=0;w<strlen(tahmin);w++){
						ifade=isalpha(tahmin[w]);//girilern her karakterin harf olup olmad���n� kontrol eder 
						if(ifade==0){printf("Hatali karakter girdiniz!");ifade=0;}//harf de�ilse hata verir ve tekrar tahmin yap�lmas�n sa�lar
						else{ifade=1;}//harf ise d�ng�den ��kart�r
					}
				}
				
				for(n=0;n<strlen(tahmin);n++){tahmin[n]=toupper(tahmin[n]);}//harfleri b�y�k harfe �evirir
		    	for(a=0;a<strlen(bulunanlar);a++){
		    		for(m=0;m<strlen(tahmin);m++){
		    			if(bulunanlar[a]==tahmin[m]){//tahmin i�erisindeki harfler bulunan harf dizisini kar��la�t�r�r
		    				tekrar=1;
						}
					}
				}
				if(strcmp(tahmin,sehirler[nu])!=0&&tekrar==1){              //tahmin �eihire e�it de�ilse ve yukar�daki ko�ul sa�lanm�sa,
					printf("Lutfen cikmis harfleri tekrar kullanmayiniz!"); //hata verir
					s=1;                                                    //d�ng�n�n tekrar etmesi i�in gereken ko�ul
					tekrar=0;                                               //tekrar eden d�g� i�in kontrol� s�f�rlar
				}
				else{
					s=0;                                                    //d�ng�den ��kart�r
					tekrar=0;												//kontrol� s�f�rlar
				}
			}
			if(kontrol==0){//sesli harf kontrol �art�  
				if(strlen(tahmin)==1){  //tek tek harf giri�ini kontrol eder
					for(b=0;b<5;b++){
						if(tahmin[0]==sesliHarf[b]){sesli=1;}//tahmin sesli harflerde varsa sesli 1 olsun
					}
					if(sesli==1){//yukar�daki ko�ullar sa�lanm��sa,
						k=0;     //1.tur i�in d�ng�den ��k
						kontrol=1;//kontrol� 1 yap ve 2. tur i�in harf sesli harf kontrol�ne girilmesini sa�lar
						sesli=0; //kontrol� s�f�rlar
					}
					else{//yukar�daki ko�ullar sa�lanmam��sa, 
						kontrol=0;//2. tur i�in harf kontrol�n� de�i�tirmez
						k=0;     //1. tur i�in d�g�den ��kar
						sesli=0;//kontrol� s�f�rlar
					}
				}
				else{//kelime grubu tahmin edilmi�se sesli harf kontrol� yapma
					k=0;//d�ng�den ��k
					kontrol=0;
				}
			}
			else{//2. tur i�in kontrol 1 ise,
				if(strlen(tahmin)==1){//tek tek harf kontrol� yap
					for(c=0;c<5;c++){
						if(tahmin[0]==sesliHarf[c]){//2.turda tahmin sesli harf kar��la�t�rmas� yap
							sesli=1;//kontrol� 1 yap
						}
					}
					if(sesli==1){//yukar�daki ko�ul sa�lanm��sa,
						printf("%s",kural5);//hata mesaj�n� bas
						k=1;//sesli harf d�ng�s�n� tekrarlat ve tekrar harf al�nmas�n� sa�la
						kontrol=1;//2.tur kontrol�n� de�i�tirme
						sesli=0;//kontrol� s�f�rlar
					}
					else{//yukar�daki ko��l sa�lanmam��sa,
						k=0;//d�ng�y� tekrarlama
						kontrol=0;//2. turda sesli harf girilmemi�se 1. tura geri g�der
						sesli=0;//kontol� s�f�rlar
					}
				}
				else{//2. turda kelime grubu girilmi�se,
					k=0;//d�ng�den ��k
					kontrol=0;//2. turda kelime grubu girilmi�se 1. tura d�n
				}
			}
		}
		if(strcmp(tahmin,sehirler[nu])!=0){//tahmin ile kelimenin kar��la�t�rmas�n� yap
			for(e=0;e<strlen(tahmin);e++){
				for(t=0;t<strlen(bulunanlar);t++){
					if(tahmin[e]==bulunanlar[t]){//kelime grubu tahmin edilirse hak artmamasi i�in bulunan sayisini azaltir
						bulunan--;
					//(bu d�ng� olmay�nca kelime grubu tahmin edilince hak art�yordu) 	
					}
				}	
			}
			if(strlen(tahmin)==1){//tek tek harf giriliyorsa,
				for(i=0;i<sehirUzun;i++){
					for(j=0;j<strlen(tahmin);j++){
						if(tahmin[j]==sehirler[nu][i]){//tahmin kelime i�erisinde varsa,
							bulunanlar[l]=tahmin[0];//bulunanlar dizisine en son tahminin do�ru olanlar�n� ekle
							bulunan++;//bulunan karakter say�s�m� artt�r
							buldu=1;//kontrol� 1 yap
							l++;//bulunanlar dizisinin s�radaki eleman�na ge�
						}			
					}
				}
			}
			else{//kelime grubu tahmin ediliyorsa,
				for(u=0;u<sehirUzun;u++){
					for(p=0;p<strlen(tahmin);p++){
						if(tahmin[p]==sehirler[nu][u]){//tahmin kelime grubu i�erisinde varsa,
							bulunanlar[l]=tahmin[p];//son tahminin do�ru olanlar�n� s�ras�yla bulunanlara ekle
							bulunan++;//do�ru say�s�nca bulunan� artt�r
							buldu=1;//kontrol� de�i�tir
							l++;//bulunanlar dizisinin s�radaki elaman�na ge�
							bul++;//kelime grubu i�in bulunan karakter say�s�n� artt��r
						}
					}
				}
			}
			if(strlen(tahmin)==1){//tahmin tek harf ise,
				if(buldu!=1){//bulunmam��sa
					dy[0]='Y';//son harf tahmini yanl��sa y yi dy dizisine ata
					hak++;// adam asma hakk�n� artt�r
					bul=0;// kontrol� s�f�rla
				}
				else {//kontrol sa�lanm��sa,
					bul=0;	//kelime grubu kontrol� s�f�rla		
					buldu=0;//kontrol� sIfIrla
					dy[0]='D';	//do�ruysa dy dizisine d ata
				}	
			}
			else{//tahmin kelime grubu ise,
				if(buldu!=1){//bulunmamI�sa,
					yanlis=strlen(tahmin)-bul;//yanlII� harf sayIIsInI hesapla
					hak=hak+yanlis;//yanlII� sayIsInca hak arttIr
					bul=0;//kelime grubu i�in kontrol� sIfIrla
				}
				else {//bulmu�sa
					yanlis=strlen(tahmin)-bul;//hem do�ru hem hatali karekter varsa yanlI� sayIsInI hesapla
					hak=hak+yanlis;//yanlI� kadar hak arttIr
					bul=0;//kelime grubu i�in kontol� sIfIrla
					buldu=0;//kontrol� sIfIrla
				}
			}
			system("CLS");//ekranI temizle
			boyOrtala(12);
			printf("===================================\n");
			adamCiz(hak);
			kelimeDurumu(sehirUzun,bulunan,sehirler[nu],sehirUzun,bulunanlar,l);
			printf("\nKalan tahmin hakkiniz:");
			printf("%d",7-hak);
			printf("\nSon Tahmininiz: %s",tahmin);
			if(strlen(tahmin)==1){printf("=>%c",dy[0]);}
		//	tahminEski[50]=tahmin;
			printf("\nKullandiginiz harfler => %s",strcat(tahminEski,tahmin));
			//yukarIda adamI,kelimenin son durumunu,tahmin hakkIn�, son tahminin do�rulu�unu,kullan�lan harfleri yaz		
		}
		else{//tahmin kelimenin tamam� ise,
			bulunan=sehirUzun;//t�m d�ng�den �Ik
		}
	}
	if(hak!=7){//oyun bitti�ide hak kalmI� ise,
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(40+sehirUzun);//ekranI ortala kelimenin uzunlu�u dahil	
		printf("Tebrikler %s sehrini dogru tahmin ettiniz.",sehirler[nu]);//ekrana ba�arI mesajIInI yaz
	}
	else{//oyun bitti�inde hak bitmi�se
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(27+sehirUzun);//ekranI ortala kelimenin uzunlu�u dahil
		printf("Basarisiz oldunuz.  Kelime:%s",sehirler[nu]);//ba�arIsIzlIk mesajInI ve kelimeyi ekrana yaz
	}
//	sleep(3);//3 sn beklet
	char yeni;		//bir daha oynamasI sorulmasI i�in gereken dizi
	int hatali=1;   // "   "      "         "       "     "   konrol
	while(hatali==1){//bir daha oynanmasI i�in sorulacak soru d�ng�s�
		system("CLS");//ekranI temizle
		boyOrtala(1);enOrtala(38);	
		printf("Yeniden oynamak istiyor musunuz? (E/H) :");scanf("%s",&yeni);//tekrar� sor ve karakter al
		yeni=toupper(yeni);//b�y�k harfe �evir
		if(yeni=='E'){// e ise tekrar oynamak i�in alttakileri yap
			hatali++;//d�ng�den ��k�lmas�n� sa�la
			system("CLS");//ekran� temizle
			boyOrtala(8);enOrtala(26);
			printf("Oyun yeniden baslatiliyor!");
			//sleep(1);
			oyun();//oyunu tekrar �a��r
			}
			else if(yeni=='H'){//h ise,
				hatali++;// d�ng�den ��k�lmas�n� sa�la
				system("CLS");//ekran� temizle
				boyOrtala(8);enOrtala(22);
				printf("Menuye geri donuluyor.");
				//sleep(1);
				//main();//ana fonksiyonu �a��r
			}
			else {//hatal� giri� yap�lmas� durumunda alttakileri yap
				system("CLS");//ekran� temizle
				boyOrtala(2);enOrtala(22);
				printf("Hatali giris yaptiniz!\n");
				enOrtala(22);
				printf("Tekrar Deneyiniz!");
				//sleep(3);//d�ng�den ��kma ve tekrar sor
			}
			
		}
		return yeni;//char gerid�n���
	}
int main() {//ana fonksiyon
	HWND konsol = GetConsoleWindow();
    MoveWindow(konsol, 0, 0, 10000, 10000, TRUE);//konsolu tam ekran i�in ayarla    
	char baslik[]="----------OYUN LISTESI----------\n",sec1[]="1)Adam Asmaca\n",sec2[]="2)Oyun2\n",sec3[]="3)Cikis\n\n";
	char secimMesaj[]="Secim Yapiniz:",yeni='E';
	int secim,i=0;//s�ras�yla al�nan se�im,saya�
	int en=strlen(baslik);//ba�l���n uzunlu�unu en'e ata 
	system("CLS");	
	boyOrtala(6);enOrtala(en);
	printf("%s",baslik);                                     
	enOrtala(en);
	printf("%s",sec1);
	enOrtala(en);
	printf("%s",sec2);
	enOrtala(en);
	printf("%s",sec3);
	enOrtala(en);
	printf("%s",secimMesaj);scanf("%d",&secim);
	//mesajlar� ekrana yaz
	switch(secim)//se�imin durumlar��
	{
		case 1:{
			while(yeni=='E'){//oyundan gelen d�n��e g�re tekrarlanan d�ng�
				oyun();//oyunu �a��r
				yeni=oyun();//oyunun gerid�n���n� yeni ye ata
			}
			break;
		}
		
		case 2:{
			char msj2_1[]="Oyun2 Yapim Asamasinda...";
			char msj2_2[]="Geri donmek icin Enter'a basiniz:";
			char hata[]="Hatali secim yaptiniz, program kapatiliyor!";
			int msj2_1Uzun=strlen(msj2_1),msj2_2Uzun=strlen(msj2_2),hataUzun=strlen(hata);//mesajlar� uzunluklar�n� hesapla
			system("CLS");
			boyOrtala(3);
			enOrtala(msj2_1Uzun);
			printf("%s\n",msj2_1);
			enOrtala(msj2_2Uzun);
			printf("%s",msj2_2);
			//mesajlar� ekrana yaz
			scanf("%c");getchar();//enter'� al (3 sn i�erisinde enter'� almay� yapamad�m ��nk� enter'� almak i�in s�resiz bekliyor)
			main();//men�ye d�nmek i�in ana fonksiyonu �a��r
			break;	
		}
		case 3:{
			system("CLS");
			char msj3_1[]="Cikis secenegini tercih ettiniz";
			char msj3_2[]="Program sonlandiriliyor...";
			int msj3_1Uzun=strlen(msj3_1),msj3_2Uzun=strlen(msj3_2);
			boyOrtala(2);
			enOrtala(msj3_1Uzun);
			printf("%s\n",msj3_1);
			enOrtala(msj3_2Uzun);
			printf("%s\n",msj3_2);
		//	sleep(3);
			//��k�� i�in mesajlar� ekrana yaz
			return 0;//��k�� yap
			break;
		}
		default :{//se�ime 1-2-3 den farkl� karakter girerse,
			char hata2[]="Hatali secim yaptiniz, program kapatiliyor!";
			int hata2Uzun=strlen(hata2);
			system("CLS");
			boyOrtala(1);enOrtala(hata2Uzun);
			printf("%s",hata2);
		//	sleep(3);
			//hata ver ve 3 sn beklet
			return 0;//��k�� yap
			break;
		}
	}
	return 0;//��k�� yap
}
