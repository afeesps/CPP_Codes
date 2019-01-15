#include<iostream>
using namespace std;

int main(){
    
    int k=1;
    int n=5;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            
            cout<<k<<" ";
            k=k+1;
            
        }
        
        cout<<endl;
        
    }
    
}