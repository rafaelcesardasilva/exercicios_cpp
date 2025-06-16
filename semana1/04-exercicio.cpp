/*
    Criar uma tela inicial decorada que simule uma apresentação de jogo 
    (estilo ASCII art ou apenas com símbolos).
*/

#include <iostream>
#include <windows.h> // Para usar Sleep() e dar suspense

using namespace std;

int main() {
    system("cls");

    cout << "*****************************" << endl;
    cout << "*   BEM-VINDO AO RPG C++   *" << endl;
    cout << "*****************************" << endl;

    cout << "\nCarregando o jogo..." << endl;
    Sleep(2000); // Pausa de 2 segundos

    cout << "\nIniciando a aventura!" << endl;

    return 0;
}
