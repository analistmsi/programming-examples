#include<iostream>//hepsinin boyutu ayn� dolay�s�yla pointer�n boyutu hepsini kullanmaya yeterlidir
using namespace std;
int main(){
	
		printf("%d \n",sizeof(int*));
		printf("%d \n",sizeof(float*));
		printf("%d \n",sizeof(char*));
		printf("%d \n",sizeof(double*));
		cout<<sizeof(void*);	
}
