#include <iostream>

using namespace::std;

struct Registro{
	int dato;
	Registro* siguiente;
} *primero, *ultimo;

void insertar_registro();
void mostrar_lista();

int main(){
    int capacidad=5;
    for(int i=0;i<capacidad;i++)
	    insertar_registro();
	
	cout << "\n Listas \n";
	mostrar_lista();
	return 0;
}

void insertar_registro(){
	Registro* nuevo = new Registro();
	cout << " Ingrese el nuevo registro: ";
	cin >> nuevo->dato;
	
	if(primero == NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}

}

void mostrar_lista(){
	Registro* actual = new Registro();
	actual = primero;
	if(primero != NULL){
		
		while(actual != NULL){
			cout << " " << actual->dato  << endl;
			actual = actual->siguiente;
		}
		
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}