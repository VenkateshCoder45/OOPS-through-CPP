#include<iostream>
using namespace std;

class contruct{
   public:
   float area;
   contruct(){
    area=0;
   }
   contruct(int a,int b);
   void display(){
    cout<<area<<endl;
   }
};
contruct::contruct(int a , int b){
    area=a*b;
}
int main(){
    contruct Obj1,Obj2(10,20);
    Obj1.display();
    Obj2.display();
    return 0;
}