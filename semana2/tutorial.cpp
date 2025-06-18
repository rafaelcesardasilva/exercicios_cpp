#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
/*
Usando a condição while()
int main(){
    system("cls");
    int i = 1;
    while(i <= 5){
        cout << i << endl;
        i++;
    }
    return 0;
}
*/

/* Usando do...while
int main(){
    system("cls");
    string escolha;

    do{
        cout << "Gostaria de jogar novamente[sim/nao]? ";
        getline(cin, escolha);
        if(escolha == "nao"){
            cout << "Encerramendo o programa...";
            Sleep(2000);
        }
    }while(escolha == "sim");

    return 0;
}
*/
// Utilizando o for
int main(){

    system("cls");
    
    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }
    return 0;
}

