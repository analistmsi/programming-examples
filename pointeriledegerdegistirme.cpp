#include<iostream>//adres kullanarak deger degistirme
using namespace std;
void degerdonustur(int *,int *,int *);

int main(){
	
	int a,b,c;
	cout<<"3 sayi giriniz:";
	cin>>a>>b>>c;
	cout<<"ilk adresler ve degerler:"<<endl;
	cout<<endl<<&a<<"	"<<a<<endl;
	cout<<endl<<&b<<"	"<<b<<endl;
	cout<<endl<<&c<<"	"<<c<<endl;
	
	degerdonustur(&a,&b,&c);
	cout<<"fonksiyondan sonraki adresler ve degerler:"<<endl;
	cout<<endl<<&a<<"	"<<a<<endl;
	cout<<endl<<&b<<"	"<<b<<endl;
	cout<<endl<<&c<<"	"<<c<<endl;
	
}//x asl�nda a'n�n adresidir. yani a'y� g�sterir. *x ise a'n�n de�eri.


void degerdonustur(int *x,int *y,int *z){
	//sadece de�er de�i�ikli�i yap�ld��� i�in void fonk kulland�k.
	
	cout<<"ilk pointer adresleri:"<<endl;
	cout<<endl<<&x<<"	"<<x<<"	"<<*x<<endl;
	cout<<endl<<&y<<"	"<<y<<"	"<<*y<<endl;
	cout<<endl<<&z<<"	"<<z<<"	"<<*z<<endl<<"-------------";
	
	int	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;
	
	cout<<"son pointer adresleri:"<<endl;
	cout<<endl<<&x<<"	"<<x<<"	"<<*x<<endl;
	cout<<endl<<&y<<"	"<<y<<"	"<<*y<<endl;
	cout<<endl<<&z<<"	"<<z<<"	"<<*z<<endl<<"-------------";
}
