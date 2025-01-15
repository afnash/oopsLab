#include<iostream>
using namespace std;
template<typename t>
class vector{
    public:
    t* data;
    int capacity;
    int cursize;
    void resize(int newcapacity){
        t*temp = new t[newcapacity];
        for(int i=0;i<cursize;i++){
            temp[i]=data[i];
        }
        delete[] data;
    }
}