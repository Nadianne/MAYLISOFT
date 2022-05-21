#ifndef ARVORE_H
#define ARVORE_H
#include <string>
#include "NoArvore.h"
using namespace std;

// Aqui são declarados os metodos da biblioteca arvore
// o conteúdo dos metodos fica em arvore.cpp

class Arvore{

    private:
        int length;
        NoArvore *raiz;

    public:
        Arvore();
        virtual ~Arvore();
        int getLength();

        bool search(string chave, NoArvore& retorno);

};

#endif // ARVORE_H
