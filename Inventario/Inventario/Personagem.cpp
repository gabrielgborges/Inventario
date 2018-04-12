#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::inserirItem(std::ostream & os)
{
	os.write((char*)&item_atual, sizeof(Item));
}

void Personagem::inserirItemEm(std::ostream & os, int indice)
{
	std::streampos pos(indice * sizeof(Item));
	os.seekp(pos);
	std::cout << "O item ser� escrito na posi��o: " << os.tellp() << std::endl;
}

