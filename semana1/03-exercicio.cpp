/* 
Exercício 3: Jogo de Escolha de Caminho
Expanda o exemplo da caverna:
Crie pelo menos 3 caminhos diferentes com finais diferentes.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string escolha;

    cout << "Você está em uma caverna escura..." << endl;
    cout << "Quer ir para a esquerda ou direita? ";
    cin >> escolha;

    if (escolha == "esquerda") {
        cout << "Você encontrou um dragão! Fim de jogo." << endl;
    } else if (escolha == "direita") {
        cout << "Você achou um baú de ouro! Parabéns!" << endl;
    } else {
        cout << "Você ficou parado... Fim de jogo." << endl;
    }

    return 0;
}
*/
#include <iostream> 
#include <string> 
using namespace std; 
int main (){
    system("cls");

    string escolha; 

    cout << "==========================" << endl;
    cout << " BEM-VINDO AO JOGO DA CAVERNA" << endl;
    cout << "==========================" << endl;

    cout << "Você está em uma caverna escura..." << endl;
    cout << "Quer ir para a esquerda, direita ou entrar? ";
    getline(cin, escolha);
    system("cls");

    if (escolha == "esquerda"){
        cout << "Você encontrou um dragão ! 🐉 Fim de jogo. " << endl;
    }else if (escolha == "direita"){
        cout << "Você achou um baú de ouro! Parabéns! 🎉" << endl;
    }else if(escolha == "entrar"){
        cout << "Você entrou na caverna e... MORREUUUU...☠️";
    }   else {
        cout << "Voce ficou parado... Fim do jogo." << endl; 
    }

    cout << "\n==========================" << endl;
    cout << "      GAME OVER" << endl;
    cout << "==========================" << endl;
    return 0;
}