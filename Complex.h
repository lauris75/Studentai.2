class Complex
{
private:
	double re, im; // realioji ir menamoji dalis
public:
	Complex(double r, double i) :re{ r }, im{ i } {}
	Complex(double r) :re{ r }, im{ 0 } {}
	double GetReal() const { return re; }
	double GetImag() const { return im; }
	Complex& operator+=(Complex c) { re += c.re, im += c.im; return *this; }
	Complex& operator-=(Complex c) { re -= c.re, im -= c.im; return *this; }
	Complex& operator*=(Complex c); // Realizuota kitur
	Complex operator+(Complex a, Complex b) { return a += b; }
	Complex operator-(Complex a, Complex b) { return a -= b; }
	return { -a.GetReal(), -a.GetImag() }
	Complex operator*(Complex a, Complex b) { return a *= b; }
	bool operator==(Complex a, Complex b) { return a.real() == b.real() && a.imag() == b.imag() }
	bool operator!=(Complex a, Complex b) { return !(a == b); }
	friend std::ostream& operator<<(std::ostream & out, const Complex & a)
	{
		out << a.re << (a.im < 0 ? " - " : " + ") << abs(a.im) << "i\n";
		return out;
	}
	friend std::istream & operator>>(std::istream & in, Complex & a)
	{
		in >> a.re >> a.im;
		return in;
	}
}