#include <iostream>
#include<vector>

using namespace std;

int main() {
int n,f,i,num;

cout<<"Nelem:";
cin>>n;


vector<int> a;

for(i=0;i<n;i++){
  cin>>num;
  a.push_back(num);
}

for(i=0;i<a.size();++i){

       if(a[0]!=0 && i==0){

           cout<<0<<"-"<<(a[i]-1)<<endl;
       }

        if(i==(n-1) && a[i]!=99){
            cout<<(a[i]+1)<<"-"<<99<<endl;

        }


    if(a[i+1]-a[i]>1 && i!=(n-1)){

        if((a[i+1]-a[i])==2)
        {
            cout<<(a[i]+1)<<endl;
        }
        else{
        cout<<(a[i]+1)<<"-"<<(a[i+1]-1)<<endl;
        }
    }

}


}