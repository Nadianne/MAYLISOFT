#ifndef NOARVORE_H
#define NOARVORE_H
#include <string>
using namespace std;

class NoArvore
{
    public:
        NoArvore(string chave, string nome);
        virtual ~NoArvore();

        string getChave();
        string getNome();
        NoArvore* getFilhoDireito();
        NoArvore* getFilhoEsquerdo();

        void setFilhoDireito(NoArvore* no);
        void setFilhoEsquerdo(NoArvore* no);
        void setChave(string chave);
        void setNomeProduto(string nome);

        void exibeInOrdem(NoArvore *atual);

    protected:

    private:
        string chave;
        string nomeProduto;

        NoArvore *filhoEsquerdo;
        NoArvore *filhoDireito;

};

#endif // NOARVORE_H
