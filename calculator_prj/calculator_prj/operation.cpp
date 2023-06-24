#include "operation.h"


void operation::sum(int val1, int val2, int result) {
	result = val1 + val2;
}

void operation::sub(int val1, int val2, int result) {
	result = val1 - val2;
}

void operation::div(int val1, int val2, float result) {
	result = val1 / val2;;
}

void operation::multiply(int val1, int val2, int result) {
	result = val1 * val2;;
}

void operation::proportion(int val1, int val2, float result) {
	result = val1 % val2;;
}