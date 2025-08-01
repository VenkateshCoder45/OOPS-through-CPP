#include<iostream>
using namespace std;

class car{
    public:
    string brand,model;
    int year;
    car(string x,string y,int z);
};
car::car(string x,string y,int z){
    brand=x;
    model=y;
    year=z;
}
int main(){
    car c1={"BMW","X5",1999},c2={"Ford","Mustang",1969};
    cout<<c1.brand<<" - "<<c1.model<<" - "<<c1.year<<endl;
    cout<<c2.brand<<" - "<<c2.model<<" - "<<c2.year<<endl;
    return 0;
}