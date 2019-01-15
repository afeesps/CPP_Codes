#include <iostream>
#include <vector>

using namespace std;
class EmpID{
	
 int empid;	
 
 public:
   EmpID(){
	

}



template <typename T>
class DuplicateData{
    
 vector<T> elems;
 vector<T> dups;
 
 
public:
 
void insertelems(int n);
 vector<T> & findduplicate();
void display_dups(vector<T> &d1);
friend void operator==(const T &d1)

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

void DuplicateData<T>::display_dups( vector<T> &d1){
   
    if(d1.size()==0){

     cout<<"Athenthada/di ninakk duplication ulla string adicha,itreem valiya code kanditt manasilaayilleda/di jaada thendii!!!!";
     return;
    } 
    typename vector<T>::iterator k1;
    cout<<"Most Duplicate elements";
    for(k1=d1.begin();k1<d1.end();++k1){
        
      cout<<*k1<<endl;
        
    }
    
    
    
    
}

template <typename T>
vector<T> & DuplicateData<T>::findduplicate(){
  typename vector<T> ::iterator i;
  typename vector<T> ::iterator j;
  typename vector<T> ::iterator k;
  int count=0;
  int temp=0;
  int old_count=0;
  
  
    for(i=elems.begin();i<elems.end();++i){
         temp=0;
       
        for(j=i+1;j<(elems.end());j++){
            
             if(*i==*j){
                 
                 temp++;
                 
             }
            
        }
       
        old_count=count;
       
       if(temp>count){
          
           count=temp;
           k=i;
       }
       if(temp==count && temp!=0 && count!=0){
           if(count>old_count){
               
              dups.clear() ;
               
           }
           
           dups.push_back(*i);
       }
       
       
   }
     //dups.push_back(*k);
     return dups;

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
I1.display_dups(I1.findduplicate());

/*DuplicateData<char> C1;
C1.insertelems(num);
C1.display_dups(C1.findduplicate());

DuplicateData<string> S1;
S1.insertelems(num);
S1.display_dups(S1.findduplicate()); */
DuplicateData<EmpID> E1;
E1.insertelems(num);
E1.display_dups(

}

   else if(num==1 && num>-1)
     cout<<"there is no need to check the duplication";
        
    




}
