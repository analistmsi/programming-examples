#include<iostream>
using namespace std;
enum sehirler{
	hatali, adana, adiyaman, afyon, agri, amasya, ankara, antalya, artvin, aydin, balikesir, bilecik, bingol, bitlis, bolu, burdur, bursa, canakkale, cankiri, corum, denizli, diyarbakir, edirne, elazig, erzincan, erzurum, eskisehir, gaziantep, giresun, gumushane, hakkari, hatay, isparta, mersin, istanbul, izmir, kars, kastamonu, kayseri, kirklareli, kirsehir, kocaeli, konya, kutahya, malatya, manisa, kahramanmaras, mardin, mugla, mus, nevsehir, nigde, ordu, rize, sakarya, samsun, siirt, sinop, sivas, tekirdag, tokat, trabzon, tunceli, sanliurfa, usak, van, yozgat, zonguldak, aksaray, bayburt, karaman, kirikkale, batman, sirnak, bartin, ardahan, igdir, yalova, karabuk, kilis, osmaniye, duzce,
};
int main(){
	enum sehirler il;
	il=gaziantep;
	cout<<il;
}
