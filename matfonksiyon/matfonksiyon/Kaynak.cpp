#include<iostream>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int islemno;
	cout << "1) derece toplama" << endl;
	cout << "2) derece çikarma" << endl;
	cout << "3) derece çarpma" << endl;
	cout << "4) derece bölme" << endl;
	cout << "islem numarasi giriniz: ";
	cin >> islemno;
	if (islemno == 1) {
		int derece1, derece2, dakika1, dakika2, saniye1, saniye2;
		cout << "ilk sayilari giriniz: ";
		cin >> derece1 >> dakika1 >> saniye1;
		cout << "ikinci sayilari giriniz: ";
		cin >> derece2 >> dakika2 >> saniye2;
		int saniyetoplam = 0;
		int saniyekalan = 0;
		int saniyeartan = 0;
		saniyetoplam = saniye1 + saniye2;
		if (saniyetoplam >= 60) {
			saniyeartan = saniyetoplam / 60;
			saniyekalan = saniyetoplam % 60;
			saniyetoplam = saniyekalan;
		}
		int dakikatoplam = 0;
		int dakikaartan = 0;
		int dakikakalan = 0;
		dakikatoplam = dakika1 + dakika2 + saniyeartan;
		if (dakikatoplam >= 60) {
			dakikaartan = dakikatoplam / 60;
			dakikakalan = dakikatoplam % 60;
			dakikatoplam = dakikakalan;
		}
		int derecetoplam = 0;
		derecetoplam = dakikaartan + derece1 + derece2;
		cout << "derece: " << derecetoplam << " dakika: " << dakikatoplam << " saniye: " << saniyetoplam << endl;
	}
	if (islemno == 2){
		int derece1, derece2, dakika1, dakika2, saniye1, saniye2;
		cout << "cikarma islemini sectiniz.." << endl;
		cout << "ilk sayilari giriniz: ";
		cin >> derece1 >> dakika1 >> saniye1;
		cout << "ikinci sayilari giriniz: ";
		cin >> derece2 >> dakika2 >> saniye2;
		
		if (saniye1 < saniye2) {
			dakika1 = dakika1 - 1;
			saniye1 = saniye1 + 60;
		}
		int saniyesonuc;
		saniyesonuc = saniye1 - saniye2;
		
		if (dakika1 < dakika2) {
			derece1 = derece1 - 1;
			dakika1 = dakika1 + 60;
		}
		int dakikasonuc;
		dakikasonuc = dakika1 - dakika2;
		int derecesonuc;
		derecesonuc = derece1 - derece2;
		cout << "derece: " << derecesonuc << " dakika: " << dakikasonuc << " saniye: " << saniyesonuc << endl;
	}
	if (islemno == 3) {
		int derece, dakika, saniye, carpan;
		cout << "çarpma islemi sectiniz.." << endl;
		cout << "degeri girin: ";
		cin >> derece >> dakika >> saniye;
		cout << "kaç ile çarpailacak: ";
		cin >> carpan;
		int derecesonuc, dakikasonuc, saniyesonuc;
		derecesonuc = derece * carpan;
		dakikasonuc = dakika * carpan;
		saniyesonuc = saniye * carpan;
		cout << "derece: " << derecesonuc << " dakika: " << dakikasonuc << " saniye: " << saniyesonuc << endl;
	}

	if (islemno == 4) {
		cout << "bölme islemi sectiniz.." << endl;
		int derece, dakika, saniye, bölen;
		cout << "degeri girin: ";
		cin >> derece >> dakika >> saniye;
		cout << "kaca bölmek istiyorsun: ";
		cin >> bölen;

		if (derece % bölen != 0) {
			derece = derece - 1;
			dakika = dakika + 60;
		}

		if (dakika % bölen != 0) {
			derece = derece - 1;
			dakika = dakika + 60;
		}

		if (saniye % bölen != 0) {
			dakika = dakika - 1;
			saniye = saniye + 60;
		}
		if (derece % bölen != 0) {
			derece = derece - 1;
			dakika = dakika + 60;
		}

		if (dakika % bölen != 0) {
			derece = derece - 1;
			dakika = dakika + 60;
		}

		if (saniye % bölen != 0) {
			dakika = dakika - 1;
			saniye = saniye + 60;
		}
		int derecesonuc, dakikasonuc, saniyesonuc;
		derecesonuc = derece / bölen;
		dakikasonuc = dakika / bölen;
		saniyesonuc = saniye / bölen;
		cout << "derece: " << derecesonuc << " dakika: " << dakikasonuc << " saniye: " << saniyesonuc << endl;
	}

}