#include <iostream>

using namespace std;


class square;

class rectangle{
    
  private:
  
   int x1;
   int y1;
   int area;
   
   
  public: 
    rectangle(int x,int y):x1(x),y1(y){
        
        area=x1*y1;
        }
        
    friend int Tarea(rectangle ,square );
    
};

class square{
    
    int s1;
    int area;
    
    public:
       square(int s):s1(s){
           
           area=s1*s1;
           
       }
       
     friend int Tarea(rectangle ,square );
    
    
};

int Tarea(rectangle r,square s){
    
    cout<<r.x1<<" "<<r.y1;
    
    int total;
    total=r.area+s.area;
    return total;
    
}



int main() {

int area1;
rectangle r1(3,7);
square s1(4);
area1=Tarea(r1,s1);

cout<<"Area"<<area1;

}
