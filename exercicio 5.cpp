/*Faça uma função que recebe, por parâmetro, um valor N inteiro e positivo e retorna verdadeiro se N 
for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que é igual a soma 
de seus divisores.*/
#include <iostream>
using namespace std;

bool perfeito(int n){
    int x=0;
    for(int i=1;i<n;i++){
        if(n % i == 0){
            x=x+i;
        }
    }
    if(x==n){
        cout<<"Numero perfeito";
        return true;
    }
    else{
        cout<<"Numero imperfeito";
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"Digite um valor inteiro positivo: ";
    cin>>n;
    perfeito(n);
    return 0;
}

