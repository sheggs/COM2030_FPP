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
public:
	DynamicArray();
	virtual ~DynamicArray();
	void addMember(int newNumber);
	std::string toString();

};

#endif /* DYNAMICARRAY_H_ */
