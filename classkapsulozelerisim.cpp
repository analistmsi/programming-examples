#include <iostream>
using namespace std;
class personel {
	private:
		int maas;
	public:
		void maasata(int m){
			maas = m;
		}
		int maasdon(){
			return maas;
		}
};

int main(){
	
	personel obj;
	obj.maasata(5000);
	cout << obj.maasdon();
	return 0;
	
}
/*
Neden Kaps�lleme?
--> S�n�f niteliklerinizi �zel olarak (yapabildi�iniz s�kl�kta) 
beyan etmeniz iyi bir uygulama olarak kabul edilir. Kaps�lleme,
verilerinizin daha iyi kontrol edilmesini sa�lar, ��nk� siz 
(veya ba�kalar�) di�er b�l�mleri etkilemeden kodun bir b�l�m�n�
de�i�tirebilirsiniz.
--> Artan veri g�venli�i
*/
