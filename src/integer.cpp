/*
 * integer.cpp
 *
 *  Created on: 2014/04/15
 *      Author: nash
 */

#include "integer.h"
#include <cstdlib>
#include <algorithm>
using namespace std;


// constructor
Integer::Integer() {
	m_value = 0;
}

Integer::Integer(int num) {
	m_value = num;
}

IntArray::IntArray(int size) {
	m_array = new int[size];
	m_size = size;
}

// destructor
IntArray::~IntArray() {
	delete [] m_array;
}

IntArray::IntArray(const IntArray& other) {
	m_array = new int[other.m_size];
	m_size = other.m_size;

	copy(other.m_array, other.m_array + m_size, m_array);
}

int IntArray::Get(int i) {
	CheckIndex(i);
	return m_array[i];
};

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

int IntArray::Size() {
	return m_size;
}

void IntArray::CheckIndex(int i) {
	if (i < 0 && m_size <= i) {
		exit(EXIT_FAILURE);
	}
}
