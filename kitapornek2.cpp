#include <iostream>
using namespace std;

double kare(double x)
{
	x *= x;
	return x;	
}

int main()
{
	double kenar;
	double (*fonk)(double); // int *n gibi ama bu fonksiyon- fonk g�stericisi
	
	fonk = kare; // fonksiyon e�itlemesi yap�ld�.
	cout << fonk << endl; 
	kenar=5;
	
	cout << "karenin alani:" << fonk(kenar) << "metre kare" <<  endl;
	system("PAUSE");
}
