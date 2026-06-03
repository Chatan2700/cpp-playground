#include <iostream>
using namespace std;


int main() {
	// Is this monster currently alive? 
	bool isAlive {true};
	int level{ 5 };
	string name{ "Goblin Warrior" };
	float armor{ 0.2 };

	int maxHealth{ 150 };
	int currentHealth{ maxHealth };
	
	cout << "The monster's name is " << name;
	cout << "\nIs level " << level << " So be careful!!";
	cout << "\nYour current health is: " << currentHealth;
}