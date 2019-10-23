#include<iostream>


using namespace std;

int recursion(int a){
    if(a==1){
        cout<<"Caso base "<<endl;
        return a;
    }
    else {
        for(int i=1; i<a;i++){
        cout<<a-(a-i)<<endl;
        }
    }
    
};

int main(){
    
    int n, aux=0;
    cout<<"Digite un numero "<<endl<<endl;
    cin>>n;
    
    aux = recursion(n);
    
    cout<<aux<<endl;
}