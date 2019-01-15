#include <iostream>

using namespace std;

int main() {
    
    
  int a[6]={1,2,5,8,9,10};
  int n=6;
  int key=6;
  int  i=0;
  int  j=n-1,mid=0;
    while(i<j){
        
        mid=(i+j)/2;
        if(key>a[mid]){
            
            if(key<a[mid+1]  )
               {
                   if((key-a[mid])< (a[mid+1]-key)){
                   
                      cout<<"closest number is "<<a[mid];
                      return 0;
                   }
                      
                else{
                     cout<<"closest number is"<<a[mid+1];
                     return 0;
                    }
               }
            
         i=mid+1 ;
         
        }
        else  if(key>a[mid]){
            
            
            if(key>a[mid-1])
               {
                   if((key-a[mid])< (a[mid+1]-key)){
                   
                      cout<<"closest number is "<<a[mid];
                      return 0;
                   }
                      
                else{
                     cout<<"closest number is"<<a[mid+1];
                     return 0;
                    }  
               }
            
            
         j=mid-1;
            
        }
        
         else 
            cout<<"closest number is "<<a[mid];
            return 0;
        
        
        
        
        
    }

  



}
