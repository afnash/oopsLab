#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;
int main(){
    ifstream read("forcount.txt");
    if(read.is_open()){
        string content;
        int wordcount=0;
        while(getline(read,content)){
            stringstream ss(content);
            string word;
            while(ss>>word){
                ++wordcount;
            }
        }
        read.close();
        cout<<"number of words in the file: "<<wordcount<<endl;


    }else{
        cout<<"not able to open the file"<<endl;
    }
    
}