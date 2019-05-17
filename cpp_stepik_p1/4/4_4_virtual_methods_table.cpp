#include <iostream>

bool check_equals(Expression const *left, Expression const *right)
{
    // put your code here
}






struct Expression
{
    virtual ~Expression() {}
	
	virtual double evaluate() const = 0;
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}
	
	virtual double evaluate() const {
		return value;
	}

private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
	
	~BinaryOperation()
	{
		delete left;
		delete right;
	}
	
	virtual double evaluate() const {
		if (op == '+')
			return left->evaluate() + right->evaluate();
		else if (op == '-')
			return left->evaluate() - right->evaluate();
		else if (op == '*')
			return left->evaluate() * right->evaluate();
		else if (op == '/')
			return left->evaluate() / right->evaluate();
		else
			std::cout << "Incorrect op!" << std::endl;
	}

private:
    Expression const * left;
    Expression const * right;
    char op;
};