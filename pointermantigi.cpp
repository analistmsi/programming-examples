#include<iostream>
using namespace std;
int main(){
	
	int *p,a=10;
	p=&a;//p nin gosterdigi adrese an�n adresini atad�k 
	
	printf("%d\n",*p);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d\n",&p);
	printf("%d\n",&*p);
	printf("%d\n",*&p);


}
