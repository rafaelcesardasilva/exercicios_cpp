#include <iostream> // importando a biblioteca padrão de entrada e saida
#include <string> // Importando a biblioteca string para trabalhar com textos
using namespace std; // Usado para ter que declarar std:: sempre que for usar cout e cin

//Exercício 2: Sistema de Criação de Personagem


int main(){
    system("cls"); // Limpa tela do terminal windows

    // Criando variaveis
    string nome, classe;
    int idade;
    
    // Solicitando os dados ao usuário 
    cout << "Qual nome do seu personagem? ";
    getline(cin, nome);
    cout << "Qual a idade do seu personagem? ";
    cin >> idade; 
    cin.ignore(); // Limpar o buffer antes do proximo getline
    cout << "Qual a Classe escolhida? ";
    getline(cin, classe);

    // imprimindo os dados.
    cout << "\n=== Personagem criado ===" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Classe: " << classe << endl;
    return 0;
}