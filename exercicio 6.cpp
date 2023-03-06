///Faça uma função que recebe, por parâmetro, um valor N inteiro e positivo e retorna verdadeiro se N 
///for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que é igual a soma 
///de seus divisores.
#include <iostream>
using namespace std;

int amigos(int x, int y){
     int ax=0, ay=0;
        for(int i=1;i<x;i++){
            if(x % i == 0){
             ax=ax+i;
            }
         }  
        for(int i=1;i<y;i++){
            if(y % i == 0){
             ay=ay+i;
            }
         }
    if (ax==y && ay == x){
        return 1;
    } 
    else{
        return 0;
    }
}

int main(){
    int n1,n2;
    cout<<"Digite o N1 inteiro e positivo: ";
    cin>>n1;
    cout<<"Digite o N2 inteiro e positivo: ";
    cin>>n2;
    if(amigos(n1,n2)){
        cout<<n1<<" é amigo de "<<n2;
    } else {
        cout<<n1<<" não é amigo de "<<n2;
    }
    return 0;
}
