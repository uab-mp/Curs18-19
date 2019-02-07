#include <iostream>

using namespace std;

int main()
{
	int n;
	float x, resultat = 1;

	cout << "Introdueix un numero: ";
	cin >> x;
	cout << "Introdueix exponent: ";
	cin >> n;

	if (n < 0)
	{
		n = -n; 
		x = 1 / x;
	}
	resultat = 1;
	for (int i = 1; i <= n; i++)
		resultat *= x;

	cout << "El resultat es " << resultat << endl;

	return 0;
}