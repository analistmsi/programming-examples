#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
	
	srand(time(NULL));
	int random[100],tp[25],temp;
	for(int i=0;i<100;i++){
		random[i]=rand()%25;	//0-25 aras�
		cout<<random[i]<<" ";
	}cout<<endl;
	
	for(int i=0;i<100;i++){		//100 sayi olusturuldu.
		if(i<25)		//bunu yapmazsak degerler rastgele bir seye esiy olur.
			tp[i]=0;	//bu sayede hepsi 0 dan baslar ve max sayisi bulunur.
		for(int j=0;j<25;j++){	//0-25 aras� de�er.
			if(random[i]==j)
				tp[j]++;	//tp[0]-tp[24]
		}
	}
	int max=tp[0];
	for(int i=1;i<25;i++){
		if(max<tp[i]){
			max=tp[i];		//tekrar say�s�
			temp=i;			//tp[0]-tp[24] i�indeki de�erler.
		}
	}
	cout<<endl<<"en cok tekrar eden sayi: "<<temp<<endl<<"tekrar sayisi: "<<max;
}
