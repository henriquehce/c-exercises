//faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve 
//retornar um se for positivo e zero se for negativo.


#include <iostream>
#include <time.h> ///habilita função time
using namespace std;



int posinega(int a){
    if(a==0){
        cout<<"Numero neutro,retorna ";
        return 2;
    }
    else if(a>0){
        cout<<"Numero positivo,retorna ";
        return 1;
    }
    else{
        cout<<"Numero negativo, retorna ";
        return 0;
    }
}

int main(){
    int numero, resposta;
    cout<<"Digite um numero inteiro qualquer: ";
    cin>>numero;
    resposta=posinega(numero);
    cout<<resposta;
    return 0;
}