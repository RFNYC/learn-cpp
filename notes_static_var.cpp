#include <iostream>


// example of static variable usecase:
// local variable created in nested block doesn't lose changes made to it because it isn't destroyed on function end.
// this is because the static var lifetime isn't limited to the block, it endures from start to end of the program.
void incrementStatic() {
	
	static int num{ 1 };
	// increments the variable itself
	++num;
	std::cout << num << '\n';

}

// common usecase: 
// Generating IDs, since you can count on the output being saved each time you can leverage this with a function to get multiple
// uses out of it. For example creating enemy IDs on creation.

int createZombie() {
	
	// zero for the first zombie created, n+1 for subsequent calls
	static int s_zombieid{ 0 };

	// increments a copy of obj_id and returns the copy.
	s_zombieid++;
	std::cout << "Created Zombie ID:" << s_zombieid << '\n';

	// returning the ID has other usecases if you're trying to access a specific enemy.
	return s_zombieid;
}

int main() {
	
	// you need to initialize the static variables inline, they wont be created on subesquent calls
	incrementStatic();
	incrementStatic();
	incrementStatic();

	createZombie();
	createZombie();
	createZombie();

	// lets say that the fourth zombie would be a boss zombie
	int zombie_id{ createZombie() };
	std::cout << '\n' << "You grabbed an ID! Boss_Zombie|ID:" << zombie_id << '\n';

}