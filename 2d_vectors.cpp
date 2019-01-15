#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

namespace sort_funct{
	
bool sort_array(const vector<string>& string1,const vector<string>& string2){
	
	  return string1.size() > string2.size();


}

namespace vector_var{
    
vector<vector<string>> string1{{"kohli","sachin"},{"dhoni"},{"ganguly","rohit sharma"}};
    
}
namespace funct_vector{

int i,j;
void display_vector(){
    
    for(i=0;i<vector_var::string1.size();++i){
    
    for(j=0;j<vector_var::string1[i].size();++j)
      cout<<vector_var::string1[i][j]<<"\t";
      
    cout<<endl;
        
}    

}
}


int main() {
	
sort_funct::sort_array(string1.begin(),string1.end(),sort_array);


funct_vector::display_vector();


}