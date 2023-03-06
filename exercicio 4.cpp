///Faça um programa que possua uma função que receba por parâmetro dois números inteiros positivos
///num1 e num2 e retorne o resto da divisão inteira de num1 por num2, sem utilizar o operador %
#include <iostream>

using namespace std;

int divisao(int num1, int num2){
    int resto;
    return resto= num1-(num1/num2)*num2;
}
int main(){
    int n1,n2;
   {
    cout<<"Digite o primeiro numero inteiros positivos: ";
    cin>>n1;
    cout<<"Digite o primeiro numero inteiros positivos: ";
    cin>>n2;
    cout<<"Sobra: "<<divisao(n1,n2);
    return 0;
    }
}