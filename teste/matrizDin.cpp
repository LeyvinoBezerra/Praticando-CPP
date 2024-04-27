#include <iostream>
using namespace std;

int main()
{	
	cout << "Digite quantidade de linha e coluna da matriz:";
	int linhas, colunas;
	cin >> linhas >> colunas;

	int* mat = new int[linhas * colunas];

	for (int i = 0; i < linhas; ++i)
		for (int j = 0; j < colunas; j++)
			cin >> mat[i * colunas + j];


			delete[] mat;

}