#include <iostream>
#include "idade.h"

Idade::Idade(){ }

int Idade::getIdade() { return idade; }

void Idade::setIdade(int ida) {
	if (ida > 0) { idade = ida; }
}
