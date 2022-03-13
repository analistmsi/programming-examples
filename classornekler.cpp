#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class ogrenci{
	private:
		string ad;
		int no;
	public:
		void deger_Ata(string ad, int no)
		{
			this->ad = ad;
			if(no < 0 ){
				cout << "hatali giris!" << endl;
				this->no = -1;
			}else
			this->no = no;
		}
		void deger_Bas()
		{
			cout << ad << " " << no << endl;
		}			
};






int main()
{
	/*
	Yap�sal programlamada i�ler fonksiyonlarla halledilir.
	Struct yap�s� i�inde fonksiyon kullanamazs�n.
	OOP ise ger�ek d�nyaya d�n�k programlamad�r.
	Bir s�n�f vard�r ve bu s�n�f�n nesnesinin �zellikleri vard�r.
	Struct da bu �ekilde ama bu daha geli�mi�.
	Baz� de�erleri gizleyebiliriz.
	S�n�f i�inde fonksiyon kullanabiliriz.
	
	*/
	ogrenci ogrenci1;
	ogrenci1.deger_Ata("burhan", 252);
	ogrenci1.deger_Bas();
	ogrenci1.deger_Ata("kamil", -5);
	ogrenci1.deger_Bas();
}
