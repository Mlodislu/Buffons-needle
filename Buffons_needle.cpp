#include <iostream>
#include <cmath>
#include <ctime>  
#include <cstdlib>
#define MATH_PI 3.1415;

using namespace std;

int main(){
	srand(time(NULL));

	double dlugosc_igly, ilosc_prob, szer_miedzy_liniami, kat, pi, ilosc_przeciec = 0;
	double odl_igly_od_linii, y, stosunek_trafien;
		
	cout << "Prosze podac liczbe prob:\n";
	cin >> ilosc_prob;
	cout << "Prosze podac dlugosc igly:\n";
	cin>> dlugosc_igly;
	cout << "Prosze podac szerokoœæ miedzy liniami:\n";
	cin >> szer_miedzy_liniami;

	if (ilosc_prob <= 0.0 || dlugosc_igly > szer_miedzy_liniami){
		cout << "Nast¹pi³ b³¹d wynikaj¹cy z podania niepoprawnych danych\n";
		return 1;
	}

	for (int i = 0; i<ilosc_prob; i++){
		kat = ((double)rand() / RAND_MAX)*MATH_PI;       
		odl_igly_od_linii = ((double)rand() / RAND_MAX)*szer_miedzy_liniami / 2;         
		y = (dlugosc_igly / 2) * sin(kat);

		if (odl_igly_od_linii <= y){ilosc_przeciec++;}
	}

	stosunek_trafien = ilosc_prob / ilosc_przeciec;
	pi = stosunek_trafien * 2 * dlugosc_igly / szer_miedzy_liniami;

	cout << "Liczba Pi wynosi: " << pi << endl<<endl;

	return 0;
}