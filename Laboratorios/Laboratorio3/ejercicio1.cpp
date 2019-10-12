#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//ejercicio1
struct elementos{
    int num;
    elementos *sig;
};

void menu(){
    cout<<"1. Agregar elemento"<<endl;
    cout<<"2. Mostrar elementos"<<endl;
    cout<<"3. Mostrar pares"<<endl;
    cout<<"4. Mostrar impares"<<endl;
    cout<<"5. Mostrar inverso"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Mostrar opcion: ";
}

void mostrarelementos(elementos *pInicio){
    if(pInicio==NULL){
        return;
    }
    else{
        cout<<"Elemento: "<<pInicio->num<<endl;
        return mostrarelementos(pInicio->sig);
    }
}

void mostrarpares(elementos *pInicio){
    int x;
    x=pInicio->num%2;
    if(x==0){
            cout<<"Elemento: "<<pInicio->num<<endl;
    }
    else{
        return mostrarpares(pInicio->sig);
    }
}

void mostrarimpares(elementos *pInicio){
    int x;
    x=pInicio->num%2;
    if(x!=0){
            cout<<"Elemento: "<<pInicio->num<<endl;
    }
    else{
        return mostrarimpares(pInicio->sig);
    }
}

void mostrarinverso(elementos *pInicio){
    
}

int main() {
    elementos *pInicio=NULL;
    elementos *nuevo=NULL;
    srand(time(NULL));
    int r;
    do{
        menu();
        cin>>r;
        if(r==1){
            nuevo = new elementos;
            char res;
            cout<<"Para agregar un elemento dijite s"<<endl;
            cin>>res;
            nuevo->num=1+rand()%(101-1);
            nuevo->sig=NULL;
            if(pInicio==NULL){
                pInicio=nuevo;
            }
            else{
                nuevo->sig=pInicio;
                pInicio=nuevo;
            }
        }
        else if(r==2){
            mostrarelementos(pInicio);
        }
        else if(r==3){
            mostrarpares(pInicio);
        }
        else if(r==4){
            mostrarimpares(pInicio);
        }
        else if(r==5){
            
        }
        else{
            cout<<"Opcion Erronea"<<endl;
        }
    }while(r!=6);
}
//Me gustaria que me dejara un comentario de como completarlo
