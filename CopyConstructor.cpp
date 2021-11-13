#include <iostream>
#include<string.h>

using namespace std;
class Mobile
{
    char *name;
    
    public:
    Mobile()
    {
        cout<<"constructor Mobile() called";
        name = NULL;
    }
    
    void printMobileName()
    {
        cout<<"mobile name:"<<name<<"\n";
        printf("mobile name: %s\n",name);
    }
    
    Mobile(string s)
    {
        cout<<"constructor Mobile(string s)\n";
        name = new char[s.length()];
        strcpy(name,s.c_str());
        
    }
    
    Mobile(const Mobile & m)
    {
        cout<<"constructor Mobile(const Mobile & m)\n";
        name = new char[sizeof(m.name)];
        
        strcpy(name,m.name);
        
    }
    ~Mobile()
    {
        cout<<"Destructor called";
        
        if(name!=NULL)
        {
          delete[] name;
        }
    }
    
    
    
    
};

int main()
{
    Mobile m;
    
    Mobile* m1;
    /*void* m2;
    m2 = /*(Mobile*)*/malloc(sizeof(Mobile));
    
    m1 = new Mobile("samsung");
    
    //m1->printMobileName();
    
    
    Mobile m3("nokia");
    Mobile m2=*m1;  // copy constructor called 
    
    m2.printMobileName();

    return 0;
}
