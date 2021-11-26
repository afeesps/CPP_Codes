#include <stdio.h>
#include<iostream>

using namespace std;

class A{
    
 public :
 
 virtual void getA(){};
    
};


class B : public A{
    void getA(){}
};


int main()
{
    
    A *base1 = new B();
    A base2;
    B * child1;
    B * child2;
    
    
    child1 = static_cast<B*>(base1);
    
    child2 = reinterpret_cast<B*>(&base2);
    
    if(child1 == NULL)
    {
    
      cout<<"failed";
    }
    
    else 
    {
       cout<<"good";
    }
    
    
    if(child2 == NULL)
    {
    
      cout<<"child 2 failed";
    }
    
    else 
    {
       cout<<"child2 good";
    }
    return 0;
}
