#include<iostream>
using namespace std;

class ABC {
    public:
    int x,y;

    ABC(int a=1,int b=2){
        x=a;
        y=b;

        cout<<"Obj Created --"<<endl;
    };

    ~ABC(){
        cout<<"Obj Destroyed --"<<endl;
    }

    void display(){
        cout<<"x: "<<x<<"y: "<<y<<endl;
    }

};

int main(){
    cout<<"Inside Main"<<endl;
    ABC t1;
    {
        cout<<"Inside Block Scope"<<endl;
        ABC t3;
        cout<<"Leaving Block Scope"<<endl;
        ABC t2;
    }
    cout<<"Arrived back in Main"<<endl;
}