
#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>

#include <vector>
#include "DynamicArray.h"
using namespace std;

std::string isEqual(double a, double b){
	if(a == b){
		return "True";
	}else{
		return "False";
	}
}

int main()
{
	std::cout << "Integer Section" << std::endl;
	/// Q1.3.a
	int size = 5;
	int* test = new int[size];
	for(int i = 0; i<size;i++){
		test[i] = std::rand() % 101;
	}
	// Q1.3.b
	DynamicArray dynArray(size);
	for(int i = 0; i<size;i++){
		dynArray.addElement(test[i]);
	}

	std::cout << "toString" << std::endl;

	dynArray.toString();

	std::cout << "Testing:" <<std::endl;

	for(int i = 0 ; i<size;i++){
		int arrP = size - 1;
		cout << "Position " << (i+1) <<" Element should be: " << test[i] << " | TEST STATUS: " << isEqual(test[i], dynArray[size - i - 1]) << std::endl;
	}

	// Q1.3.c
	std::cout << "Double Section" << std::endl;

	DynamicArray doubleArray(size);
	double* doubleTest = new double[size];
	for(int i = 0; i<size;i++){
		// Generating a random number and dividing it by a constant
		doubleTest[i] = (float) rand()/RAND_MAX;
	}
	for(int i = 0; i<size;i++){
		doubleArray.addElement(doubleTest[i]);
	}
	std::cout << "toString" << std::endl;

	doubleArray.toString();
//
	std::cout << "Testing:" <<std::endl;
	for(int i = 0 ; i<size;i++){
		int arrP = size - 1;
		cout << "Position " << (i+1) <<" Element should be: " << doubleTest[i] << " | TEST STATUS: " << isEqual(doubleTest[i], doubleArray[size - i - 1]) << std::endl;
	}
	std::cout << "END";
}


