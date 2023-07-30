//============================================================================
// Name        : Sayi_Tahmin.cpp
// Author      : Mehmet Mikail Karaman
// Version     :
// Copyright   : Your copyright notice
// Description : Number guessing game
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	int tahmin;
	char cevap='e';
	srand(time(NULL));

	while (cevap == 'e'){
		int rastgele_sayi =rand() % 100;
		cout<<"Rastgele bir sayı tuttum."<<endl;
		cout<<"Hadi tahmin et"<<endl;
		cout<<"Tahmin: "<<endl;
		cin>>tahmin;

			while(tahmin!=rastgele_sayi){
				if(tahmin<rastgele_sayi){
					cout<<"Tahminin tuttuğum sayıdan küçük."<<endl;

				}
				else{
					cout<<"Tahminin tuttuğum sayıdan büyüktür."<<endl;
				}
				cout<<"Tekrar tahmin et: "<<endl;
				cin>>tahmin;
			}

			cout<<"Tebrikler, bildiniz tuttuğum sayı : "<<rastgele_sayi<<"idi."<<endl;

			cout<<"Tekrar oynamak ister misin? (Evet:e , Hayır: h)"<<endl;
			cout<<"Cevap: ";
			cin>>cevap;
		}

	cout<<"Güle Güle...";


	return 0;
}
