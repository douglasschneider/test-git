#include <iostream>
#include "idade.h"

Idade::Idade(){ idade = -1; }

int Idade::getIdade() { return idade; }

void Idade::setIdade(int ida) {
	if (ida > 0) { idade = ida; }
	else { cout << "Impossível gravar idade" << endl; }
}
