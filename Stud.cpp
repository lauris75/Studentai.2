#include "Stud.h"

using std::string;

Base::Base() {};

Base::Base(string v, string p)
{
	vardas = v;
	pavarde = p;
};

Stud::Stud()
{
	egzas = 0;
	galvid = 0.0;
}

Stud::Stud(string vardas1, string pavarde1, std::vector<int> pz, int egz, double gal)
{
	vardas = vardas1;
	pavarde = pavarde1;
	nd.reserve(pz.size());
	copy(pz.begin(), pz.end(), back_inserter(nd));
	egzas = egz;
	galvid = gal;
}

Stud::Stud(string vardas1, string pavarde1, double gal)
{
	vardas = vardas1;
	pavarde = pavarde1;
	egzas = 0;
	galvid = gal;
}
void Stud::SetName(std::string s)
{
	vardas = s;
};

void Stud::SetSurname(std::string s)
{
	pavarde = s;
}

Stud::Stud(const Stud& a)
{
	vardas = a.vardas;
	pavarde = a.pavarde;
	egzas = a.egzas;
	nd.reserve(a.nd.size());
	copy(a.nd.begin(), a.nd.end(), back_inserter(nd));
	galvid = a.galvid;
}

Stud::~Stud()
{
}

string Stud::GetName() const
{
	return vardas;
}

string Stud::GetSurname() const
{
	return pavarde;
}

double Stud::GetEgzas() const
{
	return egzas;
}

double Stud::GetGalutinis() const
{
	return galvid;
}