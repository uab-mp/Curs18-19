#include <iostream>

using namespace std;

int main()
{
	const float LLLINDAR_1 = 50.0, LLINDAR_2 = 70.0, LLINDAR_3 = 90.0;
	float import, cupo = 0.0;

	cout << "Valor de compra: " << endl;
	cin >> import;

	if (import < LLLINDAR_1)
		cupo = 0;
	else
		if (import < LLINDAR_2)
			cupo = 1;
		else
			if (import < LLINDAR_3)
				cupo = 2;
			else
				cupo = 3;

	cout << "Valor del cupo: " << cupo << "%" << endl;
	
	return 0;
}