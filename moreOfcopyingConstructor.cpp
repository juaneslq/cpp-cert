#include <iostream>
#include <string>
using namespace std;

class A { 
public:
	A(A &src) { cout << "copying A..." << endl; }
	A(void) { }
	void Do(void) { cout << "A is doing something" << endl; }
};
class B { 
public:
	B(B &src) { cout << "copying B..." << endl; }
	B(void){ }
	void Do(void) { cout << "B is doing something" << endl; }
};
class Compo {
public:
	Compo(void) { } ;
	A f1;
	B f2;
};
class CompoAdv {
public:
	Compo(Compo &src) { cout << "Copying Compo..." << endl; }
	Compo(void) { } ;
	A f1;
	B f2;
};
class CompoAdvIpvd {
public:
    Compo(Compo &src) : f1(src.f1), f2(src.f2) { cout << "Copying Compo..." << endl; }
	Compo(void) { } ;
	A f1;
	B f2;
};

int main(void) {
    // default copy
    {
        Compo  co1;
        Compo  co2 = co1;
        co2.f1.Do();
        co2.f2.Do();
    }
    // redefining explicit copying constructor on the compo will take full controll of all casses copying
    {
        CompoAdv  co1;
        CompoAdv  co2 = co1;
        co2.f1.Do();
        co2.f2.Do();
    }
    // making explicit copyiong constructor to call explicitly all classes copuing constructor
    {
        CompoAdvIpvd  co1;
        CompoAdvIpvd  co2 = co1;
        co2.f1.Do();
        co2.f2.Do();
    }
	return 0;
}
