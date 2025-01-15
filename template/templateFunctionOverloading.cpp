#include<iostream>
using namespace std;
template<typename X> void add(X a){
    cout<<"value of a is "<<a<<endl;
}
template<typename X , typename Y> void add(X b, Y c){
    cout<<"value of b is "<<b<<endl;
    cout<<"value of c is "<<c<<endl;
}
int main(){
    add(10);
    add(20,30.5);
    
    return 0;
}