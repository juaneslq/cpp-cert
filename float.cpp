#include <iostream>
using namespace std;
int main(void)
{
    //g++ -o float.cpp

    // operations are made on the types operations are made with, the result is cast to the variable type
    // when diferent types on the same operation, compiler tries to hold the one with less losse
    cout << "Case 1. Losse of operation accuracy" << endl;
    int i = 10/4;       // 1) 10/4 = 2      2) assignment int to int
    float f = 10. / 4;  // 1) 10.0/4 = 2.5  2) assignment froal to float f = 2.5
    
    cout << "int = " << i << endl;
    cout << "float = " << f << endl << endl;

    // implicit conversion takes the hundredths out
    cout << "Case 2. Losse of accuracy" << endl;
    f = 100.25;
    i = f;

    // variables have not the same size on all platforms it can vary from machine to machine IMPLEMENTATION DEPENDANT ISSUE
    cout << "Case 3. Losse of value accuracy [Overflow]" << endl;
    f = 1E10;
    i = f;

    cout << "float = " << f << endl;
    cout << "int = " << i << endl << endl;

    return 0;
}


/*
 * **************
 * Integers Sizes
 * **************
 * int8_t       -128 .. 127                                             (-128   ..  127)
 * uint8_t      0 .. 255                                                (0      ..  255
 * int16_t      -32,768 .. 32,767                                       (-32E3  ..  32E3)
 * uint16_t      0 .. 65,535                                            (0      ..  56E3)
 * int32_t      -2,147,483,648 .. 2,147,483,647                         (-2E9   ..  4E9)
 * uint32_t     0 .. 4,294,967,295                                      (0      ..  4E9)
 * int64_t      -9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807 (-9E18  ..  9E18)
 * uint64_t     0 .. 18,446,744,073,709,551,615                         (0      ..  18E18)
 * 
 * **************
 * Float Sizes
 * **************
 * float        4 
 * double       8
 * long double  16
 * 
 * **************
 * Pointers Sizes
 * **************
 * pointers     8
*/