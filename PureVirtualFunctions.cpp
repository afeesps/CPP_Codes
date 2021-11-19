#include <stdio.h>
#include<iostream>
using namespace std;
class Entity
{
    private :
     //int x,y;
     
    public:
    
    int x,y;
    
    Entity()
    {
        
        cout<<"constructor called";
        x = 0;
        y = 0;
    }
     /* all pure virtual function needs to be implemented in base class*/
     virtual void getX()=0;
     virtual void getY()=0;
     virtual void printScore(){};
    
};

class Player : public Entity
{
    
    int score;
    // it should have all the implementation of pure virtual functions 
    /* error: invalid new-expression of abstract class type ‘Player’* if not all virtual functions are declared*/  
public:

    Player()
    {
        cout<<"Player constructor called";
        
        score = 0;
    }
    void getX()
    {
        cout<<x;
    }
    
    /*void getY()
    {
        cout<<y;
    }*/
    
    /*void printScore()
    {
        cout<<"score="<<score;
    }*/
};
int main()
{
    Entity * en = new Player();
    
    en->getX();
    
    en->printScore();

    return 0;
}
