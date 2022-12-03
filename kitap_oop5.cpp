#include <iostream>
#include <ctime>

using namespace std;

class ConstOrnek{
	public:
		mutable int sayi; // const da sayiyi de�i�tirmeye yarad�
		ConstOrnek(){ // constructor 
			sayi = 0;
		}
		
		void SayiAta(int x){
			sayi = x;
		}
		
		int dondur() const{ // de�i�mez yapt�k
			return sayi;
		}
		void SayiyiSifirla() const{ // normalde const fonksda sayi de�i�mez
			sayi = 0; // mutable sayesinde de�i�ti
		}
};

int main()
{
	const ConstOrnek test;
	ConstOrnek test2;
	
	test.dondur(); // nesne ve fonk const oldu�u i�in hata yok
//	test.SayiAta(5); // nesne const ama fonk const de�il hata!!

	test.SayiyiSifirla();
	
	test2.SayiAta(5);
	test2.dondur(); 
	cout << test2.dondur();	
	
	system("pause");
	return 0;
	
}
