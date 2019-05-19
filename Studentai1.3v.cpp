#include "FUN.h"

int main()
{
	int s = sprendimas();
	if (s == 1)
	{
		unsigned int ilgvardas = 8, ilgpavarde = 9;
		vector<Stud>stude;
		DuomenuIvedimas(stude, ilgvardas, ilgpavarde);
		DuomenuIsvedimas(stude, ilgvardas, ilgpavarde, "Studentai");
	}
	if (s == 2)
	{
		vector<Stud>stude;
		int y = 1;
		std::ofstream RZ("Laikai.vec.txt");
		for (int i = 0; i < 6; i++)
		{
			auto begin = std::chrono::high_resolution_clock::now();
			y = y * 10;
			DuomenuKurimas(stude, y);
			DuomenuIsvedimas(stude, 12 + i, 13 + i, "Studentai" + std::to_string(y));
			auto end = std::chrono::high_resolution_clock::now();
			RZ << "Generuojant " << y << " studentu sarasa prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundşiø" << endl;
			stude.clear();
		}
		RZ.close();
	}
	if (s == 3)
	{
		std::ofstream RZ("Laikai.konteineriai.txt");
		unsigned int ilgvardas = 8, ilgpavarde = 9;
		vector<Stud>studvec;
		vector<Stud>feilai;
		vector<Stud>kietiakai;
		RZ << "Dabar studentus skirstysime i du naujus konteinerius, tokiu budu skirstant, musu naudojamiems konteineriams prireike tiek laiko:" << endl;
		auto begin = std::chrono::high_resolution_clock::now();
		DuomenuNuskaitymas(studvec, ilgvardas, ilgpavarde);
		auto end = std::chrono::high_resolution_clock::now();
		RZ << "Nuskaitymui i vectoriu prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		begin = std::chrono::high_resolution_clock::now();
		DuomenuSkirstymas(studvec, feilai, kietiakai);
		end = std::chrono::high_resolution_clock::now();
		RZ << "Duomenu esanciu vektoriuje skirstymui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		begin = std::chrono::high_resolution_clock::now();
		DuomenuIsvedimas(kietiakai, ilgvardas, ilgpavarde, "VectorKietiakai");
		DuomenuIsvedimas(feilai, ilgvardas, ilgpavarde, "VectorFeilai");
		end = std::chrono::high_resolution_clock::now();
		RZ << "Duomenims, esantiems vektoriuje, isvesti prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
		studvec.clear();
		feilai.clear();
		kietiakai.clear();
		RZ.close();
	}
	return 0;
}