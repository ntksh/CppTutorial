/*
 * integer.h
 *
 *  Created on: 2014/04/15
 *      Author: nash
 */

#ifndef INTEGER_H_
#define INTEGER_H_

class Integer {
public:
	int m_value;

	Integer();
	Integer(int size);
};

class IntArray {
public:
	// constructor
	IntArray();
	IntArray(int num);
	// destructor
	~IntArray();
	// copy constructor
	IntArray(const IntArray& other);

public:
	// method
	int Get(int i);
	void Set(int i, int value);
	int Size() const;
	// operator overloading
	void operator=(const IntArray& other);


private:
	void CheckIndex(int i);

private:
	int* m_array;
	int m_size;
};




#endif /* INTEGER_H_ */
