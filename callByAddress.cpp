#include<iostream>
using namespace std;
int addMarks(int *p);

int main(){
    int marks[3];
    for(int i=0;i<3;i++){
        cout<<"Enter marks of Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
    int result = addMarks(marks);
    cout<<"Result is : "<<result<<endl;
}

int addMarks(int *p){
    int sum=0;
    for(int i=0;i<3;i++){
        sum+= p[i];
    }
    return sum;
}