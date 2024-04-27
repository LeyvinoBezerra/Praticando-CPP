#include <iostream>


using namespace std;

const int Cids = 4;
const int Anos = 5;

int main() {
	
	const char * cidades[Cids] =
	{"Mossoro", "Caraubas", "Angicos", "Paulos dos Ferros"};
	
	int maxtemp[Cids][Anos] =
	{
		{35,28,25,20,24},
		{15,19,23,35,32},
		{34,36,30,31,30},
		{31,36,38,32,26}
	};
	cout << "Temperatura maxima dos ultimos anos:\n \n ";

	for (int i = 0; i < Cids; ++i) {

		cout << cidades[i] << ":\t";
		for (int j = 0; j < Anos; ++j)
			cout << maxtemp[i][j] << "\t";
		cout << endl;
	}

	return (0);
}