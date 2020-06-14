#include<iostream>
using namespace std;

class Fraction
{
	int integer;
	int numerator;
	int denominator;
public:
	const int get_integer() const { return integer; }
	const int get_numerator() const { return numerator; }
	const int get_denominator() const { return denominator; }

	void set_integer(int integer) { this->integer = integer; }
	void set_numerator(int numerator) { this->numerator = numerator; }
	void set_denominator(int denominator) {
		if (denominator == 0)  denominator = 1;
		this->denominator = denominator;
	}
	Fraction()//default constructor
	{
		this->integer = 0;
		this->numerator = 0;
		this->denominator = 1;
	}
	Fraction(int integer)
	{
		this->integer = integer;
		this->numerator = 0;
		this->denominator = 1;
	}
	Fraction(int numerator, int denominator)
	{
		this->integer = 0;
		this->numerator = numerator;
		this->set_denominator(denominator);
	}
	Fraction(int integer, int numerator, int denominator)
	{
		this->integer = integer;
		this->numerator = numerator;
		this->set_denominator(denominator);
	}
	~Fraction()
	{

	}

	void print() const
	{
		if (integer) cout << integer;
		if (numerator)
		{
			//if (integer) cout << "(";
			if (integer) cout << "+";
			cout << numerator << "/" << denominator;
			//if (integer) cout << ")";
		}
		else if (integer == 0)
		{
			cout << 0;
		}
		cout << endl;
	}
};

void main()
{
	Fraction A = 5;
	A.print();
	Fraction B(5, 1, 5);
	B.print();
	Fraction C(4, 8);
	C.print();
}