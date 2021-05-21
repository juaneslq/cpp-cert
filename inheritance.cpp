#include <iostream>
#include <string>
using namespace std;

/* Inheritance
 *  1. access specifiers
 *      _________________________________________________
 *      |   public      |               |   public      |
 *      |   protected   |   public      |   private     |
 *      |   private     |               |   none        |
 *      |------------------------------------------------
 *      |   public      |               |   protected   |
 *      |   protected   |   protected   |   protected   |
 *      |   private     |               |   none        |
 *      |------------------------------------------------
 *      |   public      |               |   private     |
 *      |   protected   |   private     |   private     |
 *      |   private     |               |   none        |
 *      -------------------------------------------------
*/

class Pet {
protected: string name;
public:	   Pet(string name) : name(name) {}
        // giving Pet * pointers the hability to perform actions of the subclass that is ponting at
	   virtual void MakeSound(void) { cout << name << " is silent :(" << endl; }
};
class Dog : public Pet {
public:	Dog(string name) : Pet(name) {}
	void MakeSound(void) { cout << name << " says: Woof!" << endl; }
};
class GermanShepherd : public Dog {
public:	GermanShepherd(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Wuff!" << endl; }
	void Laufen(void) { cout << name << " runs (gs)!" << endl; }
};
class MastinEspanol : public Dog {
public:	MastinEspanol(string name) : Dog(name) {}
	void MakeSound(void) { cout << name << " says: Guau!" << endl; }
	void Ejecutar(void) { cout << name << " runs (mes)!" << endl; }
};

// when passing a subclass up-casting is carried out
void PlayWithPet(Pet *pet) {
	GermanShepherd *gs;
	MastinEspanol *mes;
	pet -> MakeSound();
    // Down-casting
	if(gs = dynamic_cast<GermanShepherd *>(pet))
		gs -> Laufen();
	if(mes = dynamic_cast<MastinEspanol *>(pet))
		mes -> Ejecutar();
}
// not switable way to check dynamic_cast successfulness when dealing with references
void PlayWithRiskyPet(Pet &pet) {
	pet.MakeSound();
    // catch & handle runtime errors since not possible to check nullity
	try {
		dynamic_cast<GermanShepherd &>(pet).Laufen();
	} catch(...) {}
	try {
		dynamic_cast<MastinEspanol &>(pet).Ejecutar();
	} catch(...) {}
}

int main(void) {
    {
        Pet *pet = new Pet("creature");
        Dog *dog = new Dog("Dog");
        GermanShepherd *gs = new GermanShepherd("Hund");
        MastinEspanol *mes = new MastinEspanol("Perro");
        PlayWithPet(pet);
        PlayWithPet(dog);
        PlayWithPet(gs);
        PlayWithPet(mes);
    }

    /* Whe have to deal diffrently with references */
    {
        Pet pet("creature");
        Dog dog("Dog");
        GermanShepherd gs("Hund");
        MastinEspanol mes("Perro");
        PlayWithRiskyPet(pet);
        PlayWithRiskyPet(dog);
        PlayWithRiskyPet(gs);
        PlayWithRiskyPet(mes);
    }

    return 0;
}