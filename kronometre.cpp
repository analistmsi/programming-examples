#include <iostream>
#include <unistd.h> // sleep fonkiyonu i�in
#include <conio.h> // getch i�in
#include <time.h> // zaman fonksiyonu
using namespace std;
int main() {
	
	time_t baslangic, bitis;
	
	cout << "baslamak icin bir tusa bas:" << endl;
	getch();	 // bir karakter al�r
	
	time(&baslangic);	 // o an�n s�resini al�r
	
//	sleep(2); 		// 2 saniye bekler

	cout << "durdurmak icin bir tusa bas:" << endl;
	getch();
	
	time(&bitis); 	// son an�n s�resini al�r
	
	cout << "gecen sure: " << difftime(bitis,baslangic) / 60; 
	
	//zaman saniye cinsindendir bunu dakika, saat olarak ayarlayabiliriz.
	// aradaki zaman fark�n� hesaplar 
	return 0;
}
