#include <iostream>
using namespace std;
 
//// LIBRARY START
class Base
{
public:
 
    Base() { }
 
    virtual // Ensures to invoke actual object destructor
    ~Base() { }
 
    // An interface
    virtual void DisplayAction() = 0;
};
 
class Derived1 : public Base
{
public:
    Derived1()
    {
        cout << "Derived1 created" << endl;
    }
 
    ~Derived1()
    {
        cout << "Derived1 destroyed" << endl;
    }
 
    void DisplayAction()
    {
        cout << "Action from Derived1" << endl;
    }
};
 
class Derived2 : public Base
{
public:
    Derived2()
    {
        cout << "Derived2 created" << endl;
    }
 
    ~Derived2()
    {
        cout << "Derived2 destroyed" << endl;
    }
 
    void DisplayAction()
    {
        cout << "Action from Derived2" << endl;
    }
};
 
//// LIBRARY END
 
class User
{
public:
 
    // Creates Drived1
    User() : pBase(0)
    {
        // What if Derived2 is required? - Add an if-else ladder (see next sample)
        pBase = new Derived1();
    }
 
    ~User()
    {
        if( pBase )
        {
            delete pBase;
            pBase = 0;
        }
    }
 
    // Delegates to actual object
    void Action()
    {
        pBase->DisplayAction();
    }
 
private:
    Base *pBase;
};
 
int main()
{
    User *user = new User();
 
    // Need Derived1 functionality only
    user->Action();
 
    delete user;
}