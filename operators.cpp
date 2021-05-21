#include <iostream>

using namespace std;
int main(void)
{
    // 1.4.1.9 as with division mod by 0 is not defined but, undefined value will be set on i
    cout << "1. module operation with left operand equals to 0 is not defined" << endl;
    {
        int i = 10 % 0;

        cout << "i = " << i << endl << endl;
    }

    // 1.4.1.10 Priorities & Bindings
    cout << "2. lift-sided binding and prioritizing operators according *Hierarchy Priorities* table" << endl;
    {
        int i, j, k, l;
        i = 100;
        j = 25;
        k = 13;
        l = (5 * ((j % k) + i) / (2 * k)) / 2;
        cout << "l = " << l << endl << endl;
    }
    /*
     * 1.4.1.14 Pre-and post-operators and their priorities
     *  Their binding depends on whether you use the prefix or postfix version. 
     *  The prefix version operators have a right-to-left binding, while the postfix operators bind from left to right.
    */
    cout << "2. Pre-and post-operators and their priorities" << endl;
    {
       int i, j;

        i = 4;
        j = 2 * i++;
        i = 2 * --j;  
        cout << "i = " << i << endl;
        cout << "j = " << j << endl << endl;
    } 

    {
        int i = 1;
        i = ++i + 10 + ++i;
        cout << "i = " << i << endl;
    }

    cout << oct << 8 << endl;


    return 0;
}

/*
 *********************
 * Division Algorithm
 * ******************
 * https://www.youtube.com/watch?v=yR1EyX5vWxo
 * 
 **********
 * Binding
 **********
 *
 * left-sided binding
 * 
 **************************
 * Hierarchy of Priorities
 **************************
 *  Ordered from Highest to lowest 
 * 
 *  ()
 *  ! ~ (type) ++ -- + -                unary
 *  * / %	
 *  + -	                                binary
 *  << >>
 *  < <= > >=
 *  == !=
 *  &
 *  |
 *  &&
 *  ||
 *  = += -= *= /= %= &= |= ^= >>= <<=
 * 
*/