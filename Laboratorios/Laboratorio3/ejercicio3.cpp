#include <iostream>

using namespace std;
//ejercicio3

struct libro{
    char titulo[35];
    int numPaginas;
    libro *sig;
};

void menu(){
    cout<<"1. Mostrar Libro y paginas."<<endl;
    cout<<"2. Agregar Libro y paginas."<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Ingrese su opcion: ";
}

void mostrarlibros(libro *pInicio){
    if(pInicio==NULL){
        return;
    }
    else{
        cout<<"Titulo: "<<pInicio->titulo<<endl;
        cout<<"Numero de paginas: "<<pInicio->numPaginas<<endl;
        return mostrarlibros(pInicio->sig);
    }
}

int main() {
    libro *pInicio=NULL;
    libro *nuevo=NULL;
    int r;
    do{
        menu();
        cin>>r;
        if(r==1){
            mostrarlibros(pInicio);
        }
        else if(r==2){
            nuevo= new libro;
            cout<<"Ingrese el titulo del libro: "<<endl;
            cin>>nuevo->titulo;
            cout<<"Ingrese la cantidad de paginas: "<<endl;
            cin>>nuevo->numPaginas;
            nuevo->sig=NULL;
            if(pInicio==NULL){
                pInicio=nuevo;
            }
            else{
                nuevo->sig=pInicio;
                pInicio=nuevo;
            }
        }
        else{
            cout<<"opcion erronea"<<endl;
        }
    }while(r!=3);
}

