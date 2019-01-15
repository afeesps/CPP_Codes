
 #include <iostream>

using namespace std;
    
struct Node{
  int data;
  struct Node *next;

};

class LinkedList{
    private: 
      Node *head;
    public:
       LinkedList(){
          head=NULL;
          //tail=NULL;
       }
       
      void insertdata(int a){
        Node *tmp=new Node;
        tmp->data=a;
        tmp->next=NULL;
        
        
        if(head==NULL){
          head=tmp;
          //tail=tmp;
        }
        
        else{
            
         //head=tmp;
         tmp->next=head;
         head=tmp;
            
        }
      }
        
      void showdata(){
          
         Node *trav;
         trav=head;
         while(trav!=NULL){
             
             cout<<trav->data<<"---->";
             trav=trav->next;


         }
         
    
     void midelem(){
        
       //p1=new Node;
       //p2=new Node;
        Node *p1=head;
        Node *p2=head;
        
        while(p2->next && p2->next->next){


             p2=p2->next->next;
             p1=p1->next;
            
            
        }
        
        cout<<"Data:"<<p1->data;
        
        
        
    }
      
        
};


int main() {
	LinkedList l1;
	l1.insertdata(12);
	l1.insertdata(13);
	l1.insertdata(14);
	l1.insertdata(16);
	l1.insertdata(17);
	l1.showdata();
	l1.midelem();
	}
