#include "NoArvore.h"

NoArvore::NoArvore(string chave, string nome){
    this->chave = chave;
    this->nomeProduto = nome;
    this->filhoDireito = NULL;
    this->filhoEsquerdo = NULL;
}

string NoArvore::getChave() {
    return this->chave;
}

string NoArvore::getNome() {
    return this->nomeProduto;
}

NoArvore* NoArvore::getFilhoDireito(){
    return this->filhoDireito;
}

NoArvore* NoArvore::getFilhoEsquerdo(){
    return this->filhoEsquerdo;
}

void NoArvore::setFilhoDireito(NoArvore* no) {
    this->filhoDireito = no;
}

void NoArvore::setFilhoEsquerdo(NoArvore* no) {
    this->filhoEsquerdo = no;
}

void NoArvore::setChave(string chave) {
    this->chave = chave;
}

void NoArvore::setNomeProduto(string nome) {
    this->nomeProduto = nome;
}

NoArvore::~NoArvore()
{
    delete this->filhoDireito;
    delete this->filhoEsquerdo;
}
