//Encapsulation
#include<iostream>
using namespace std;

class employee{
    private:
    int salary;
    public: // Public method to modify private members
    //Setter
    void setsalary(int s){
        salary=s;
    }
    //Getter
    int getsalary(){
        return salary;
    }
};
int main(){
    employee venkat;
    venkat.setsalary(100000);
    cout<<venkat.getsalary()<<endl;
}