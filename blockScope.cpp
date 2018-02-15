#include<iostream>
using namespace std;
int main(){
    int p = 9;
    {
        int var = 4;
        cout<<"inside: "<<var<<endl;
    }
    
    cout<<"outside: "<<var<<endl;
}