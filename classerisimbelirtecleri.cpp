#include <iostream>
using namespace std;
class myclass {
	public:		// public - �yelere s�n�f d���ndan eri�ilebilir
		int x;
	private:	// private - �yelere s�n�f d���ndan eri�ilemez (veya g�r�nt�lenemez)
		int y;
};
int main() {
	
	myclass obj;
	obj.x = 25;
	//obj.y = 30;	// hata verir 
	cout << obj.x ;	
//	cout << obj.y; // hata verir
	
}
