#include <iostream>
#include <vector>

using namespace std;

struct Orden{
    int revueltas;
    int frijolConQueso;
    int queso;
    bool arroz;
};
typedef struct Orden orden;

orden solicitarOrden(){
    orden o;
    cout<<"Cuantas revueltas?"; cin>>o.revueltas;
    cout<<"Cuantas de frijol con queso?"; cin>>o.frijolConQueso;
    cout<<"Cuantas de queso?"; cin>>o.queso;
    cout<<"De Arroz?"; cin>>o.arroz;
    return o;
}

void mostrarOrden(orden o){
    cout<<"Revueltas: "<<o.revueltas<<endl;
    cout<<"Frijol con queso: "<<o.frijolConQueso<<endl;
    cout<<"Queso: "<<o.queso<<endl;
    cout<<"Arroz?"<<o.arroz<<endl;
    cout<< endl;
}
struct ONodo{
    Orden dato;
    struct ONodo *sig;
};
typedef struct ONodo nodo;
nodo *pInicio;
vector<Orden> lista;
