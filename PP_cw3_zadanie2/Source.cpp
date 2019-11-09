#include<iostream>
#include<math.h>
using namespace std;

void  wyznacz_pierwiastki_rown_kw() {
	float a, b, c;
	float delta;
	cout << "Pierwiastki trojmianu kwadratowego" << endl;
	cout << "Wspolczynik a = "; cin >> a;
	if (a == 0) {
		cout << "Niepoprawna wartosc a!";
		return;
	}
	cout << "Wspolczynik b = "; cin >> b;
	cout << "Wyraz wolny c = "; cin >> c;
	delta = b * b - 4 * a * c;
	float skladnik1 = -b / (2 * c);
	float skladnik2 = sqrt(abs(delta)) / (2 * a);

	cout << "****************** wyniki obliczen ******************" << endl;
	if (delta > 0) {
		cout << "x1" << skladnik1 - skladnik2 << endl;
		cout << "x2" << skladnik1 + skladnik2;
	}
	else {

	}



}