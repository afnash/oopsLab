#include<iostream>
using namespace std;
template<typename t>
class Stack{
    public:
    int top;
    int maxsize;
    t* array;
    Stack(int size){
        maxsize=size;
        top=-1;
        array= new t[maxsize];
    }
    void push(t item){
        if(top==maxsize-1){
            cout<<"stack is full"<<endl;
        }else{
            array[++top]=item;
        }
    }
    void pop(){
        if(maxsize==-1){
            cout<<"empty stack. nothing to push"<<endl;
        }else{
            int temp= array[top--]
            cout<<temp<<" is popped"<<endl;
        }
    }
    void peek(){
        if(top!=-1){
            cout<<"peeked value: "<<array[top]<<endl;
        }else{
            cout<<"stack is empty"<<endl;
        }
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==maxsize-1;
    }
};
int main(){
    int size:
    cout<<"size of the array"<<endl;
    cin>>size;
    Stack<int> stackArray(size);
    int choice;
    int x=0;
    while(x==0)
}