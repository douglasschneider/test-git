#include <iostream>
#include "idade.h"

using namespace std;

int main() {
	Idade idadePessoa;

	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;
	idadePessoa.setIdade(idade);

	cout << "Você tem " << idadePessoa.getIdade() << " anos de idade." << endl;

	return 0;
}
