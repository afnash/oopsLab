#include<iostream>
using namespace std;
class shape{
    public:
virtual void area()=0;
virtual void peri()=0;
};
template <class T>
class circle: public shape{
    public:
    T radius;
    void getCirdata(){
        cout<<"enter the radius "<<endl;
        cin>>radius;
    }
    void area(){
        cout<<"Area of circle: "<<radius*radius*3.14159<<endl;
    }
    void peri(){
        cout<<"perimeter of circle: "<<2*3.14159*radius<<endl;
    }

};
template<class T>
class Rect: public shape{
    public:
    T length;
    T width;
    void getRecdata(){
        cout<<"enter length and width"<<endl;
        cin>>length>>width;
    }
    void area(){
        cout<<"area of rect :"<<length*width;
    }
    void peri(){
        cout<<"perimeter of rect: "<<2*(length+width);
    }
};
int main(){
    circle<int>c;
    Rect<float>rec;
    c.getCirdata();
    c.area();
    c.peri();
    rec.getRecdata();
    rec.area();
    rec.peri();
    return 0;
}