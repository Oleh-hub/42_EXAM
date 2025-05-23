#include "Warlock.hpp"

int main()
{
	
/* 	{
		// Warlock bob;                            //Does not compile
		Warlock bob("Bob", "the magnificent");  //Compiles
		const std::string AAAA = bob.getName();
		std::cout << AAAA <<  std::endl;
		Warlock jim("Jim", "the nauseating");   //Compiles
		std::cout << jim.getName() <<  std::endl;
		// bob = jim;                            //Does not compile
		std::cout << bob.getName() << ", " << bob.getTitle() <<  std::endl;
		// Warlock jack(jim);                      //Does not compile
	} */
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;	
	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();	
	delete jack;	

	return (0);
}