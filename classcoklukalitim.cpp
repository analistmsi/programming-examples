#include <iostream>
using namespace std;
class myclass {
	public:
		void myfunction(){
			cout << "myclass \n";
		}
};

class myotherclass {
	public:
		void myotherfunction(){
			cout << "myotherclass";
		}
};

class mychild: public myclass, public myotherclass{
};

int main(){
	
	mychild myobj;
	myobj.myfunction();
	myobj.myotherfunction();
	return 0;
		
}
/*
Miras veya biyolojik miras olarak da adland�r�lan kal�t�m,
�zelliklerin ebeveynlerden yavrular�na ge�mesidir.
*/
