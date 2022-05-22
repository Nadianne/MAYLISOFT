#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Arvore.h"

using namespace std;

Arvore arvore;
void cadastrarNovo();
void pesquisarProduto();

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

        cout << "-- Solucoes empresariais --" << endl << endl;

        cout << " 1 - Ver produtos" << endl;
        cout << " 2 - Pesquisar Produto" << endl;
        cout << " 3 - Cadastrar produto" << endl;
        cout << " 0 - Encerra o programa" << endl << endl;
        cout << " Digite sua opcao: ";
        cin >> op;
        switch(op)
        {
        case 1:
            arvore.mostrarArvore();
            system("PAUSE");
            break;
        case 2:
            pesquisarProduto();
            break;
        case 3:
            cadastrarNovo();
            break;
        case 0:
            cout << "\nEncerrando programa..." << endl;
            break;
        default:
            cout << "\nOpcao invalida! Escolha uma nova opcao: " << endl;
        }
        // system("clear||cls");
    }
    while(op != 0);
}

void cadastrarNovo() {
    string nome;
    string codigo;
    int opc;

    system("clear||cls");
    cout << "Insira o codigo de barras do produto: ";
    cin >> codigo;
    cout << "Insira o nome do produto: ";
    cin.ignore();
    getline(cin, nome);

    cout << endl << endl << "Confirmar cadastro do produto?" << endl << endl << "1 - sim" << endl << "2 - não" << endl;
    cout << "Selecione uma opção: ";
    cin >> opc;

    if(opc == 1) {
        NoArvore* novoNo = new NoArvore(codigo, nome);
        arvore.push(novoNo);
    }else
        cout << "Cadastro cancelado." << endl;

}

void pesquisarProduto() {
    string codigo;
    NoArvore* retorno;

    system("clear||cls");
    arvore.mostrarArvore();
    cout << endl << "Insira o codigo de barras do produto: ";
    cin >> codigo;

    if(arvore.search(codigo, retorno)) {
        cout << endl << endl << "Produto encontrado:" << endl;
        cout << "ID: " << retorno->getChave() << endl;
        cout << "NOME: " << retorno->getNome() << endl;
    }else
        cout << "Item não encontrado";
}

int main()
{
    menu();
    return 0;
}

