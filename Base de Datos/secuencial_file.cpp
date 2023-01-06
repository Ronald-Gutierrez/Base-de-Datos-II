#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int cantidad_elemtos(list<int> &lista);
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout<<*it<<"\t";
    cout << '\n';
}
void agregar(list<int> &lista, int valor,int &capacidad)
{   
    if(cantidad_elemtos(lista)==capacidad)
        cout<<"El archivo ya esta lleno"<<endl;
    else{
        auto iter = find(lista.begin(), lista.end(), valor);
        if (iter == lista.end()) 
            lista.insert(iter,valor);
    }
}
void eliminar (list<int> &lista, int valor,int &capacidad)
{   
    std::list <int>::iterator iter;
    iter = find(lista.begin(), lista.end(), valor);
    lista.erase(iter);
}
int cantidad_elemtos(list<int> &lista)
{
    list <int> :: iterator it;
    int sum=0;
    for(it = lista.begin(); it != lista.end(); ++it)
        sum++;
    return sum;
}
int main()
{
    list <int> lista_1={1,2,4,45};
    int capacidad_1=5;
    cout<<"Capacidad inicial: "<<capacidad_1<<endl;
    cout<<"Cantidad de elementos: "<<cantidad_elemtos(lista_1)<<endl;
    cout<<"Elementos de mi archivo \n";
    showlist(lista_1);
    cout<<"Agregando nuevos registros \n";
    agregar(lista_1,55,capacidad_1);
    cout<<"Cantidad de elementos: "<<cantidad_elemtos(lista_1)<<endl;
    cout<<"Elementos de mi archivo \n";
    showlist(lista_1);
    cout<<"Eliminando elemento \n";
    eliminar(lista_1,4,capacidad_1);
    showlist(lista_1);
    cout<<"Cantidad de elementos: "<<cantidad_elemtos(lista_1)<<endl;
    return 0;
}