#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl

class Dog {
	
	private:
		// Name of Dog
		std::string Name; 

		// Name of owner
		std::string Owner;   

		// Dog's Age
		unsigned int Age;

		// Happiness rating from Pat() and HoursAwayFromHome()
		int Happiness;
	
	public:

		// Creates a dog. A dog must have a name and a birth year.
		Dog(const std::string &nameIn, unsigned int ageIn );

		// How Long Away From Home
		void HoursAwayFromHome( int numHours );

		// Pet the dog
		void Pet( int numPets );
		
		// Give the dog to an owner
		void SetOwner( const std::string& newOwner );
		
		// Print the Dog's Information
		friend std::ostream& operator<<( std::ostream& out, const Dog& printDog );

};

#endif 