#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout<<*it<<"\t";
    cout << '\n';
}

int main()
{
    list <int> lista_1={1,2,4,45};
    list<list<int> > lista_listas;
    showlist(lista_listas); 
    return 0;
}