#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream write("forcount.txt");
    if(write.is_open()){
                cout<<"enter data:"<<endl;

        string data;
        getline(cin,data);
        write<<data<<endl;
        write.close();
    }
    ifstream read("forcount.txt");
    if(read.is_open()){
        string content;
        int linecount=0;
        while(getline(read,content)){
            linecount++;
        }
        read.close();
        cout<<"number of lines: "<<linecount<<endl;

    }
}