#include <iostream>
#include <vector>

using namespace std;
template <typename T>
class DuplicateData{
    
 vector<T> elems;
 
 public:
 
void insertelems(int n);
 T findduplicate();

};
template <typename T>
void DuplicateData<T>::insertelems(int n){
  T temp;
  for(int i=0;i<n;i++){
      cout<<"["<<(i+1)<<"]:";
      cin>>temp;
      cout<<"\n";
      elems.push_back(temp);
  } 
  

     
}

template <typename T>
T DuplicateData<T>::findduplicate(){
  typename vector<T> ::iterator i;
  typename vector<T> ::iterator j;
  typename vector<T> ::iterator k;
  int count=0;
  int temp=0;
 

 
    for(i=elems.begin();i<elems.end();++i){
         temp=0;
       
        for(j=i+1;j<(elems.end()-1);j++){
            
             if(*i==*j){
                 
                 temp++;
                 
             }
            
        }
       
       if(temp>count){
           
           count=temp;
           k=i;
       }
      
       
       
   }
     return *k;

}


int main() {

int num;
char a;
cout<<"enter the number of elems:";
cin>>num;

if(num==0)
      cout<<"minimum one element is required";


else if(num>1){

DuplicateData<int> I1;
I1.insertelems(num);
cout<<I1.findduplicate();

DuplicateData<char> C1;
C1.insertelems(num);
cout<<C1.findduplicate();

DuplicateData<string> S1;
S1.insertelems(num);
cout<<S1.findduplicate(); 

}

   else if(num==1 && num>-1)
     cout<<"there is no need to check the duplication";
        
    




}
