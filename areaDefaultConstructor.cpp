#include<iostream>
using namespace std;

class ABC {
    public:
    int x,y,area;

    ABC(){
        x=5;
        y=10;

        cout<<"Obj Created --"<<endl;
    };

    ~ABC(){
        cout<<"Obj Destroyed --"<<endl;
    }

    
    void areaCalculator(){
        area = x*y;
        cout<<"Area of Reactangle: "<<area<<endl;
    }

};

int main(){
    ABC r;
    r.areaCalculator();
}