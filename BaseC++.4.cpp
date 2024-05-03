#include <iostream>

class Calculator
{
private:
	double num1 = 0;
	double num2 = 0;
public:
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();

	bool set_num1(double num1);
	bool set_num2(double num2);

};

double Calculator::add() { return num1 + num2; }
double Calculator::multiply() { return num1 * num2; }
double Calculator::subtract_1_2() { return num1 - num2; }
double Calculator::subtract_2_1() { return num2 - num1; }
double Calculator::divide_1_2() { return num1 / num2; }
double Calculator::divide_2_1() { return num2 / num1; }

bool Calculator::set_num1(double num1) { if (num1 == 0) { std::cout << "Incorrect input\n";  return false; } else { this->num1 = num1; return true; } }
bool Calculator::set_num2(double num2) { if (num2 == 0) { std::cout << "Incorrect input\n";  return false; } else { this->num2 = num2; return true; } }

int main() 
{
	while (true) 
	{
		Calculator calc;

		int tempNumber = 0;

		std::cout << "Enter a num1: ";
		std::cin >> tempNumber;
		if (!calc.set_num1(tempNumber)) 
		{
			continue;
		}

		std::cout << "Enter a num2: ";
		std::cin >> tempNumber;
		if (!calc.set_num2(tempNumber)) 
		{
			continue;
		}

		std::cout << "num1 + num2 = " << calc.add() << "\n";
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
		std::cout << "num1 * num2 = " << calc.multiply() << "\n";
		std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
		std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n";
	}
}