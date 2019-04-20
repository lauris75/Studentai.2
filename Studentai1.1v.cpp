#include "FUN.h"


int main()
{
	int s = sprendimas();
	if (s == 1)
	{
		int ilgvardas = 8, ilgpavarde = 9;
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
			RZ << "Generuojant " << y << " studentu sarasa prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundžių" << endl;
			stude.clear();
		}
		RZ.close();
	}
	if (s == 3)
	{
		std::ofstream RZ("Laikai.konteineriai.txt");
		int ilgvardas = 8, ilgpavarde = 9;
		vector<Stud>studvec;
		vector<Stud>feilai;
		vector<Stud>kietiakai;
		std::list<Stud>studlist;
		std::list<Stud>feillist;
		std::list<Stud>kietlist;
		std::deque<Stud>studdeq;
		std::deque<Stud>feildeq;
		std::deque<Stud>kietdeq;
		for (int i = 0; i < 1; i++)
		{
			if (i == 0)RZ << "Dabar prastai islaikiusius idesime i nauja konteineri, o is seno istrynsime, tokiu budu darant" << endl << "Konteineriams prireike tiek laiko:" << endl;
			else RZ << "Dabar studentus skirstysime i du naujus konteinerius, tokiu budu, musu naudojamiems konteineriams prireike tiek laiko:" << endl;
			/*auto begin = std::chrono::high_resolution_clock::now();
			DuomenuNuskaitymas(studvec, ilgvardas, ilgpavarde);
			//if (i == 0)DuomenuSkirstymas(studvec, feilai);
			DuomenuSkirstymas2(studvec, feilai, kietiakai);
			//if (i == 0)DuomenuIsvedimas(studvec, ilgvardas, ilgpavarde, "VectorKietiakai");
			DuomenuIsvedimas(kietiakai, ilgvardas, ilgpavarde, "VectorKietiakai");
			DuomenuIsvedimas(feilai, ilgvardas, ilgpavarde, "VectorFeilai");
			auto end = std::chrono::high_resolution_clock::now();
			RZ << "Vektoriui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
			studvec.clear();
			feilai.clear();
			kietiakai.clear();*/
			auto begin = std::chrono::high_resolution_clock::now();
			DuomenuNuskaitymas(studlist, ilgvardas, ilgpavarde);
			auto end = std::chrono::high_resolution_clock::now();
			RZ << "Listui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
			begin = std::chrono::high_resolution_clock::now();
			if (i == 0)DuomenuSkirstymasList(studlist, feillist);
			else DuomenuSkirstymasList2(studlist, feillist, kietlist);
			if (i == 0)DuomenuIsvedimas(studlist, ilgvardas, ilgpavarde, "ListKietiakai");
			else DuomenuIsvedimas(kietlist, ilgvardas, ilgpavarde, "ListKietiakai");
			end = std::chrono::high_resolution_clock::now();
			RZ << "Listui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
			begin = std::chrono::high_resolution_clock::now();
			DuomenuIsvedimas(feillist, ilgvardas, ilgpavarde, "ListFeilai");
			end = std::chrono::high_resolution_clock::now();
			RZ << "Listui prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
			studlist.clear();
			feillist.clear();
			kietlist.clear();
			/*begin = std::chrono::high_resolution_clock::now();
			DuomenuNuskaitymas(studdeq, ilgvardas, ilgpavarde);
			if (i == 0)DuomenuSkirstymas(studdeq, feildeq);
			else DuomenuSkirstymas2(studdeq, feildeq, kietdeq);
			if (i == 0)DuomenuIsvedimas(studdeq, ilgvardas, ilgpavarde, "DequeKietiakai");
			else DuomenuIsvedimas(kietdeq, ilgvardas, ilgpavarde, "DequeKietiakai");
			DuomenuIsvedimas(feildeq, ilgvardas, ilgpavarde, "DequeFeilai");
			end = std::chrono::high_resolution_clock::now();
			RZ << "Deque prireike " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << " nanosekundziu" << endl;
			studdeq.clear();
			feildeq.clear();
			kietdeq.clear();*/
		}
		RZ.close();
	}
	return 0;
}