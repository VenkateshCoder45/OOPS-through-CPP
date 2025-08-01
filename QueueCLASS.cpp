#include<iostream>
using namespace std;

class Queue{
    private:
    int front,rear,arr[100];
    public:
    Queue() :front(-1),rear(-1){}
    bool isempty(){
        return rear==-1 || front>rear;
    }
    bool isfull(){
       return rear==99;
    }
    void enqueue(int num){
        if(isfull()){
            cout<<"Queue overflow:"<<endl;
            return;
        }
        if(isempty())front=rear=0;
        else rear++;
        arr[rear]=num;
    }
    int dequeue(){
        if(isempty()){
            cout<<"Queue is empty: "<<endl;
            return -1;
        }
        return arr[front++];
    }
    int peek(){
        if(isempty()){
            cout<<"Queue id empty:"<<endl;
            return -1;
        }
        return arr[front];
    }
    void display(){
        if(isempty()){
            cout<<"No elements to display: "<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    Queue q;
    cout<<q.isempty()<<endl;
    cout<<q.isfull()<<endl;
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(16);
    q.enqueue(20);
    cout<<q.peek()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.isfull()<<endl;
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}