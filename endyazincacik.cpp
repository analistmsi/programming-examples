#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout << "karakter giriniz:" << endl;
	int harf[500], i=0;
	bool durum = true;
	while(durum){
/* 
-�nce e girdin 2 ko�ul sa�lanmad� i 1 oldu
-n girdin 1 ko�ul sa�lanmad� i 2 oldu
-d girdin ko�ullar sa�land� 2 - 2 =0 
-harf[0] =e -- 2-1 = 1
-harf[1] = n -- 2-0 =2
-harf[2] = d
*/
		harf[i] = getch();
		cout << (char)harf[i];
		if(harf[i-2] == (int)'e' &&
		   harf[i-1] == (int)('n') && 
	       harf[i] == (int)('d'))
		{
			durum = false;
		}
		i++;
	}
}
