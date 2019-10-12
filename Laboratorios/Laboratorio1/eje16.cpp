#include<iostream>


using namespace std;



int main(){
    int a[10];
    float prom, suma;
    
    for(int i=0; i<10; i++){
        cout<<"Ingrese un valor: "<<endl;
        cin>>a[i];
        
    }

    suma = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9];
    prom = suma/10;
    
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<prom<<endl;
    

}