#include <iostream>
using namespace std;
int main()
{
	int sayi=8;
	char harf='c';
	void *deger;
	void (int *)x;
	
	deger = &sayi;
	cout << "sayi:" << *(int *)deger << endl;
	
	cout << sizeof(deger) << endl; // her iki boyutta ayn�
	cout << sizeof((int *)deger) << endl;
	
	cout << sizeof(x) << endl;
	cout << sizeof((int)x) << endl;
	
	deger = &harf; 
	cout << "harf:" << *(char *)deger << endl;
	
	// e�er d�n���m yap�lmazsa hata verir. ��nk� 
	// void bo�, bir �eyi ifade etmez. *deger ya-
	//p�l�rsa adresi basar. dolay�s� ile void bir
	// de�i�ken olu�turulup daha sonradan ihtiyaca
	// g�re bir de�i�kene �evirilebilir.
	system("pause"); // durmas�n diye
}
