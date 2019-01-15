#include <iostream>

using namespace std;

class A{
    
 private:
   int a;
   static int b;
   
 public:
    A(){
	
    a=10;	
		
    }
 
   //void getdata();
    friend void display(A,B);
  
    
};


//void A::getdata(){
//   cout<<"enter the data:";
 //   cin>>a;
    
    

//}


class B{
	
  private:
   int b;
  public:
  
    B(){
		
     b=20;		
		
	}
    
  friend display(A,B);
	
}

void display(A a1,B b1){
    int temp;
    temp=a1.a + b1.b;
    cout<<endl<<"data:  "<<temp;
}

int main() {
    
    A A1;
	B B1;
    //A1.getdata();
    display(A1,B1);

	
}
