#include <iostream>

using namespace std;
    /// Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo ou negativo. A fun��o deve
    /// retornar um se for positivo e zero se for negativo
/*
    int pi(int a){
        if (a>=0){
            cout<<"N�mero positivo";
            return 1;
                 }
        else{
            cout<<"N�mero negativo";
            return 0;
        }

        }



int main()
{
    setlocale(LC_ALL,"portuguese");
    int numero;
    cout<<"Digite um N�mero de qualquer valor: ";
    cin>>numero;

    pi(numero);



    return 0;
}
------------------------------------------------------------------------------------------------------
///fa�a o programa principal que solicita ao usu�rio um n�mero inteiro N e ap�s fa�a a chamada de um
///procedimento com o nome de �castigo�, passando N como par�metro por valor. O procedimento deve
///imprimir N vezes a frase �N�o vou colar na Prova�


void castigo(int n){

    for(int i=0; i<n;i++){
        cout<<"N�o vou colocar na Prova";

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
///Elabore um programa que calcule o M.D.C. (m�ximo divisor comum) entre dois valores fornecidos pelo
///usu�rio. Por exemplo: M.D.C. de 12 e 20 � 4.

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


///Fa�a um programa que possua uma fun��o que receba por par�metro dois n�meros inteiros positivos
///num1 e num2 e retorne o resto da divis�o inteira de num1 por num2, sem utilizar o operador %



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

///fa�a uma fun��o que recebe, por par�metro, um valor N inteiro e positivo e retorna verdadeiro se N
///for um n�mero perfeito e falso em caso contr�rio. Obs.: n�mero perfeito � aquele que � igual a soma
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

///fa�a um programa que possua uma fun��o que decida se dois n�meros inteiros positivos s�o amigos.
///Dois n�meros s�o amigos quando a soma dos seus divisores (excluindo o pr�prio valor) coincide com
///o outro n�mero. Exemplo: 284 e 220 s�o amigos.

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
        cout<<"Os numeros nao s�o amigos!";
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






