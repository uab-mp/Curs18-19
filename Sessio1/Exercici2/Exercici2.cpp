#include <iostream>

using namespace std;

int main()
{
	int nGrup;
	char dia;

	cout << "Introdueix numero de grup: ";
	cin >> nGrup;
	cout << "Introdueix dia de la setmana: ";
	cin >> dia;
	switch (nGrup)
	{
	case 41:
		if (dia == 'L')
			cout << "Aula: Q1/1003" << endl;
		else
			if (dia == 'X')
				cout << "Aula: Q3/1009" << endl;
			else
				cout << "Aquest dia no hi ha classe d'aquest grup" << endl;
		break;
	case 43:
		if ((dia == 'M') || (dia == 'J'))
			cout << "Aula: Q2/1009" << endl;
		else
			cout << "Aquest dia no hi ha classe d'aquest grup" << endl;
		break;
	case 45:
	case 51:
		if ((dia == 'L') || (dia == 'X'))
			cout << "Aula: Q3/1007" << endl;
		else
			cout << "Aquest dia no hi ha classe d'aquest grup" << endl;
		break;
	case 47:
	case 52:
		if (dia == 'M')
			cout << "Aula: Q1/1007" << endl;
		else
			if (dia == 'J')
				cout << "Aula: Q3/1003" << endl;
			else
				cout << "Aquest dia no hi ha classe d'aquest grup" << endl;		break;
	default:
		cout << "Grup Erroni" << endl;
		break;
	}
	return 0;
}
