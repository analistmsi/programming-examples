#include <iostream>
#include <string>
using namespace std;
class arac { // temel s�n�f (ebeveyn) - miras al�nan s�n�f
	public:
		string brand = "ford";
		void korna() {
			cout << "Tuut, tuut! \n";
		}
};
// t�retilmi� s�n�f (�ocuk) - ba�ka bir s�n�ftan miras alan s�n�f - car
// Bir s�n�ftan miras almak i�in : sembol� kullan�n .
class car: public arac {
	public:
		string model = "mustang";
};

int main() {
	car mycar;
	mycar.korna();
	cout << mycar.brand + " " + mycar.model;
}
