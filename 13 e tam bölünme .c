#include<stdio.h>//100'den 0'a kadar 13'e tam b�l�nebilen say�lar� ekrana yazd�r�n�z (b�y�kten k����e).

int main(){
	int i;
	for(i=100;i>0;i--){
		if(i%13==0) {
			printf("%d\n",i);
		}
		else {
			continue;
		}
	}
	printf("bu sayilar 13 e kalansiz bolunur.");
	return 0;
}
