#include "operation.h"


void operation::sum(int val1, int val2, static int result) {
	result = val1 + val2;
}

void operation::sub(int val1, int val2, static int result) {
	result = val1 - val2;
}

void operation::div(int val1, int val2, static float result) {
	result = val1 / val2;;
}

void operation::multiply(int val1, int val2, static int result) {
	result = val1 * val2;;
}

void operation::proportion(int val1, int val2, static float result) {
	result = val1 % val2;;
}