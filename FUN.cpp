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

void DuomenuIvedimas(vector<Stud> & stude, int& ilgvardas, int& ilgpavarde)
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
					x = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
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
				if (x == -1) egzas = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
				else egzas = x;
			}
			int o = nd.size(), suma = 0;
			for (int y = 0; y < o; y++)
			{
				suma = suma + nd.at(y);
			}
			if (o == 0)galvid = egzas * 0.6;
			else galvid = 0.4 * suma / o + egzas * 0.6;
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
			ran = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
			nd.push_back(ran);
		}
		egzas = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
		suma = 0;
		for (int x = 0; x < 100; x++)
		{
			suma = suma + nd.at(x);
		}
		galvid = 0.4 * suma / 100 + egzas * 0.6;
		Stud a(vardas, pavarde, nd, egzas, galvid);
		stude.push_back(a);
	}
}
bool PagalGal(const Stud & a, const Stud & b)
{
	return a.GetGalutinis() < b.GetGalutinis();
}
bool compare(const Stud & a, const Stud & b) {
	return a.GetName() < b.GetName();
}

void DuomenuSkirstymasList(list<Stud> & stude, list<Stud> & feilai)
{
	stude.sort(compare);
	stude.sort(PagalGal);
	auto it = stude.begin();
	int x = stude.size();
	for (int i = 0; i < x; i++)
	{
		if (it->GetGalutinis() < 5)
		{
			Stud a(it->GetName(), it->GetSurname(), it->GetGalutinis());
			feilai.push_back(a);
			stude.erase(it);
			it = stude.begin();
			advance(it, i);
			i--;
			x--;
		}
		else it++;
	}
}
void DuomenuSkirstymasList2(list<Stud> & stude, list<Stud> & feilai, list<Stud> & kiet)
{
	stude.sort(compare);
	stude.sort(PagalGal);
	auto it = stude.begin();
	int x = stude.size();
	for (int i = 0; i < x; i++)
	{
		if (it->GetGalutinis() < 5)
		{
			Stud a(it->GetName(), it->GetSurname(), it->GetGalutinis());
			feilai.push_back(a);
		}
		else
		{
			Stud a(it->GetName(), it->GetSurname(), it->GetGalutinis());
			kiet.push_back(a);
		}
		it++;
	}
}