// member initialization
#include <iostream>
using namespace std;

class rectangle{
    
    int bth,lt;
    
    public:
    
     rectangle(int,int);
     int area_rect();
    
};

rectangle::rectangle(int x,int y):bth(x),lt(y){}
int rectangle::area_rect(){
    
    return  bth*lt;
    
}

class volume{
    
    int ht;
    rectangle rect1;
    public:
    volume(int);
    
    int volume_cube(){
        
     return rect1.area_rect() * ht;    
        
    }

    
    
    
    
};

volume::volume(int z):rect1(10,11),ht(z){}

int main(){

volume v1(70);
cout<<"volume:"<<v1.volume_cube();

volume *v2;
v2=new volume(10);
cout<<"Volume2"<<v2->volume_cube();
return 0;
    
    
}