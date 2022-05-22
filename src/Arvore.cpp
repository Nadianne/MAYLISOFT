#include <iostream>
#include "Arvore.h"
#include <string.h>
using namespace std;

/*
 * Esse é o construtor. Ele é executado sempre que uma arvore é criada
 */
Arvore::Arvore() {
    this->raiz = NULL;
}

/*
 * Os metodos set atribuem os valores aos atributos do objeto
 */

/*
 * Os metodos get retornam os valores dos atributos do objeto
 */
int Arvore::getLength() {
    return this->length;
}

// Aqui ficam os metodos para manipular a árvore

bool Arvore::search(string chave, NoArvore* retorno) {

    // Recebemos uma chave para pesquisar na árvore
    // e um ponteiro para armazenarmos o valor encontrado

    NoArvore* noAtual = this->raiz;

    // Procurar o valor na árvore
    while(noAtual != NULL) {
        if(chave > noAtual->getChave()) {
            // o valor está a direita
            noAtual = noAtual->getFilhoDireito();
        }else if(chave < noAtual->getChave()) {
            // o valor está a esquerda
            noAtual = noAtual->getFilhoEsquerdo();
        }else {
            // O valor foi encontrado
            *retorno = *noAtual;
            return true;
        }
    }
    // Não encontramos o valor
    return false;
}

bool Arvore::push(NoArvore* no) {

    if(this->raiz == NULL)
        this->raiz = no;
    else {
        this->adicionarFilho(this->raiz, no);
    }
}

void Arvore::adicionarFilho(NoArvore* noArvore, NoArvore* novoNo) {
    if(noArvore->getChave() > novoNo->getChave()) {
        if(noArvore->getFilhoEsquerdo() != NULL)
            this->adicionarFilho(noArvore->getFilhoEsquerdo(), novoNo);
        else
            noArvore->setFilhoEsquerdo(novoNo);
    }else {
        if(noArvore->getFilhoDireito() != NULL)
            adicionarFilho(noArvore->getFilhoDireito(), novoNo);
        else
            noArvore->setFilhoDireito(novoNo);
    }

}

void Arvore::mostrarArvore() {
    this->exibeInOrdem(this->raiz);
}

void Arvore::exibeInOrdem(NoArvore *atual){
    if(atual != NULL){
        exibeInOrdem(atual->getFilhoEsquerdo());
        cout << " " << atual->getChave() << "    " << atual->getNome() << endl;
        exibeInOrdem(atual->getFilhoDireito());
    }
}


/*
void Arvore::rotacaoSimplesEsquerda(NoArvore*& no) {
    NoArvore* filho = no->getFilhoEsquerdo();
    no->setFilhoEsquerdo(filho->getFilhoDireito());
    filho->setFilhoDireito(no);
    no = filho;
}

void Arvore::rotacaoSimplesDireita(NoArvore*& no) {
    NoArvore* filho = no->getFilhoDireito();
    no->setFilhoDireito(filho->getFilhoEsquerdo());
    filho->setFilhoEsquerdo(no);
    no = filho;
}

void Arvore::rotacaoDuplaEsquerda(NoArvore*& no) {
    NoArvore* filho = no->getFilhoEsquerdo()->getFilhoDireito();
    no->getFilhoEsquerdo()->setFilhoDireito(filho->getFilhoEsquerdo());
    filho->setFilhoEsquerdo(no->getFilhoEsquerdo());
    no->setFilhoEsquerdo(filho);
    filho = no->getFilhoEsquerdo();
    no->setFilhoEsquerdo(filho->getFilhoDireito());
    filho->setFilhoDireito(no);
    no = filho;
}

void Arvore::rotacaoDuplaDireita(NoArvore*& no) {
    NoArvore* filho = no->getFilhoDireito()->getFilhoEsquerdo();
    no->getFilhoDireito()->setFilhoEsquerdo(filho->getFilhoDireito());
    filho->setFilhoDireito(no->getFilhoDireito());
    no->setFilhoDireito(filho);
    filho = no->getFilhoDireito();
    no->setFilhoDireito(filho->getFilhoEsquerdo());
    filho->setFilhoEsquerdo(no);
    no = filho;
}
*/

// Destrutor - Esse metodo é executado quando a arvore é destruida

Arvore::~Arvore(){
    delete raiz;
    this->raiz = NULL;
}














