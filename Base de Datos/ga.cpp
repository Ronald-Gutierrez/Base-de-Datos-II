#include <iostream>
#include <string.h>
using namespace std;

void insertar(string A[],string registro,int n)
{
    for(int i=0;i<n;i++){
        if(A[i]=="0"){
            A[i]=registro;
            return;
        }
        else
            continue;
    }
}
void eliminar(string A[],string registro,int n)
{
    for(int i=0;i<n;i++){
        if(A[i]==registro){
            A[i]="0";
            return;
        }
        else
            continue;
    }
}
void mostrar_valores(string A[],int n)
{
    for(int i=0;i<n;i++){
        if(A[i]=="0")
            cout<<"Vacio"<<endl;
        else
            cout<<A[i]<<endl;
    }
}
int main()
{
    int n=4;
    string bloque[n];
    for(int i=0;i<n;i++)
        bloque[i]="0";
    cout<<"--Valores iniciales de mi bloque--"<<endl;
    mostrar_valores(bloque,n);
    cout<<endl;
    cout<<"--Insertando nuevos registros--"<<endl;
    insertar(bloque,"Paco Torrear",n);
    insertar(bloque,"EPCC administracion",n);
    insertar(bloque,"Dennis Alvarez",n);
    mostrar_valores(bloque,n);
    cout<<endl;
    cout<<"--Eliminar un registro--"<<endl;
    eliminar(bloque,"Paco Torrear",n);
    mostrar_valores(bloque,n);
    return 0;
}