// Jonathan Vazquez Rivera
// jvazquez441@email.uagm.edu

#include <iostream>

using namespace std;

int main()
{
	double ciudadA, ciudadB, tasaA, tasaB, years=0;

	cout << "Ingrese la poblacion de la ciudad A: ";
	cin >> ciudadA;

	cout << "Tasa A: ";
	cin >> tasaA;

	cout << "Ingrese la poblacion de la ciudad B: ";
	cin >> ciudadB;

	cout << "Tasa B: ";
	cin >> tasaB;

	tasaA = tasaA / 100;
	tasaB = tasaB / 100;


	while (ciudadA < ciudadB)
	{
		ciudadA = ciudadA + (ciudadA * tasaA);
		ciudadB = ciudadB + (ciudadB * tasaB);
		cout << "Poblacion A while: " << ciudadA << endl;
		cout << "Poblacion B while: " << ciudadB << endl << endl;;
		years++;
	}

	cout << "Años que se demoro en la ciudad A pasar la ciudad B: " << years << endl;
	cout << "Poblacion A: " << ciudadA << endl;
	cout << "Poblacion B: " << ciudadB << endl;

	return 0;
	
}
