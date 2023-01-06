#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


class Registro
{
    public:
    string nombre;
    string apellido;
    int dni;
    
    Registro(string _nombre, string _apellido,int _dni)
    {
        nombre=_nombre;
        apellido= _apellido;
        dni= _dni;
    }
    void mostrar()
    {
        cout<<nombre<<" "<<apellido<<" "<<dni<<endl;
    }

};

int main()
{
    Registro P1("Ronald","Gutierrez",72240612);
    Registro P2("Paco","Alvarez",55321232);
    Registro P3("Dennis","Array",67233612);
    P1.mostrar();
    P2.mostrar();
    P3.mostrar();

    return 0;
}