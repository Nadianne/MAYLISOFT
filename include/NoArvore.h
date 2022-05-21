#ifndef NOARVORE_H
#define NOARVORE_H
#include <string>
using namespace std;

class NoArvore
{
    public:
        NoArvore();
        virtual ~NoArvore();

        string getChave();
        NoArvore* getFilhoDireito();
        NoArvore* getFilhoEsquerdo();

    protected:

    private:
        string chave;

        NoArvore *filhoEsquerdo;
        NoArvore *filhoDireito;

};

#endif // NOARVORE_H
