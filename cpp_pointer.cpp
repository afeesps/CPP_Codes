#include <iostream>

using namespace std;


int main() {

int *a=new int[20];
int i=0;

for(i=0;i<5;i++){
    
    cout<<"ENter no:";
    cin>>a[i];
    
}

for(i=0;i<5;i++){
    
    cout<<a<<endl;
    cout<<*a<<endl;
    //cout<<a[i]<<endl;
    cout<<"==="<<endl;
    a++;
    
}


}