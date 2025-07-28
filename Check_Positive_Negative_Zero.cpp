#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    
    if(num>0){
        cout<<"Number is POSITIVE.";
    }
    else if(num<0){
        cout<<"Number is NEGATIVE.";
    }
    else{
        cout<<"Number is ZERO.";
    }
    return 0;
}
