#include <iostream>
#include<string.h>

using namespace std;
 
class A{
 
 public:   
    A(){
        
        cout<<"A() constructor";
    }
    
    virtual ~A(){
        
        cout<<"~A()";
    }
    
};

class B : public A{
  
  public:  
    B(){
        
        cout<<"B() constructor";
    }
    ~B(){
        
        cout<<"~B()";
    }
};

class C : public B{
    
 public:
    C(){
        
        cout<<"C() constructor";
    }
    ~C(){
        
        cout<<"~C()";
    }
    
};
 
 
 int main()
 {
     
     C c1; // call constrictor A,B,C , All destructors will be calles C,B,A
     
     A* a1 = new C(); // call constructor A,B,C
     
     A* a2 = new B();
     
     delete a1; // only destructor for A will be called solution: declare the base class destructor as virtual
     
    // delete a2;
     
     
     return 0;
     
 }
 
 /*  output */
 /*
 A() constructorB() constructorC() constructorA() constructorB() constructorC() constructorA() constructorB() constructor~C()~B()~A()~C()~B()~A(
 */
