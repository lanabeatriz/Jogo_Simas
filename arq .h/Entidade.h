#ifndef ENTIDADE_H
#define ENTIDADE_H

#include <iostream>
#include <fstream>

class Entidade {
protected:
	int x;
	int y;
	std::ostream& buffer;
	void salvarDataBuffer
public:
	Entidade();
	virtual ~Entidade();
	virtual void executar() = 0;
	virtual void salvar() = 0;
}

#endif
