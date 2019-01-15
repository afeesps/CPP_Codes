#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr;
vector<int>::iterator i;
arr.push_back(10);
arr.push_back(6);
arr.push_back(28);

for(i=arr.begin();i<arr.end();++i)
{  int sum=0;
  for(int j=1;j<=(*i/2);j++)
  {
  if((*i%j)==0)
    {  sum=sum+j;
	}
	
   }
   
   if(sum==*i){
   
      cout<<"the number is perfect"<<*i;
	 }
	 
}

return 0;

}
