#include<iostream>


using namespace std;

char* InveteString(const char* , char* );

int main() 
{
	char nome[40], invertida[40];
	cout << "Digite seu nome: ";
	cin >> nome;

	InveteString(nome, invertida);
	cout << "Seu nome invertido: ";
	cout << invertida << endl;
	
	

	return 0;

}

char * InveteString(const char * str, char * inv)
{
	const int Tam = strlen(str);

	for (int i = 0; i < Tam; ++i)
		inv[i] = str[Tam -1-i];

	inv[Tam] = '\0';
	return 0;
}