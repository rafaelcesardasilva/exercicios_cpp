/*
    Exercício 6 – "Sistema de Status do Personagem" 
    (Trabalhando com Variáveis, Entrada e Saída)

*/

#include <iostream> //Biblioteca padrão de entrada e saida
#include <string> // Biblioteca para trabalhar com string
#include <windows.h> // "Biblioteca para trabalhar com a função Sleep()"
using namespace std; // Para substituir o std:: ao usar cout e cin

int main(){

    system("cls");

    //variaveis
    string nome, classe, vivo;
    int nivel; 
    float vida;

    cout << "Qual o nome do Personagem? "; 
    getline(cin, nome);
    cout << "Qual o Nível? ";
    cin >> nivel;
    cin.ignore();
    cout << "Qual a Classe do Personagem? "; 
    getline(cin, classe);
    cout << "Quanto de vida tem o Personagem? ";
    cin >> vida;
    cin.ignore();
    if (vida <= 0){
        vivo = "Não";
    }else {
        cout << "Personagem está vivo [Sim/Não]? ";
        getline(cin, vivo);
    }

    system("cls");
    Sleep(1000);

    cout << "====================" << endl;
    cout << "Status do Personagem" << endl;
    cout << "====================" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Classe: " << classe << endl;
    cout << "Nível: " << nivel << endl;
    cout << "HP: " << vida << endl;
    cout << "Está vivo: " << vivo << endl;
    cout << "====================" << endl;

    return 0; 
}