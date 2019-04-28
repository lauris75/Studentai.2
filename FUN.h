# ifndef FUN_H
# define FUN_H

#include "Stud.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
#include <deque>
#include <list>
#include <iterator>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::list;
using std::deque;

int sprendimas();

template <typename T1>
void DuomenuNuskaitymas(T1& stude, int& ilgvardas, int& ilgpavarde)
{
	string galutinis;
	int x, suma, kiekis = 0;
	std::ifstream PD("kursiokai.txt");
	if (PD)
	{
		string vardas, pavarde;
		vector<int> nd;
		double galvid;
		int egzas;
		PD >> galutinis >> galutinis >> galutinis;
		while (galutinis[0] == 'N')
		{
			kiekis++;
			PD >> galutinis;
		}
		while (!PD.eof())
		{
			PD >> vardas;
			if (vardas.length() > ilgvardas - 2) ilgvardas = vardas.length() + 2;
			PD >> pavarde;
			if (pavarde.length() > ilgpavarde - 2) ilgpavarde = pavarde.length() + 2;
			suma = 0;
			for (int i = 0; i < kiekis; i++)
			{
				PD >> x;
				nd.push_back(x);
				suma = suma + x;
			}
			PD >> egzas;
			if (kiekis != 0) galvid = 0.4 * suma / kiekis + x * 0.6;
			else galvid = x * 0.6;
			Stud b(vardas, pavarde, nd, egzas, galvid);
			nd.clear();
			stude.push_back(b);
		}
		PD.close();
	}
	else
	{
		cout << "Failo aplankale nera, isitikinkite, kad jis yra programos aplankale..." << endl;
		DuomenuNuskaitymas(stude, ilgvardas, ilgpavarde);
		return;
	}
};
void DuomenuKurimas(vector<Stud> & stude, int y);

void DuomenuIvedimas(vector<Stud> & stude, int& ilgvardas, int& ilgpavarde);

bool PagalGal(const Stud & a, const Stud & b);

template<typename T1, typename T2, typename T3>
void DuomenuSkirstymas(T1 & stude, T2 & feil, T3 & kiet)
{
	std::sort(stude.begin(), stude.end(), PagalGal);
	int x = stude.size();
	for (int i = 0; i < x; i++)
	{
		if (stude.at(i).GetGalutinis() < 5) feil.push_back(stude.at(i));
		else kiet.push_back(stude.at(i));
	}
};

template<typename T>
void DuomenuIsvedimas(T stude, int ilgvardas, int ilgpavarde, string k)
{
	auto it = stude.begin();
	std::ofstream RZ(k);
	int x = stude.size();
	for (int i = 0; i < x; i++)
	{
		RZ << std::left << std::setw(ilgvardas) << it->GetName() << std::setw(ilgpavarde) << it->GetSurname() << std::setprecision(3) << it->GetGalutinis() << endl;
		it++;
	}
	RZ.close();
};
# endif //FUN_H