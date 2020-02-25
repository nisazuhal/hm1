

//Nisa Zuhal KACAN
//18120205002
//#include "pch.h"
#include <iostream>


using namespace std;

/* düz üçgen  */
void duzUcgen(int deger)
{
	
	if(deger < 3 ||deger > 15 || deger % 2 != 1){		//uygun değeri yazmak için 3 deneme şansı veriyor
			for(int r = 0; r < 3; r++){
				if(deger >= 3 && deger <= 15 && deger % 2 == 1)
					break;
				else if(r == 2)
					break;
				
				cout << "Lutfen Gecerli Bir Sayi Girin " << 2-r << " hakkiniz Kaldi" << endl;
				cin >> deger;
			
			}
		}
	int n = (deger + 1) / 2;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++)
			cout << " " << " ";

		for (int j = 0; j <= 2 * i; j++)
			cout << "*" << " ";

		cout << endl;
	}
}



/*ters üçgen */
void tersUcgen(int deger)
{
	if(deger < 3 ||deger > 15 || deger % 2 != 1){		
			for(int r = 0; r < 3; r++){
				if(deger >= 3 && deger <= 15 && deger % 2 == 1)
					break;
				else if(r == 2)
					break;
				
				cout << "Lutfen Gecerli Bir Sayi Girin " << 2-r << " hakkiniz Kaldi" << endl;
				cin >> deger;
			
			}
		}

	int n = (deger + 1) / 2;
	int i = 0, j = 1, k = 0;

	while (i < n) {
		while (j <= k) {
			cout << " " << " ";
			++j;
		}
		j = 1;
		++k;

		while (j <= 2 * (n - i) - 1) {
			cout << "*" << " ";
			++j;
		}
		j = 1;
		++i;
		cout << endl;
	}
	i = 0;
}



/*elmas */
void elmas(int deger)
{
	if (deger < 5 || deger > 15 || deger % 2 != 1)
	{
		for (int r = 0; r < 3; r++) {
			if (deger >= 5 && deger <= 15 && deger % 2 == 1)
				break;

		}
	}
	duzUcgen(deger);
	tersUcgen(deger);
}


int main()
{
	int sayi = 0, boyut = 0;

	cout << "Lutfen yazdirmak istediginiz sekli seciniz:" << endl;
	cout << "Duz Ucgen icin:1'i" << endl << "Ters Ucgen icin:2'i";
	cout << endl << "Elmas icin:3'u" << endl << "Cikis icin 0'i" << endl;
	cout << "seciniz." << endl;
	cout << endl;
	cin >> sayi;

	if (sayi < 0 || sayi > 3) {
		for (int r = 0; r < 3; r++) {
			if (sayi >= 0 && sayi <= 3)
				break;
			else if (r == 2)
				return -1;

			cout << "Lutfen Gecerli Bir Sayi Girin " << 2 - r << " hakkiniz Kaldi" << endl;
			cin >> sayi;



		}
	}

	if (sayi == 0)
		return 0;

	cout << "Lutfen Sekil Boyutunu Girin" << endl;
	cin >> boyut;
	if (sayi == 1)
		duzUcgen(boyut);
	else if (sayi == 2)
		tersUcgen(boyut);
	else if (sayi == 3)
		elmas(boyut);
	return 0;
}







