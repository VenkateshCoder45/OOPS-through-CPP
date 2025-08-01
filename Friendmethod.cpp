#include<iostream>
using namespace std;

class employee{
    private:
    int salary;
    public:
    employee(int s){
        salary=s;
    }
    friend void displaysalary(employee e);
};
void displaysalary(employee e){
    cout<<"Salary: "<<e.salary;
}
int main(){
    employee venkat(50000);
    displaysalary(venkat);
    return 0;
}