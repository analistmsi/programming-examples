#include <iostream>
#include <ctime>
using namespace std;
int main() {
	
	time_t saat; // time_t: veri tipi
	cout << ctime(&saat); // 1970
	time(&saat); // �uan�n tarihi, mevcut zaman� i�ler
	cout << ctime(&saat); // 2021
	
}
