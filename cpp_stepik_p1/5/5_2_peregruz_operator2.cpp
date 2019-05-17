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


	Rational& operator += (Rational const& r);
	Rational& operator -= (Rational const& r);
	Rational& operator *= (Rational const& r);
	Rational& operator /= (Rational const& r);


	void neg() {
		numerator_ = -numerator_;
	}

	void inv() {}

	double to_double() const {
		return numerator_ / (double)denominator_;
	}

	friend bool operator==(Rational const& r1, Rational const& r2) {
		return (r1.numerator_ * r2.denominator_ == r2.numerator_ * r1.denominator_);
	}
	friend bool operator<(Rational const& r1, Rational const& r2) {
		return (r1.numerator_ * r2.denominator_ < r2.numerator_ * r1.denominator_);
	}

	
private:
	int numerator_;
	int denominator_;
};


Rational& Rational::operator +=(Rational const& r) {
	this->add(r);
	return *this;
}
Rational& Rational::operator-=(Rational const& r) {
	this->sub(r);
	return *this;
}
Rational& Rational::operator*=(Rational const& r) {
	this->mul(r);
	return *this;
}
Rational& Rational::operator/=(Rational const& r) {
	this->div(r);
	return *this;
}


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


//bool Rational::operator==(Rational const& r1, Rational const& r2) {
//	return (r1->numerator_ * r2.denominator_ == r2.numerator_ * r1.denominator_);
//}
//bool operator<(Rational const& rational) {
//	return ((double(numerator_) / double(denominator_)) < (double(rational.numerator_) / double(rational.denominator_)));
//}

bool operator!=(Rational const& r1, Rational const& r2) {
	return !(r1 == r2);
}
bool operator>(Rational const& r1, Rational const& r2) {
	return !(r1 == r2 || r1 < r2);
}
bool operator>=(Rational const& r1, Rational const& r2) {
	return !(r1 < r2);
}
bool operator<=(Rational const& r1, Rational const& r2) {
	return !(r1 > r2);
}


//Rational operator -(Rational r) {
//	r.neg();
//	return r;
//}
//Rational operator +(Rational r) {
//	return r;
//}

int main() {
	Rational r1(12, 4); // 3
	Rational r2(8, 4); // 2 
	Rational r3(1); // 1

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

	std::cout << r1.to_double() << " " << r2.to_double() << " " << r3.to_double() << " " << std::endl;

	std::cout << "eq: " << (r2 == 2) << std::endl;
	std::cout << "not eq: " << (r2 != 2) << std::endl;
}