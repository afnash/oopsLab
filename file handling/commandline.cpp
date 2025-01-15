#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(int l, char*argv[]){
    string s=" ";
    ofstream fout;
    for(int i=1;i<l;i++){
        s=s+argv[i];
    }
    fout.open("demo.txt");
    fout<<s;
    fout.close();
    ifstream fin;
    fin.open("demo.txt");
    string g;
    fin>>g;
    fin.close();
    cout<<"string is: "<<g<<endl;
}