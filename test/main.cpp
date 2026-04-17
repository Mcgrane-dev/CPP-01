#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{

	return 0;
}

//Use references when you can and only pointers if you must, C++
//When you use tools like references (&), 
//you hold the compiler to a stricter standard.
//You are essentially telling it: "Do not even let me run this program if I forget to initialize the weapon."
//Be carfull with * and always initilize them to NULL or it segfaults