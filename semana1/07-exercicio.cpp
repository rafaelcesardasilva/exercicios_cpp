/*
    Exercício 7 – "Sistema de Criação de Múltiplos Personagens" 🎮
*/

#include <iostream> 
#include <windows.h>
#include <string>
using namespace std;

int main(){
    
    system("cls");

    //Variaveis
    string nome, classe, novo_cadastro; 
    int nivel, hp;
    string lista_personagens = "";
    
    do{       
        cout << "==== Cadastro de Personagem: ==== \n";
        cout << "Nome do personagem? ";
        getline(cin, nome);

        cout << "Qual vai a classe do " << nome << "? ";
        getline(cin, classe);

        cout << "Qual vai ser o Nível? ";
        cin >> nivel;
        cin.ignore();

        cout << "Quanto de HP tem? ";
        cin >> hp;
        cin.ignore();
        
        lista_personagens += "Nome: " + nome + " | Classe: " + classe + " | Nível: " + to_string(nivel) + " | HP: " + to_string(hp) + "\n";
              
        cout << "Gostaria de fazer um novo cadastro [sim/nao]? ";
        getline(cin, novo_cadastro);

        system("cls"); 

    }while (novo_cadastro == "sim");

    Sleep(1000);

    cout << "========= Personagens Criados =========" << endl;
    cout << lista_personagens;
    cout << "=======================================" << endl;
    system("Pause");
    return 0;
}