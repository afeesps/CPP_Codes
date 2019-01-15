#include <iostream>

using namespace std;

class T{

 protected:
   int k;
 public:
 
   T(int i):k(i){}
   
   void funct_ovld()const{
       
       cout<<"funct with const\n";
   }
   
   void funct_ovld(){
       
       cout<<"funct without const\n";
       
   }
    
};

int main() {
T t1(10);
const T t2(20);
t1.funct_ovld();
t2.funct_ovld();
}
