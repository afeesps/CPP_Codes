#include <iostream>
#include<vector>
using namespace std;
int main() {

  vector<int> v1{1,2,3,4,5};
  vector<int> v2;
  vector<int>::iterator k;
  int i;
 
  cout<<v2.empty()<<"empty";  // 0 if it is empty
  cout<<v1.size();
  
  for(i=0;i<v1.size();++i){
       v2.push_back(v1[i]);
  } 
  
  for(i=0;i<v2.size();i++){
     cout<<v2[i];
  }
  
  cout<<v2.at(2);  //get the value at a place
  v2.clear();       //clear the vector


}
