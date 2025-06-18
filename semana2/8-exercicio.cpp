#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    system("cls");

    //Variaveis utilizei o hp e nível padrão inicial
    string nome, classe;
    int hp = 120, level = 1, opcao; 
    int numero_secreto = 6;
    int escolha_numero, acertos = 0, erros = 0;
    //Solicitando o nome do personagem e a classe
    cout << "+++ Registrando Heroi +++" << endl;
    cout << "Nome do Personagem? ";
    getline(cin, nome);

    cout << "Classe do Personagem? ";
    getline(cin, classe);    
        
    do{
        system("cls");
        cout << "=== Jornada do Heroi ===" << endl;
        cout << "1 - Entrar na Floresta" << endl;
        cout << "2 - Lutar contra um inimigo" << endl;
        cout << "3 - Ver Status do Personagem" << endl;
        cout << "4 - Sair do Jogo" << endl;
        cout << "Escolha a opcao: ";
        cin >> opcao;
        cin.ignore(); 
        
        switch (opcao){
        case 1:
            cout << nome << " voce entrou na floresta." << endl;
            system("pause");
            break;
        case 2: 
            cout << "## Jogo do acerto!  ##" << endl;
            while(true){
                cout << "Escolha um numero entre [1 - 10] ou [0] para sair do jogo? ";
                cin >> escolha_numero;
                cin.ignore();               
                if(escolha_numero != 0){
                    if(escolha_numero == numero_secreto){
                        cout << "Parabens voce acertou !!!" << endl;
                        acertos += 1;
                    }else if(escolha_numero < numero_secreto){
                        cout << "Mais para cima" << endl;
                        erros += 1;
                    }else if(escolha_numero > numero_secreto){
                        cout << "Mais para baixo" << endl;
                        erros += 1;
                    }
                }else{
                    break;
                }             
            }
            cout << "Erros: " << erros << endl;
            cout << "Acertos: " << acertos << endl;
            system("pause");
            break;
        case 3: 
            system("cls");
            cout << "== Status do Personagem ==" << endl;
            cout << "Nome: " << nome << endl;
            cout << "Classe: " << classe << endl;
            cout << "HP: " << hp << endl;
            cout << "Level: " << level << endl;
            system("pause");
            break;
        case 4: 
            Sleep(2000);
            cout << "Saindo do Jogo" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
            break;
        }
    }while(opcao != 4);
    return 0;
}