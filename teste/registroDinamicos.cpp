#include<iostream>

using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};


int main() {

	jogador * jo = new jogador;
	]
	cout << "Digite os atributos do jogador: " << endl;
	cin >> jo->nome >> jo->salario >> jo->gols;

	
	
	cout << "Concetração para o proximo ano:\n" << jo->nome
		<< " por " << (*jo).salario << endl;
	
	delete jo;

	return 0;
}