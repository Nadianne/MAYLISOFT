#include <iostream>

using namespace std;

typedef struct no
{
    int dado;
    struct no *pai;
    struct no *filhoEsq;
    struct no *filhoDir;
} tipoNo;



void menu()
{

    int op;

    do
    {
        cout << "    __  ___    ___ __  __    __     ____   _____   ____     ______  ______" << endl;
        cout << "   /  |/  /   /   |\ \/ /   / /    /  _/  / ___/  / __ \   / ____/ /_  __/" << endl;
        cout << "  / /|_/ /   / /| | \  /   / /     / /    \__ \  / / / /  / /_      / / " << endl;
        cout << " / /  / /   / ___ | / /   / /___ _/ /    ___/ / / /_/ /  / __/     / / " << endl;
        cout << "/_/  /_/   /_/  |_|/_/   /_____//___/   /____/  \____/  /_/       /_/  " << endl;

        cout << "-- Soluçoes empresariais --" << endl;

        cout << " 1 - Insere um no na arvore" << endl;
        cout << " 0 - Encerra o programa" << endl;
        cout << " Digite sua opcao:"<< endl;
        scanf("%d",&op);
        switch(op)
        {

        case 0:
            printf("\nEncerrando programa...");
            //excluirArv(raiz);
            //raiz = NULL;
            //raiz = NULL;
            break;
        default:
            printf("\nOpcao invalida! Escolha uma nova opcao: ");
        }
    }
    while(op != 0);
}





int main()
{

    tipoNo *raiz = NULL, *resposta;
    menu();

    cout << "Hello world!" << endl;
    return 0;
}

