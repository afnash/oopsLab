#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    public:
    int hours;
    int minutes;
    Time(){
        hours=0;
        minutes=0;
    }
    void getdata(){
        cout<<"enter the time in hours and minutes"<<endl;
        cin>>hours>>minutes;
    }
    Time operator << (Time&t){
        Time h;
        h.hours=t.hours;
        h.minutes=t.minutes;
        if(h.minutes>=60){
            while(h.minutes>=60){
                h.hours+=1;
                h.minutes-=60;
            }
        }
        if(h.hours>=24){
            h.hours%=24;
        }
        return h;}
        void display(){
            cout<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<minutes<<endl;
        }
    
};
int main(){
    Time t1;
    Time t2;
    t1.getdata();
    t2=t2<<t1;
    t2.display();
    return 0;

}