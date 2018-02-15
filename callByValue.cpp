#include<iostream>

using namespace std;
int addMarks(int, int, int);

int main(){
    int marks[3];
    for(int i=0;i<3;i++){
        cout<<"Enter marks of Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
    int result = addMarks(marks[0],marks[1],marks[2]);
    cout<<"Result is : "<<result<<endl;
}

int addMarks(int subMarks1,int subMarks2,int subMarks3){
    int sum=0;
    sum = subMarks1 + subMarks2 + subMarks3;
    return sum;
}
