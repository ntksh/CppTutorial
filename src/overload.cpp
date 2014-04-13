/*
 * overload.cpp
 *
 *  Created on: 2014/04/14
 *      Author: nash
 */
#include "overload.h"

int Abs(int a) {
	if (a < 0) {
		return -a;
	} else {
		return a;
	}
}

double Abs(double a) {
	if (a < 0) {
		return -a;
	} else {
		return a;
	}
}


