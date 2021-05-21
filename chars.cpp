#include <iostream>
#include <iomanip> // adding manipulators for io cout

using namespace std;
int main(void)
{
    bool b = true;
    cout << b << endl;
    // 1.5.1.5 Scaping oct \ooo and hex \xhh literals
    cout << "Octal literal: \047,\nHexadecimal literal: \x27" << endl;
    cout << "Octal literal: 0" << oct << (int)'\'' << endl << "Hexadecimal literal: x" << hex << (int)'\'' << endl;
    // for this, <iomanip> needs to be included
    cout << "Octal literal: 0" << setbase(8) << (int)'\'' << endl << "Hexadecimal literal: x" << setbase(16) << (int)'\'' << endl;
    return 0;
}

/*
 *********************
 * ASCCI
 * ******************
 *  CHR         DEC HEX
 *  (LF)	    10	0x0A
 *  (CR)	    13	0x0D
 *  (space)	    32	0x20
 *  0	        48	0x30
 *  A	        65	0x41
 *  a	        97	0x61
 * 
*/