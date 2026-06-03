#include <iostream>

int main() {
	std::cout << "Numberzzzz\n";
	int startingHealth{ 500 };
	int lost{ 100 };

	// THis will have a starting value of 400
	int remainingHealth{ startingHealth - lost };
	std::cout << remainingHealth << "\n";

	int level{ 5 };
	level++; // level is now 6
	level--; // level is now back to 5
	std::cout << level << "\n";

	int secondLevel{ 10 };
	secondLevel += 5; // secondLevel is now 15
	std::cout << secondLevel << "\n";

	int health{ 100 };
	int healthModifier{ -10 };

	health += healthModifier;// health is now 90
	health *= -1;// health is now -90
	std::cout << health;

	float salud{ 2.5 };
	float vida{ 5/2 };//2.0

	float saludMaxima{ 5.0 / 2.0 }; //2.5
	float saludActual{ saludMaxima };//2.5

	float myNumber{ 1.2345678 };
	std::cout << "\n" << myNumber;
	// for precision when streaming float numbers 
	std::cout.precision(8);
	std::cout << "\n" << myNumber;

	float Health{ 5.0 }; // Health is 5.0
	Health = Health + 20.0; // Health is now 25.0
	Health++; // Health is now 26.0
	Health--; // Health is now 25.0

	// We can freely combine floating and
	// integer numbers in the expressions
	Health += 25; // Health is now 50.0
	Health -= 10; // Health is now 40.0
	Health *= 2.5; // Health is now 100.0
	Health /= 3; // Health is now 33.3333...

	
}