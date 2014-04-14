/*
 * new_delete.cpp
 *
 *  Created on: 2014/04/15
 *      Author: nash
 */
#include <iostream>
#include <new>
using namespace std;

void test_new() {
	int* p = new(nothrow) int;

	if (p != NULL) {
		*p = 0;
		delete p;
	}
}




