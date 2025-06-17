/*
    Mini Exercício – Lista de Armas de um Personagem 
    (Praticando Concatenação)
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    system("cls");
    string nome_arma, armas = ""; 
    string opcao;

    do{
        cout << "Nome da Arma? ";
        getline(cin, nome_arma);        
        armas += nome_arma + " "; 
        
        cout << "Gostaria de cadastrar uma nova arma [sim/nao]? ";
        getline(cin, opcao);

        system("cls");
    }while(opcao == "sim");
    
    Sleep(1000);
    cout << "Armas: " << armas << endl;
    system("pause");
    return 0;
}