#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	// ---------------------------------------------------
    std::cout << "--- Standard Subject Tests ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

	// ---------------------------------------------------
    std::cout << "\n--- Deep Copy Test (Character) ---" << std::endl;
    Character* original = new Character("original");
    original->equip(src->createMateria("ice"));
    
    Character* clone = new Character(*original); // deep copy
    std::cout << "Original name: " << original->getName() << std::endl;
    std::cout << "Clone name: " << clone->getName() << std::endl;
    
    original->use(0, *bob);
    clone->use(0, *bob); 

	// ---------------------------------------------------
    std::cout << "\n--- Unequip & Memory Save Test ---" << std::endl;
    AMateria* groundPointer = NULL; 
    
    groundPointer = tmp;
    me->unequip(1); // unequip cure
    
    if (groundPointer)
    {
        delete groundPointer;
        groundPointer = NULL;
    }

	// ---------------------------------------------------
    std::cout << "\n--- Learn Full Test ---" << std::endl;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    AMateria* extra = new Ice();
    src->learnMateria(extra); // will delete extra

	// ---------------------------------------------------
    std::cout << "\n--- Cleanup ---" << std::endl;
    delete bob;
    delete me;
    delete src;
    delete original;
    delete clone;

    return 0;
}
