/*Create a class "Employee" with attributes name and salary. Implement overloaded operators + and - to combine and compare employees based on their salaries.*/
#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    float salary;
    void getdata(){
        cout<<"enter name :"<<endl;
        cin>>name;
        cout<<"enter salary :"<<endl;
        cin>>salary;
    }
    employee operator + (employee e){
        employee em;
        em.salary=e.salary;
        return em;
    }
    friend void display(employee);
    employee operator - (employee e1){
        employee em1;
        em1.salary=e1.salary;
        return em1;
    }
    friend void display2(employee);
    bool operator > (employee e){
        return salary > e.salary;
    }
};
void display(employee res){
    cout<<"sum of salaries "<<res.salary<<endl;
}
void display2(employee res1){
    cout<<"difference of salaries"<<res1.salary<<endl;
}
void display3(employee res2){
    cout<<"salary of "<<res2.name<<"is greater :"<<res2.salary;
}
int main(){
    employee emp1,emp2,res,res1,res2;
    emp1.getdata();
    emp2.getdata();
    res.salary=emp1.salary+emp2.salary;
    display(res);
    if(emp1.salary>=emp2.salary){
        res2.salary=emp1.salary-emp2.salary;
    }else{
        res2.salary=emp2.salary-emp1.salary;
    }display(res1);
    if(emp1.salary>emp2.salary){
        cout<<"salary of"<<emp2.name<<"is greater";
    }else{
        cout<<"salary of "<<emp2.name<<" is greater";
    }
    return 0;
}