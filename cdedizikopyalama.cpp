#include<stdio.h>
#include<string.h>
int main(){
	char a[20]="burhan",b[10];//karakter dizileri e�itlenemez.
	strcpy(b,a);//�nce kopyalanacak dizi yaz�l�r.
	printf("%s",b);
	return 0;
}
//c++ da stringler e�itlenebilir.

