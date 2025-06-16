#include <iostream> // Biblioteca de entrada e saida padrão
#include <string> // Biblioteca para usar string Add commentMore actions
#include <windows.h> // Biblioteca do Windows para executar a função Sleep
using namespace std; // Usado para não ter que digitar std:: quando utilizar o cout e cin

/*
Exercício 5 – Menu Inicial Interativo do Jogo

*/
int main(){

    system("cls"); // Limpar tela do windows

    // variaveis   
    string opcao;
    
    //Menu interativo
    cout << "------------------" << endl;
    cout << "       MENU       " << endl;
    cout << "------------------" << endl;  
    cout << "-> Iniciar jogo" << endl;
    cout << "-> Ver creditos" << endl;
    cout << "-> Sair do jogo" << endl;  
    
    //Pegando dados do usuario
    cout << "Escolha sua opção: ";
    getline(cin, opcao);
    system("cls");    
    Sleep(1000);

    // Fazendo o processamento do dado
    if(opcao == "Iniciar jogo"){
        cout << "Jogo iniciado...";
    }else if(opcao == "Ver creditos"){
        cout << "*********************" << endl;
        cout << "Rafael Cesar da Silva" << endl;
        cout << "*********************" << endl;
    }else if(opcao == "Sair do jogo"){
        cout << "Pressione enter para fechar o jogo ...";
        system("pause");
    }else {
        cout << "Opção invalida!";
    }
    return 0;
}

