#include <iostream>
#include <string>
#include <vector>


class Stud
{
public:

	Stud();

	Stud(std::string, std::string, std::vector<int>, int, double);

	Stud(std::string, std::string, double);

	~Stud();

	std::string GetName() const;

	std::string GetSurname() const;

	double GetEgzas() const;

	double GetGalutinis() const;

	Stud(const Stud&);

private:

	std::string vardas;
	std::string pavarde;
	std::vector<int> nd;
	int egzas;
	double galvid;
};