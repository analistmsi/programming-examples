#include <iostream>
#include <cmath> // t�m fonksiyonlar gelir 
// math.sqrt yapmak daha az yer kaplar ��nk� sadece 
// o fonksiyonu �a��r�r�z
using namespace std;
int main()
{
	double x = 3;
	double y = 4;
	double uzaklik = sqrt(x*x + y*y); // karek�k
	cout << "nokta(" << x << "," << y << ")\n";
	cout << "uzaklik = " << uzaklik << endl;
	return 0;
}
// fonksiyonun �al��ma ortam� hakk�nda varsay�mda 
// bulunmamas� gerekir. veri giri�i main de olur.
// ��nk� herkes sonu� alan bir program yazmak zorunda
// de�il. g�revi o i�i yapmak

