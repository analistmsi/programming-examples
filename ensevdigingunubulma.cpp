#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int i,c[8];
	string b,gunler[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};

	for(i=0;i<7;i++){	//en fazla 7. denemede bulur.
     c[i]=rand()%7;	 //�retilen de�erleri tutar.
	  for(int j=0;j<=i;j++){	//i=6 ise bu da 6 ya kadar gider.
	   if(c[i]==c[j-1]){	//j-1 yazmasak kendisiyle kars�last�r�r ve d�ng�den ��kamaz.
		c[i]=rand()%7;
		 j=0;	//j=5 iken de�er uret�rse �nceki de�erleri kontrol edemez.
		}
	}
		if(i!=6){
		cout<<"en sevdiginiz gun: "<<gunler[c[i]]<<"'mi?"<<endl;
		cin>>b;}
		if(b=="evet"){
			cout<<i+1<<". denemede buldum."<<endl;
			break;
		}
		else{
			if(i==6)
				cout<<"en sevdiginiz gun: "<<gunler[c[i]]<<endl;
		}
	}
}
