#include <iostream>

int main()
{
	std::cout << "Necati Ergin\n";
	operator<<(std::cout, "Tekin Aslan\n");
	//std::cout << endl; 
	endl(std::cout);
	//(endl)(std::cout); 
}


/*
std::cout << "Necati Ergin\n";
Burada �a�r�lan operator<< i�levi std isim alan� i�inde bildirilmesine kar��n isim arama ile bulunuyor.
Fonksiyona g�nderilen arg�man olan std::cout std isim alan� i�inde oldu�undan operator<< i�lev ismi std isim alan�nda da aran�yor.
operator<<(std::cout, "Tekin Aslan\n");
Ayn� durum burada da ge�erli. operator<< ADL nedeniyle std isim alan�nda aran�yor.
std::cout << endl;
Burada ADL devreye girmiyor. ��nk� �a�r�lan i�lev endl i�levi de�il. endl operator<< i�levine arg�man olarak g�nderiliyor.
(endl)(std::cout);
Burada da endl fonksiyonu do�rudan �a�r�lm�yor. ADL devreye girmiyor.
*/