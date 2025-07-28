#include<iostream>
using namespace std;

int main(){
    int x, y;
    
    cout<<"Enter X-Coordinate:";
    cin>>x;
    
    cout<<"Enter Y-Coordinate:";
    cin>>y;
    
    if(x>0 && y>0){
       cout<<"1st Quadrant.";
    }
    else if(x==0 && y>0 || x==0 && y<0){
            cout<<"Y-axis.";
        }
    else if(y==0 && x>0 || y==0 && x<0){
            cout<<"X-axis.";
        }
        
    else if(x<0 && y>0){
        cout<<"2nd Quadrant.";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant.";
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant.";
    }
    else{
        cout<<"Point is at Origin.";
    }
    
    return 0;
}
}
