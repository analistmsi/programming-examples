#include<iostream>
using namespace std;
//buras� 'size' faktoriyeli hesaplar 
int carp(int matris[],int size){
	int carpim=1;
	int i=0;
	for(;i<size;i++){
		carpim*=matris[i];
	}
	return carpim;
}
//buraya kadar fonksiyon

int main(){
	int sayilar[4]={1,2,3,4};//burda dizi tan�mlad�k
	cout<<carp(sayilar,4)<<endl;//burdada fonksiyon �a��rd�k 
}
