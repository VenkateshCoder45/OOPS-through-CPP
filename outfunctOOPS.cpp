#include<bits/stdc++.h>
using namespace std;

class Dog{
    public:
    void bark();
};
void Dog::bark(){
        cout<<"Woof!"<<endl;
    }
int main(){
     Dog obj1;
     obj1.bark();
     return 0;
}