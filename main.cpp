#include <iostream>
#include <string>
#include "Arvore.h"

using namespace std;

void menu()
{

    int op;

    do
    {

        cout << "    __  ___    ___  __  __   __     ____   _____   ____     ______  ______" << endl;
        cout << "   /  |/  /   /   | \\ \\/ /  / /    /  _/  / ___/  / __ \\   / ____/ /_  __/" << endl;
        cout << "  / /|_/ /   / /| |  \\  /  / /     / /    \\__ \\  / / / /  / /_      / / " << endl;
        cout << " / /  / /   / ___ |  / /  / /___ _/ /    ___/ / / /_/ /  / __/     / / " << endl;
        cout << "/_/  /_/   /_/  |_| /_/  /_____//___/   /____/  \\____/  /_/       /_/  " << endl;

        cout << "-- Soluçoes empresariais --" << endl << endl;

        cout << " 1 - Ver produtos" << endl;
        cout << " 1 - Pesquisar Produto" << endl;
        cout << " 1 - Cadastrar produto" << endl;
        cout << " 0 - Encerra o programa" << endl << endl;
        cout << " Digite sua opcao: ";
        cin >> op;
        switch(op)
        {

        case 0:
            cout << "\nEncerrando programa..." << endl;
            //excluirArv(raiz);
            //raiz = NULL;
            //raiz = NULL;
            break;
        default:
            cout << "\nOpcao invalida! Escolha uma nova opcao: " << endl;
        }
        system("clear||cls");
    }
    while(op != 0);
}

int main()
{
    Arvore arvore;
    // menu();
    return 0;
}

