#include <iostream>
using namespace std;

float calculaNota(float teoria, float problemes, float practiques, char& acta)
{
	float notaFinal = -1;
	acta = ' ';
	if ((teoria != -1) && (problemes != -1) && (practiques != -1))
	{
		notaFinal = 0.4*teoria + 0.3*problemes + 0.3*practiques;
		if (notaFinal < 5)
			acta = 'S';
		else
			if (notaFinal < 7)
				acta = 'A';
			else
				if (notaFinal < 9)
					acta = 'N';
				else
					if (notaFinal < 10)
						acta = 'E';
					else
						acta = 'M';
	}
	return notaFinal;
}

int main()
{
	float notaFinal, notaTeoria, notaProblemes, notaPractiques;
	char notaActa;
	char continuar;
	do
	{
		cout << "Introdueix nota de teoria: ";
		cin >> notaTeoria;
		cout << "Introdueix nota de problemes: ";
		cin >> notaProblemes;
		cout << "Introdueix nota de practiques: ";
		cin >> notaPractiques;
		notaFinal = calculaNota(notaTeoria, notaProblemes, notaPractiques, notaActa);
		if (notaFinal == -1)
			cout << "No Presentat" << endl;
		else
		{
			cout << "Nota numerica: " << notaFinal << endl;
			cout << "Nota de l'acta: " << notaActa << endl;
		}
		cout << "Vols continuar? (S/N):" ;
		cin >> continuar;
	} 
	while (continuar == 'S');
	
	return 0;
}