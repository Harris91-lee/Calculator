#include <iostream>
#include "operation.h"

enum OPERATOR { PLUS = 1, MINUS, MULTIPLY, DIVISION, PROPOTION};

int main(int argc, char* argv[])
{
	int oper,val1,val2;
	int result=0;

	do {
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Calculator" << std::endl;
		std::cout << "  0.exit\n 1.plus\n 2.minus\n 3.multiply\n 4.division\n 5.proportion" << std::endl;

		std::cout << "choose operation(0 ~ 5) : ";
		std::cin >> oper;
		if (oper == 0)
			break;

		std::cout << "value 1 : ";
		std::cin >> val1;
		std::cout << "value 2 : ";
		std::cin >> val2;

		switch (oper) {
		case PLUS :
			operation::sum(val1, val2, &result);
			break;
		case MINUS:
			operation::sub(val1, val2, &result);
			break;
		case MULTIPLY:
			operation::multiply(val1, val2, &result);
			break;
		case DIVISION:
			operation::div(val1, val2, &result); 
			break;
		case PROPOTION:
			operation::proportion(val1, val2, &result);
			break;
		}

		std::cout << "result : " << result << std::endl;
		std::cout << "-----------------------------------" << std::endl;
	} while (true);

	return 0;
}