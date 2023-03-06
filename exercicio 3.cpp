/// Elabore um programa que calcule o M.D.C. (máximo divisor comum) entre dois valores fornecidos pelo 
/// usuário. Por exemplo: M.D.C. de 12 e 20 é 4. 
#include <iostream>
#include <time.h> ///habilita função time
using namespace std;


int mdc(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}


int main(){
    int n1,n2,resposta;

    cout<<"Digite o valor 1: ";
    cin>>n1;
    cout<<"Digite o valor 2: ";
    cin>>n2;
    resposta=mdc(n1,n2);
    cout<<"MDC: "<<resposta;
}