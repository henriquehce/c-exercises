#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));


    int i,j,m[3][5],l,c,n[3][5],o[3][5];

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            m[i][j]= rand()%4;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            n[i][j]= rand()%4;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
                o[i][j]=m[i][j]+n[i][j];

        }
    }
    cout<<"\n\n";
    cout<<"MA: \n";
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
        cout<<m[i][j]<< " ";
        }
        cout<<"\n";
        ///-----------------------------------
    }
    cout<<"\n\n";
    cout<<"MB: \n";

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
    cout<<n[i][j]<< " ";
        }
        cout<<"\n";
        ///-------------------------

    }
    cout<<"\n\n";
    cout<<"MC: \n";
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
                o[i][j]=m[i][j]+n[i][j];
                cout<<o[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"Segunda linha de MC: ";
    for(j=0;j<5;j++){
        cout<<o[1][j]<<" ";
    }
    cout<<"\n";
    cout<<"Terceira coluna de MC: ";
    for(i=0;i<3;i++){
        cout<<o[i][2] <<" ";
    }
    cout<<"\n";
        return 0;
}
