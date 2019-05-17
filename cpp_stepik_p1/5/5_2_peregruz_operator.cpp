#include <iostream>

struct Rational {
	Rational(int numerator = 0, int denominator = 1) : numerator_(numerator), denominator_(denominator) {};

	void add(Rational rational) {
		numerator_ = numerator_ * rational.denominator_ + rational.numerator_ * denominator_;
		denominator_ *= rational.denominator_;
	}

	void sub(Rational rational) {
		numerator_ = numerator_ * rational.denominator_ - rational.numerator_ * denominator_;
		denominator_ *= rational.denominator_;
	}

	void mul(Rational rational) {
		numerator_ *= rational.numerator_;
		denominator_ *= rational.denominator_;
	}

	void div(Rational rational) {
		numerator_ *= rational.denominator_;
		denominator_ *= rational.numerator_;
	}

	void neg() {
		numerator_ = -numerator_;
	}

	void inv() {}

	double to_double() const {
		return numerator_ / (double)denominator_;
	}
	
	Rational & operator+=(Rational const& r) {
		this->add(r);
		return *this;
	}
	Rational& operator-=(Rational const& r) {
		this->sub(r);
		return *this;
	}
	Rational& operator*=(Rational const& r) {
		this->mul(r);
		return *this;
	}
	Rational& operator/=(Rational const& r) {
		this->div(r);
		return *this;
	}
	Rational operator -() const {
		Rational tmp(-numerator_, denominator_);
		return tmp;
	}

	Rational operator +() const {
		Rational tmp(numerator_, denominator_);
		return tmp;
	}

private:
	int numerator_;
	int denominator_;
};


Rational operator+(Rational r1, Rational const& r2) {
	return r1 += r2;
}
Rational operator-(Rational r1, Rational const& r2) {
	return r1 -= r2;
}
Rational operator*(Rational r1, Rational const& r2) {
	return r1 *= r2;
}
Rational operator/(Rational r1, Rational const& r2) {
	return r1 /= r2;
}

/*
Rational operator-(Rational rat)
{
   rat.neg();
   return rat;
}

Rational operator+(Rational const & rat)
{
   return rat;
}
*/


int main() {
	Rational r1(1, 2);
	Rational r2(1, 3);
	Rational r3(5);

	r1.add(r2);
	std::cout << r1.to_double() << std::endl;
	r1.sub(r2);
	std::cout << r1.to_double() << std::endl;
	r1.neg();
	std::cout << r1.to_double() << std::endl;
	r3.mul(r1);
	std::cout << r3.to_double() << std::endl;
	r3.div(r2);
	std::cout << r3.to_double() << std::endl;
}