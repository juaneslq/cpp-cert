#include <iostream>
using namespace std;

/* Static Members
 *  1. static members must be DEFINED and/or INITIALIZED outside the class.
 *      > scope operator (::) has to be used for that purpose. 
 *  2. static members can be either public or private.
 *  3. access conflicts with non-statics members
 *                                 accessed
 *      ---------------------------------------------
 *      |               |   static  |   non-static  |
 *      ---------------------------------------------
 *      |   static      |   OK      |   FAIL        |
 *      |   non-static  |   OK      |   OK          |
 *      ---------------------------------------------
 *  4. static explicitly initialized members are store on the .data memory region
 *  5. static non-initialized are store on the .bss memory region
*/
class Test
{
public:
    static int public_int;
private:
    static int private_int;
};

int Test::public_int;      // static uninitialized member (stored in .bss)
int Test::private_int = 1; // static initialized member (stored in .data)
/*************************************************************************/

class A
{
private:
    static int instnceCounter;
public:
    A(){ cout<<"Create instance "<<++instnceCounter<<endl; };
    A(const A &){ cout<<"copy"<<endl; }
    ~A(){  cout<<"Deleting instance "<<instnceCounter--<<endl; }
    static A & getInstance()
    {
        static A instance;
        return instance;
    }
};

int A::instnceCounter = 0;

class B
{
public:
    B(){ A &aObj1 = A::getInstance(); }
};

int main()
{
    B bObj;
    return 0;
}