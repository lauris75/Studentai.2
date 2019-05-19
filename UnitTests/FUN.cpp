#include "FUN.h"

int sprendimas()
{
	cout << endl << "Pasirinkite, ka noresite daryti:" << endl << "Jei norite patikrinti programos veikima suvedant duomenis arba nuskaitant is jusu failo patys spauskite 1" << endl;
	cout << "Jei norite patikrinti vektoriaus veikimo greiti, spauskite 2" << endl;
	cout << "O jei norite lyginti skirtingu konteineriu sparta nuskaitant is failo," << endl << "rusiuojant (dviem skirtingais budais) ir isvedant, spauskite 3 ";
	int x;
	for (int i = 0; i < 1; i++)
	{
		cin >> x;
		if (cin.fail() || ((x != 1) && (x != 2) && (x != 3)))
		{
			cin.clear();
			cin.ignore();
			cout << "Kazka blogai ivedei, bandyk vel... " << endl;
			i--;
		}
	}
	cout << endl;
	return x;
}

unsigned int ilgiausias(string lyg, unsigned int ilgis)
{
	if (lyg.length() + 2 > ilgis) return lyg.length() + 2;
	return ilgis;
}
double NDvidurkis(vector<int> nd)
{
	double suma = 0;
	double x = nd.size();
	for (unsigned int i = 0; i < x; i++)
	{
		suma = suma + nd.at(i);
	}
	if (x != 0) return suma / x;
	else return 0;
}

double Galutinis(double a, int b)
{
	return a * 0.4 + b * 0.6;
}

void DuomenuIvedimas(vector<Stud>& stude, unsigned int& ilgvardas, unsigned int& ilgpavarde)
{
	cout << "Duomenis ivesite patys ar juos nuskaityti? Nuskaitymui spauskite \"1\", kitu atveju spauskite \"2\"" << endl;
	int x;
	for (int i = 0; i < 1; i++)
	{
		cin >> x;
		if (cin.fail() || ((x != 1) && (x != 2)))
		{
			cin.clear();
			cin.ignore();
			cout << "Kazka blogai ivedei, bandyk vel... " << endl;
			i--;
		}
	}
	if (x == 1)DuomenuNuskaitymas(stude, ilgvardas, ilgpavarde);
	else
	{
		cout << "Iveskite, kiek bus studentu: ";
		int q;
		for (int i = 0; i < 1; i++)
		{
			cin >> q;
			if (cin.fail() || q < 1)
			{
				cin.clear();
				cin.ignore();
				cout << "Kazka blogai ivedei, bandyk vel... " << endl;
				i--;
			}
		}
		string vardas, pavarde;
		vector<int> nd;
		int egzas;
		double galvid;
		for (int i = 0; i < q; i++)
		{
			cout << "Iveskite studento varda - ";
			cin >> vardas;
			if (vardas.length() > ilgvardas) ilgvardas = vardas.length() + 2;
			cout << "Iveskite studento pavarde - ";
			cin >> pavarde;
			if (pavarde.length() > ilgpavarde) ilgpavarde = pavarde.length() + 2;
			cout << "Iveskite, kiek bus namu darbu... Jei nezinote kiek bus, spauskite \"-1\", jei norite generuoti, spauskite \"-2\"" << endl;
			for (int y = 0; y < 1; y++)
			{
				cin >> x;
				if (cin.fail() || x < -2)
				{
					cin.clear();
					cin.ignore();
					cout << "Kazka blogai ivedei, bandyk vel... " << endl;
					y--;
				}
			}
			if (x == -2)
			{
				for (int i = 0; i < 100; i++)
				{
					x = rand() % 10 + 1;
					nd.push_back(x);
				}
			}
			if (x == -1)
			{
				while (x != -2)
				{
					cout << "Jei baigete suvedineti pazymius, rasykite \"-2\", kitu atveju," << endl << "Iveskite namu darbu pazymi - ";
					for (int y = 0; y < 1; y++)
					{
						cin >> x;
						if (cin.fail() || (x != -2 && (x < 1 || x>10)))
						{
							cin.clear();
							cin.ignore();
							cout << "Kazka blogai ivedei, bandyk vel... " << endl;
							y--;
						}
					}
					if (x != -2)nd.push_back(x);
				}
			}
			else
			{
				int z;
				for (int y = 0; y < x; y++)
				{
					cout << "Iveskite namu darba nr. " << y + 1 << " - ";
					cin >> z;
					if (cin.fail() || (z < 1 || z > 10))
					{
						cin.clear();
						cin.ignore();
						cout << "Kazka blogai ivedei, bandyk vel... " << endl;
						y--;
					}
					nd.push_back(z);
				}
			}
			cout << "Egzamino pazymi generuoti (spauskite \"-1\") ar patys ivesite (iveskite ivertinima tada)? - ";
			for (int y = 0; y < 1; y++)
			{
				cin >> x;
				if (cin.fail() || (x != -1 && (x < 1 || x > 10)))
				{
					cin.clear();
					cin.ignore();
					cout << "Kazka blogai ivedei, bandyk vel... " << endl;
					y--;
				}
				if (x == -1) egzas = rand() % 10 + 1;
				else egzas = x;
			}
			if (nd.size() == 0) galvid = Galutinis(0, egzas);
			else galvid = Galutinis(NDvidurkis(nd), egzas);
			Stud a(vardas, pavarde, nd, egzas, galvid);
			stude.push_back(a);
		}
	}
}
void DuomenuKurimas(vector<Stud> & stude, int y)
{
	string vardas, pavarde;
	int ran, suma, egzas;
	vector<int> nd;
	double galvid;
	for (int i = 0; i < y; i++)
	{
		vardas = "Vardenis" + std::to_string(i + 1);
		pavarde = "Pavardenis" + std::to_string(i + 1);
		for (int x = 0; x < 100; x++)
		{
			ran = rand() % 10 + 1;
			nd.push_back(ran);
		}
		egzas = rand() % 10 + 1;
		galvid = Galutinis(NDvidurkis(nd), egzas);
		Stud a(vardas, pavarde, nd, egzas, galvid);
		stude.push_back(a);
	}
}
bool PagalGal(const Stud & a, const Stud & b)
{
	return a.GetGalutinis() < b.GetGalutinis();
}