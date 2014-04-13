/*
 * Hello.cpp
 *
 *  Created on: 2014/04/13
 *      Author: nash
 */

#include "overload.h"
#include "booleanfunc.h"

#include <iostream>
#include <assert.h>

using namespace std;

int f(int x, int y);
void size_of_type();
void show_char_code();
void show_string();

int main() {
	cout << "Hello, world!" << endl;

	int a;
	a = 0;
	cout << "a = " << a << endl;

	cout << "f(1, 2) = " << f(1, 2) << endl;

//	cout << "Set input > " << flush;
//	cin >> a;
//
//	cout << "input is " << a << endl;

	switch (a) {
	case 0:
		break;
	case 1:
		break;
	default:
		break;
	}

	size_of_type();
	cout << "sizeof a : " << sizeof a << endl;

	show_char_code();
	show_string();
}

int f(int x, int y) {
	return 2 * x + y;
}

void size_of_type() {
	cout << "char         : " << sizeof (char) << endl;
	cout << "short        : " << sizeof (short) << endl;
	cout << "int          : " << sizeof (int) << endl;
	cout << "long         : " << sizeof (long) << endl;

	cout << "float        : " << sizeof (float) << endl;
	cout << "double       : " << sizeof (double) << endl;
	cout << "long double  : " << sizeof (long double) << endl;

	cout << "2461lu       : " << sizeof 2461lu << endl;
	cout << "92.01l       : " << sizeof 92.01l << endl;
	cout << "92.01f       : " << sizeof 92.01f << endl;

	assert(Abs(10) == 10);
	assert(Abs(-10) == 10);
	assert(Abs(10.0) == 10.0);
	assert(Abs(-10.0) == 10.0);

	assert(isPositive(10) == true);
	assert(isPositive(-10) == false);
	assert(isNegative(10) == false);
	assert(isNegative(-10) == true);



}

void show_char_code() {
	cout << "x : " << (int)(unsigned char)'x' << endl;
}

void show_string() {
	char hello[] = "Hello!";

	cout << "[" << hello << "]を文字コードに変えると" << endl;
	for (int i = 0; hello[i] != '\0'; ++i) {
		cout << (int)(unsigned char)hello[i] << ", ";
	}
}
