#include <bits/stdc++.h>
#include <list> 
#include <cstdlib>
#include <stack>
#include <string>
#include <iostream>
using namespace std;
template<class T>
void LRU_Cache(T Paginas[],int cache_size,int total_page)
{
    int hits=0,miss=0;
    list<int> cache;
    for(int i=0;i<total_page;i++)
    {
        list<int>::iterator it; 
        it=find(cache.begin(),cache.end(),Paginas[i]);
        if(it==cache.end())
        {
            miss++;
            int rand_size=cache.size();
            if(rand_size==cache_size)
            {
                int pop_element=cache.front();
                cache.pop_front();
                cache.push_back(Paginas[i]);
            }
            else
            {
               cache.push_back(Paginas[i]);   
            }
        }
        else
        {
            hits++;
            cache.remove(Paginas[i]);
            cache.push_back(Paginas[i]);
        }
    }

    cout<<"Hits: "<<hits<<" "<<"Miss: "<<miss<<endl;
    cout<<"Paginas del Buffer: ";
    for(auto it:cache)
        cout<<it<<" ";
    cout<<endl;
}
int main() 
{ 
    int cache_size,total_page;
    cout<<"--INGRESE EL TOTAL DE FRAMES-- \n";
    cin>>cache_size;
    cout<<"--INGRESE EL TOTAL DE PAGINAS-- \n";
    cin>>total_page;
    cout<<"--INGRESE EL PATRON DE ACCESO-- \n";
    char Paginas[total_page];

    for(int i=0;i<total_page;i++)
        cin>>Paginas[i];
        
    LRU_Cache(Paginas,cache_size,total_page);
    return 0; 
}