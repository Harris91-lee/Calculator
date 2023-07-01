#pragma once
#ifndef Operation_H
#define Operation_H

class operation {
public:
	static void sum(int val1, int val2, int *result);
	static void sub(int val1, int val2, int*result);
	static void multiply(int val1, int val2, int* result);
	static void div(int val1, int val2, int* result);
	static void div(float val1, float val2, float* result);
	static void proportion(int val1, int val2, int* result);
	//static void proportion(float val1, float val2, float result);

private:
};

#endif