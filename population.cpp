//Programmed by: Hunter Merchen

#include "Specification.h"
#include <iostream>
#include <iomanip>
using namespace std;

// User function prototypes
void inputPopulation(Population&);
void inputBirths(Population&);
void inputDeaths(Population&);

// Driver
int main() {
	Population Burleson;

	inputPopulation(Burleson);
	cout << endl;

	inputBirths(Burleson);
	cout << endl;

	inputDeaths(Burleson);
	cout << endl;

	cout << "Report prepared by : Hunter Merchen";
	cout << "\n\nPopulation Statistics:\n";
	cout << "\tPopulation: " << setw(7) << Burleson.getPopulation() << endl;
	cout << fixed << showpoint << setprecision(4);
	cout << "\tBirth Rate: " << setw(7) << Burleson.getBirthRate(Burleson) << endl;
	cout << "\tDeath Rate: " << setw(7) << Burleson.getDeathRate(Burleson) << endl;
	cout << "\n";
	system("pause");

	return 0;
}

// User function definitions
void inputPopulation(Population& targetPop) {
	double pop;
	int minPop = 1;
	int maxPop = 1000000;

	cout << "Enter total population: ";
	while (true) {
		cin >> pop;
		if (pop < minPop || pop > maxPop) {
			cerr << "Error: Invaild Input. Enter a Number Between 1 and One-Million.\n";
		}
		else {
			targetPop.setPopulation(pop);
			break;
		}
	}
}

void inputBirths(Population& targetPop) {
	double birth;
	double pop = targetPop.getPopulation();
	double minBirth = 1;
	double maxBirth = pop * 0.05; // 5% Population

	cout << "Enter total births: ";
	while (true) {
		cin >> birth;
		if (birth < minBirth || birth > maxBirth) {
			cerr << "Error: Invaild Input. Amount of births cannot exceed 5% of Population.\n";
			cout << "You entered a population of " << pop << ".\n";
			cout << "Max allowed births is " << maxBirth << ".\n";
		}
		else {
			targetPop.setBirths(birth);
			break;
		}
	}
}

void inputDeaths(Population& targetPop) {
	double death;
	double pop = targetPop.getPopulation();
	double minDeath = 1;
	double maxDeath = pop * 0.05; // 5% Population

	cout << "Enter total deaths: ";
	while (true) {
		cin >> death;
		if (death < minDeath || death > maxDeath) {
			cerr << "Error: Invaild Input. Amount of deaths cannot be null or exceed 5% of Population.\n";
			cout << "You entered a population of " << pop << ".\n";
			cout << "Max allowed deaths is " << maxDeath << ".\n";
		}
		else {
			targetPop.setDeaths(death);
			break;
		}
	}
}