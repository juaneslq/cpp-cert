#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    /*
        * def:
        *  /Precision: is the number of digits in a number.
        *  /Scale:     is the number of digits to the right of the decimal point in a number.
        * For example, the number 123.45 has a precision of 5 and a scale of 2
    */

    /*********************
     * Numerical anomaly *
    **********************/

    // floats has precision of 8
    {
        float x = 11111111000.0;    
        float y = 0.00011111111;

        float z = x+y;

        // use set presicion to decide how many presicion digits to display
        cout <<  std::setprecision(22) << z << endl;
    }

    // double has presition of 16 (bouble precision than float)
    {
        double x = 11111111000.0;
        double y = 0.00011111111;

        double z = x+y;

        cout <<  std::setprecision(22) << z << endl;
    }

    return 0;
}