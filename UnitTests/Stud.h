#include <iostream>
#include <string>
#include <vector>

class Base {
	protected:
		std::string vardas;
		std::string pavarde;
	public:
		virtual void SetName(std::string) = 0;
		virtual void SetSurname(std::string) = 0;
		std::string GetName();
		std::string GetSurname();
		Base();
		Base(std::string, std::string);
};

class Stud : public Base{
	public:
		Stud();
		Stud(std::string, std::string, std::vector<int>, int, double);
		Stud(std::string, std::string, double);
		void SetName(std::string);
		void SetSurname(std::string);
		~Stud();
		std::string GetName() const;
		std::string GetSurname() const;
		double GetEgzas() const;
		double GetGalutinis() const;
		Stud(const Stud&);
	private:
		std::vector<int> nd;
		int egzas;
		double galvid;
};