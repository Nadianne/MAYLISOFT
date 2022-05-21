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

bool Arvore::search(string chave, NoArvore& retorno) {

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
            retorno = *noAtual;
            return true;
        }
    }
    // Não encontramos o valor
    return false;
}

void Arvore::rotacaoSimples(NoArvore no, int direcao) {

}

void Arvore::rotacaoDipla(NoArvore no, int direcao) {

}

// Destrutor - Esse metodo é executado quando a arvore é destruida

Arvore::~Arvore(){
    delete raiz;
    this->raiz = NULL;
}














