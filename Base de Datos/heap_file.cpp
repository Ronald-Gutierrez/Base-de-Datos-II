#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;
void mostrar(std::vector<int> A)
{
    for (int value : A)
    {
        cout << value << " ";
    }
    cout << endl;
}
void insertar(std::vector<int> &A,int valor,int capacidad)
{
    if(A.size()==capacidad)
        cout<<"El heap esta lleno \n";
    else
    {
        A.push_back(valor);
        push_heap(A.begin(), A.end());
    }

}

void eliminar (std::vector<int> &A, int valor,int capacidad)
{   
    pop_heap(A.begin(), A.end());
}
int main()
{   int capacidad =5;
    vector<int> v1 = {20, 30, 40, 25};
    make_heap(v1.begin(), v1.end());
    cout<<"---REGISTROS INICIALES--- \n";
    mostrar(v1);
    cout<<"INGRESANDO UN NUEVO REGISTRO \n";
    insertar(v1,55,capacidad);
    mostrar(v1);

    return 0;
}