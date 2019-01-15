#include <iostream>
using namespace std;

class square;

class rectangle{
    
    int length,breadth;
    public:
    rectangle(int x,int y):length(x),breadth(y){}
    rectangle(){}
    int area1(){
        
        return length*breadth;
    }
    int area_rect(int,int);
   
};



int rectangle::area_rect(int x,int y){
    
    length=x;
    breadth=y;
    return (length * breadth);
    
}

int main(){
rectangle r1;
rectangle r2(5,10);
cout<<"Area function:"<<r1.area_rect(10,70)<<endl;
cout<<"Plain area"<<r2.area1();
return 0;
    
}
