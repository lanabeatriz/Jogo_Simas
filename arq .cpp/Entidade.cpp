#include "Entidade.h"
#include <iostream>
#include <sstream>

Entidade::Entidade(std::ostream& bufferInicial, int posX, int posY)
	: buffer(bufferInicial),
	x(posX),
	y(posY)
{
}

Entidade::~Entidade() {

}

void Entidade::salvarDataBuffer() {
	
}
