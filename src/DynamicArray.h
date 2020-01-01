/*
 * DynamicArray.h
 *
 *  Created on: 26 Dec 2019
 *      Author: Mahdi PC
 */
#include <cstdlib>
#include <iostream>
#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

class DynamicArray {
private:
	int size;
	int currentSize;
	int currentElementSize;
	double *doubleArray;
	int* intArray;
	bool isDouble;
	bool isFirstElementEmpty;
public:
	DynamicArray(int size);
	DynamicArray(DynamicArray &p);
	virtual ~DynamicArray();
	void addElement(double newNumber);
	int getSize();
	double* getArray();
	bool getIsFirstElementEmpty();
	bool getIsDouble();
	int getTotalElements();
	void toString();
	double operator[] (unsigned i);

};

#endif /* DYNAMICARRAY_H_ */
