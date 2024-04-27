#include <iostream>

using namespace std;


int main() {
	const int MaxLinha = 4;
	const int MaxColuna = 5;
	

	int maxtemp[4][5];// =
	//{
		//{35,28,25,20,24},
		//{15,19,23,35,32},
		//{34,36,30,31,30},
		//{31,36,38,32,26}
	//};

	for (int i = 0; i < MaxLinha; i++)
	{

		for (int j = 0; j < MaxColuna; j++)
		{   
			
			cin >> maxtemp[i][j];
		}
	}

	for (int y = 0; y < MaxLinha; y++) {
		
		for (int k = 0; k < MaxColuna; k++) {
			
			cout << maxtemp[y][k] << "\t";
			
		}

	}


	return 0;
}