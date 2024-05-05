#include<iostream>

using namespace std;


int main() {
	
	int qn = 0;
	float nota;
	float media;
	float soma = 0;

	cout << "Digite quatidades de notas: " << endl;
	cin >> qn;

	for (int i = 0; i < qn; ++i)
	{
		cout << "digites nota" << endl;
		cin >> nota;

		soma = soma + nota;
		
	}

	media = soma / qn;

   cout << "A media final \n" << media << endl;

	return 0;
}

