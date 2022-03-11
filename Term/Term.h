#pragma once
#include <iostream>

using namespace std;

class Term {
public:
	Term (double coefficient = 0.0, unsigned int exponent = 0,
		char variable = 'X');
	Term (const Term &rcTerm);

	unsigned int degree () const;
	double evaluate (double variableValue) const;
	bool isPositive () const;
	bool operator== (const Term &rcTerm) const;
	Term operator+ (const Term &rcTerm) const;
	Term operator- (const Term &rcTerm) const;

	friend istream &operator>> (istream &rcInStream, Term &rcTerm);
	friend ostream &operator<< (ostream &rcOutStream, const Term &rcTerm);

private:
	double mCoefficient;
	unsigned int mExponent;
	char mVariable;
};