#include<stdio.h>//Bir i��i bir i�i 10 g�nde yapabilmektedir. Buna g�re 2 i��i ayn� i�i ka� g�nde yapar?

int main(){
	int is,isci;
	printf("bir isci bu isi kac gunde yapar: ");
	scanf("%d",&is);
	printf("kac isci yapacak: ");
	scanf("%d",&isci);
	is=is/isci;
	printf("%d gunde biter.",is);
	
	return 0;
}
