#include <stdio.h>
#include <string.h> // metin i�lemleri i�in eklenen k�t�phane
#include <stdlib.h> // standart k�t�phane 

struct ogrenci degerAl();  // ogrenci t�r�nde de�er d�nd�recek
char universite(struct ogrenci); // char d�nd�recek ama ogrenci t�r�nde nesne almas� gerekiyor

struct ogrenci {	// bizi altta tan�m yapmaktan kurtard� 
	int ales;
	int yds;
	int toefl;
	int mulakat;
	float notort;
	char disiplin[20];
};

int main() {
	
	system("color F");	//yazi rengi
	struct ogrenci muhammed; // ogrenci t�r�nde nesne olu�turduk 
	muhammed = degerAl();	// yap�lar e�itlendi 
	if(universite(muhammed) == 0) {
		printf("maalesef hicbir universiteyi kazanamadiniz.");
	} else {
		printf("%c universitesini kazandiniz.",universite(muhammed));	
	}
}

struct ogrenci degerAl(){
	struct ogrenci yeni;
	printf("ALES puanini giriniz:\n");
	scanf("%d",&yeni.ales);
	printf("YDS puanini giriniz:\n");
	scanf("%d",&yeni.yds);
	printf("TOEFL puanini giriniz:\n");
	scanf("%d",&yeni.toefl);
	printf("Mulakat puanini giriniz:\n");
	scanf("%d",&yeni.mulakat);
	printf("Not ortalamasini giriniz:\n");
	scanf("%f",&yeni.notort);
	printf("Disiplin suc durumunu giriniz:\n");
	scanf("%s",&yeni.disiplin);
	return yeni; // bu de�erleri d�nd�rd�k
	
}
// her �niversitenin ko�ulu ayr� ayr� belirlendi
char universite(struct ogrenci yeni){
	if((yeni.ales>=70 || yeni.notort>=3.00) && yeni.mulakat>=60 && (yeni.yds>=70 || yeni.toefl>=220)) 
	{
		return 'A';
	} 
	else if((yeni.ales>=50 || yeni.notort>=3.00) && yeni.mulakat>=70 && (yeni.yds>=60 || yeni.toefl>=180) && strcpy(yeni.disiplin,"hayir"))
	{
		return 'B';
	} 
	else if((yeni.ales>=40 || yeni.notort>=2.20) && yeni.mulakat>=80 && (yeni.yds>=85 || yeni.toefl>=250)) 
	{
		return 'C';
	} 
	else 
	{
		return 0;
	}
}
