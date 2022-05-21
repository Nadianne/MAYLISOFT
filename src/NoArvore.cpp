#include "NoArvore.h"

NoArvore::NoArvore()
{
    //ctor
}

string NoArvore::getChave() {
    return this->chave;
}

NoArvore* NoArvore::getFilhoDireito(){
    return this->filhoDireito;
}

NoArvore* NoArvore::getFilhoEsquerdo(){
    return this->filhoEsquerdo;
}

NoArvore::~NoArvore()
{
    delete this->filhoDireito;
    delete this->filhoEsquerdo;
}
