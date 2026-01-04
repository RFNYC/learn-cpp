#include <format>
#include <iostream>
#include <cmath>
#include <string>

/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters.
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath
the ground (height 0). Use a function to calculate the height of the ball after x seconds.

The function can calculate how far the ball has fallen after x seconds using the following formula:
distance fallen = gravity_constant * x_seconds2 / 2
*/

float distance_fallen(float seconds) {
	float base{ seconds };
	float exponent{ 2 };

	// std::pow() is basically us calling a libraries function for the first time. It does the work for us
	float multiplier = std::pow(base, exponent) / 2;
	float distance{};
	distance = 9.8 * multiplier;
	float distance_fallen{ 100 - distance };


	if (distance_fallen <= 0) {
		std::cout << "The ball has hit the ground." << '\n';

	}
	else {

		std::string response = std::format("At second {}, The ball is at height {} meters.", seconds, distance_fallen);
		std::cout << response << '\n';
	}

	return 0;
}

int main() {
	std::cout << "Enter the height of your tower: " << '\n';
	double tower_height{};
	std::cin >> tower_height;

	distance_fallen(0);
	distance_fallen(1);
	distance_fallen(2);
	distance_fallen(3);
	distance_fallen(4);
	distance_fallen(5);
}