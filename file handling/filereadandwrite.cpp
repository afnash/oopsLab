#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ofstream write("sample.txt");
    if(write.is_open()){
        string data;
        cout<<"enter the data: "<<endl;
        getline(cin,data);
        write<<data<<endl;
        cout<<"file succesfully written"<<endl;
        write.close();
    }
    else{
        cout<<"file cannot be opened"<<endl;
    }
    ifstream read("sample.txt");
    if(read.is_open()){
        string content;
        cout<<"file content is: "<<endl;
        while(getline(read,content)){
            cout<<content<<endl;
        }
        read.close();
    }
    else{
        cout<<"file cannot be opened"<<endl;
    }
}