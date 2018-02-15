#include<iostream>
using namespace std;

class ABC {
    public:
    int x,y,area,copyX,copyY;

    ABC(int a=1,int b=2){
        x=a;
        y=b;

        cout<<"Obj Created --"<<endl;
    };

    ~ABC(){
        cout<<"Obj Destroyed --"<<endl;
    }

    ABC( ABC &obj){
        copyX = obj.x;
        copyY = obj.y;

        cout<<"Area of copy Rectangle: "<<copyY*copyX<<endl;
    }
    void areaCalculator(){
        area = x*y;
        cout<<"Area of Reactangle: "<<area<<endl;
    }

};

int main(){
    ABC r(4,8);
    r.areaCalculator();
    ABC r1(r);
}