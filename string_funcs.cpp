#include <iostream>

using namespace std;

int main() {
  string s1("thisisastring");
  cout<<s1[0]<<s1[16];
  cout<<'\0';
  
  string s(s1.begin(),s1.end());
  cout<<endl<<s;
  string s3(s,5,8);
  cout<<endl<<s3;
  cout<<endl;
  string::iterator i; //iterator
  ;
  for(i=s1.begin();i<s1.end();i++){
      
      cout<<*i;    //using the iterator function 
      
  }
  
 cout<<endl<<s1.substr(5,6);
  
  
  
  
}
