#include "Specification.h"

void Population::setPopulation(double pop) {
	population = pop;
}
void Population::setBirths(double birth) {
	numBirths = birth;
}
void Population::setDeaths(double death) {
	numDeaths = death;
}
double Population::getPopulation() const {
	return population;
}
double Population::getBirths() const {
	return numBirths;
}
double Population::getDeaths() const {
	return numDeaths;
}
double Population::getBirthRate(Population Obj) {
	double birthRate = Obj.getBirths() / Obj.getPopulation();
	return birthRate;
}
double Population::getDeathRate(Population Obj) {
	double deathRate = Obj.getDeaths() / Obj.getPopulation();
	return deathRate;
}