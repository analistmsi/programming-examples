#include <iostream>
#include <string>
using namespace std;

class animal {
	public:
		void animalSound() {
			cout << "the animal makes a sound \n";
		}
		int y;
	public:
		int x;
};
// t�retilmi�
class pig: public animal {
	public:
		void animalSound() {
			cout << "the pig says: wee wee \n";
		}
};
// t�retilmi�
class dog: public animal {
	public:
		void animalSound() {
			cout << "the dog says: bow wow \n";
		}
};

int main() {
	animal myAnimal;
	pig myPig;
	dog myDog;
	
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	
	
	
	pig nesne;
	nesne.x = 5;
	
	
	return 0;
}
/*
Polimorfizm biyolojide, iki veya daha fazla farkl� fenotipin ayn�
t�r pop�lasyonunda bulunmas�d�r. Terim k�keni bak�m�ndan Yunanca
"�ok" ve "bi�im" kelimelerinin bir araya gelmesiyle olu�mu�tur.
Ba�ka bir deyi�le, birden fazla bi�imin bulunmas� olarak da tan�mlanabilir.
*/
