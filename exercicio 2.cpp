///faça o programa principal que solicita ao usuário um número inteiro N e após faça a chamada de um
///procedimento com o nome de “castigo”, passando N como parâmetro por valor. O procedimento deve 
///imprimir N vezes a frase “Não vou colar na Prova”. 

#include <iostream>
#include <time.h> ///habilita função time
using namespace std;


void castigo(int N){
    for(int i=0;i<N;i++){
        cout<<"Nao vou colar na prova ";
    }
}

int main(){
    int N;
    cout<<"Digite um numero para o castigo: ";
    cin>>N;
    castigo(N);
    return 0;
}