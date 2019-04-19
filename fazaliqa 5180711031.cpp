#include <iostream>
using namespace::std;
int Mdl(int nli,int n){
    if(n==0){return (nli%n);}
    else if(n==nli){return (0);}
    else{return (nli%n);}
    }
main(){
    int nli,nli1;
    cout<<"Masukan Bilangan modulus 1: ";cin>>nli;
    cout<<"Masukan bilangan modulus 2: ";cin>>nli1;
    cout<<" Maka hasil dari modulus "<<nli<<" dan "<<nli1<<" = "<<Mdl(nli,nli1);
    }


