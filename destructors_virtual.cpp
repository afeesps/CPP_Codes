#include <iostream>

using namespace std;
class base{
    
public:
     base(){cout<<"calling base class\n";}
   virtual ~base(){cout<<"deleting base class\n";}

};

class derived1:public base{
    
public:

     derived1(){cout<<"calling derived1\n";}
    ~derived1(){cout<<"deleting derived1\n";}
};

class derived2:public base{

 public:

     derived2(){cout<<"calling derived2\n";}
    ~derived2(){cout<<"deleting derived2\n";} 
    
};





class original{
    
    
    base *bptr;
    
    public:
      original():bptr(NULL){
          
       bptr=new derived1();      
          
      }
      ~original(){
          
          cout<<"entering the original destructor class\n";
          if(bptr){
              
             delete bptr;
             bptr=0;
             
           }
          
          
          
      }
    

};

int main() {

//base * b1;
//base * b2;
//b1=new derived1();
//b2=new derived2();

original o1;
base b1;



return 0;


}
