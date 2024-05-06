#include<iostream>
#include<string>

using namespace std;

struct Jogo {
	string nome;
	float preco;
	int horas;
	float custo;
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& Jogo);




int main()
{

	Jogo got;

	got = adquirir("got", 200.00f);
	      atualizar(got, 100.00f);
	      exibir(got);
	
}

Jogo adquirir(const string& titulo, float valor) 
{
	Jogo novo;
	novo.nome = titulo;
	novo.preco = valor;
	novo.horas = 0;
	novo.custo = valor;

	return novo;
}

void atualizar(Jogo& jogo, float valor)
{
	jogo.preco = valor;

	if (jogo.horas > 0)
		jogo.custo = jogo.preco / jogo.horas;

}

void jogar(Jogo& jogo, int tempo)
{
	jogo.horas += tempo;

	if (jogo.horas > 0)
		jogo.custo = jogo.preco / jogo.horas;

}

void exibir(const Jogo& jogo)
{
	cout << jogo.nome << " R$ "
		<< jogo.preco << ""
		<< jogo.horas << " h = R$"
		<< jogo.custo << " /h\n";

}


