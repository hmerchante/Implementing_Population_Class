#ifndef Specification_h
#define Specification_h

class Population
{
private:
	double population;
	double numBirths;
	double numDeaths;
public:
	Population() : population(0.0), numBirths(0.0), numDeaths(0.0) {}
	void setPopulation(double);
	void setBirths(double);
	void setDeaths(double);
	double getPopulation() const;
	double getBirths() const;
	double getDeaths() const;
	double getBirthRate(Population Obj);
	double getDeathRate(Population Obj);
};

#endif Specification_h
