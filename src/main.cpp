#include <iostream>
#include "idade.h"

using namespace std;

int main() {
	Idade idadePessoa;

	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;
	idadePessoa.setIdade(idade);

	if(idadePessoa.getIdade() > 0) {
		cout << "Você tem " << idadePessoa.getIdade() << " anos de idade." << endl;
	}

	return 0;
}
