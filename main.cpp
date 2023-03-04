#include <iostream>

using namespace std;
    /// Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve
    /// retornar um se for positivo e zero se for negativo
/*
    int pi(int a){
        if (a>=0){
            cout<<"Número positivo";
            return 1;
                 }
        else{
            cout<<"Número negativo";
            return 0;
        }

        }



int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero;
    cout<<"Digite um Número de qualquer valor: ";
    cin>>numero;

    pi(numero);



    return 0;
}
------------------------------------------------------------------------------------------------------
///faça o programa principal que solicita ao usuário um número inteiro N e após faça a chamada de um
///procedimento com o nome de “castigo”, passando N como parâmetro por valor. O procedimento deve
///imprimir N vezes a frase “Não vou colar na Prova”


void castigo(int n){

    for(int i=0; i<n;i++){
        cout<<"Não vou colocar na Prova";

    }
}




int main(){
    int inteiro;
    cout<<"Digite um numero inteiro: ";
    cin>>inteiro;
    castigo(inteiro);
    return 0;

}
-----------------------------------------------------------------------------------------------------
///Elabore um programa que calcule o M.D.C. (máximo divisor comum) entre dois valores fornecidos pelo
///usuário. Por exemplo: M.D.C. de 12 e 20 é 4.

        float mdc(float n, float m){
        while (n != m){
                if(n > m){
                    n = n - m;
                }
                else if(m > n){
                    m =m - n;
                }
            }
            return m;
        }






int main(){
    int n1,n2;
    cout<<"\n Digite 2 valores inteiros: ";
    cin>>n1;
    cout<<"\n Digite outro valor inteiro: ";
    cin>>n2;

    cout<<"\nMDC: "<<mdc(n1,n2);
    cout<<"\nMDC: "<<mdc(20,12);
    return 0;

}
-------------------------------------------------------------------------------------------------------------


///Faça um programa que possua uma função que receba por parâmetro dois números inteiros positivos
///num1 e num2 e retorne o resto da divisão inteira de num1 por num2, sem utilizar o operador %



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
--------------------------------------------------------------------------

///faça uma função que recebe, por parâmetro, um valor N inteiro e positivo e retorna verdadeiro se N
///for um número perfeito e falso em caso contrário. Obs.: número perfeito é aquele que é igual a soma
///de seus divisores.


bool divisao(int n){
    int perfeito=0;
    if(n>=0){
        for(int i=1;i<n;i++){
            if(n % i == 0){
                perfeito= perfeito + i;
            }
        }
        if(perfeito == n){
                cout<<"O numero e perfeito";
            return true;
        }
        else{
            cout<<"O numero e imperfeito";
            return false;
        }
    }
    return false;


}
int main(){

    int n1;
   {
    cout<<"Digite um numero inteiro positivo: ";
    cin>>n1;
    divisao(n1);



    return 0;

    }
}
----------------------------------------------------------------------
*/

///faça um programa que possua uma função que decida se dois números inteiros positivos são amigos.
///Dois números são amigos quando a soma dos seus divisores (excluindo o próprio valor) coincide com
///o outro número. Exemplo: 284 e 220 são amigos.

    bool divisores(int n1, int n2){
        int n3,n4, soma=0;
    if( n1 >= 0 && n2>=0){
        if(n1>n2){
            n3=n1;
            n4=n2;
        }
        else{
            n4=n1;
            n3=n2;
        }
        for(int i=1;i<n3;i++){
            if(n3 % i == 0){
                soma= soma + i;
            }
        }

        if(soma==n4){
            cout<<"Os numeros sao amigos!";
            return true;
        }
        else{
            cout<<"Os numeros nao sao amigos!";
            return false;
        }for(int i=1;i<n;i++){
            if(n % i == 0){for(int i=1;i<n;i++){
            if(n % i == 0){
                perfeito= perfeito + i;
                perfeito= perfeito + i;
    }
    else{
        cout<<"Os numeros nao são amigos!";
    }
    return false;
    }
int main(){

    int a,b;

    cout<<"Digite um numero inteiro positivo: ";
    cin>>a;
    cout<<"Digite outro numero inteiro positivo:";
    cin>>b;

    divisores(a,b);



}






