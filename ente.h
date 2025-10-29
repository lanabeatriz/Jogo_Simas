#ifndef ENTE_H
#define ENTE_H

class Ente {
protected:
	int id;
	static Gerenciador_Grafico* pGG;
	Figura* pfig;

public:
	Ente();
	virtual Ente();
	
	virtual void executar() = 0;
	void desenhar();
	static void setGG(Gerenciador_Grafico* pG);
};
	
	