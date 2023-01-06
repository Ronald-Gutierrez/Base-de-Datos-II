#include <bits/stdc++.h>

using namespace std;
template <class T>
class LRU {
	// store keys of cache
	list<T> dq;

	// store insertences of key in cache
	unordered_map<int, list<int>::iterator> ma;
	int capacity; 

    public:

        LRU(int n):capacity(n){}
        void insert(T x)
        {
            // not present in cache
            if (ma.find(x) == ma.end()) {
            // cache is full
                if (dq.size() == capacity) 
                {
                    // delete least recently used element
                    int last = dq.back();
                    dq.pop_back();
                    ma.erase(last);
                }
            }
            else
                dq.erase(ma[x]);

            dq.push_front(x);
            ma[x] = dq.begin();
        }

        void mostrar()
        {

            for (auto it = dq.begin(); it != dq.end();it++)
                cout << (*it) << " ";

            cout << endl;
        }


};

int main()
{
    int frame=4;
    int cant=6;
	LRU<int> cache1(frame);
    int val;
    cout<<"Ingrese los datos \n";
    for(int i=0;i<cant;i++)
    {
        cin>>val;
	    cache1.insert(val);
    }
	cache1.mostrar();

	return 0;
}

