#include<iostream>
using namespace std;
void addMarks(int &p);

int main(){
    int result = 0;
    int &r = result;
    addMarks(r);
    cout<<"Result is : "<<r<<endl;
}

void addMarks(int &p){
    int subMarks;
     for(int i=0;i<3;i++){
        cout<<"Enter marks of Subject "<<i+1<<" : ";
        cin>>subMarks;
        p += subMarks;
    }
}