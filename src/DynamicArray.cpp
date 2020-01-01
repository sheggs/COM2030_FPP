/*
 * DynamicArray.cpp
 *
 *  Created on: 26 Dec 2019
 *      Author: Mahdi PC
 */

#include "DynamicArray.h"
#include <typeinfo>

DynamicArray::DynamicArray(int size) {
	// TODO Auto-generated constructor stub
	this->size = size;
	this->doubleArray = nullptr;
	this->intArray = nullptr;
	this->currentElementSize = 0;
	this->isFirstElementEmpty = false;
	this->isDouble = false;
}
DynamicArray::DynamicArray(DynamicArray &p){
	this->size = p.getSize();
	this->doubleArray = p.getArray();
	this->isFirstElementEmpty = p.getIsFirstElementEmpty();
	this->currentElementSize = p.getTotalElements();
	this->isDouble = p.getIsDouble();
}

DynamicArray::~DynamicArray() {
	// DELETE THE ARRAY

}

bool DynamicArray::getIsDouble(){
	if(this->doubleArray == nullptr){
		return false;
	}
	return true;
}
bool DynamicArray::getIsFirstElementEmpty(){return isFirstElementEmpty;}
void DynamicArray::toString(){
	for(int i = 0; i<this->size;i++){
		if(this->doubleArray == nullptr){
			printf("%i \n",this->intArray[i]);
		}
		else{
			printf("%.2f \n",this->doubleArray[i]);
		}
	}


}

void DynamicArray::addElement(double x){

	// Checking if parameter is an integer or floating point
	//std::cout << "ADD" << x;
	int elementInteger = x;
	double elementDouble = x;

	bool isParameterDouble = false;
	if((x - (int)x) > 0.0){
		isParameterDouble = true;
	}
	// Forcing the data type to be string or double depending on the first element.
	if((this->doubleArray == nullptr) && (this->intArray == nullptr)){
		// Checking if it is a double

		if(isParameterDouble){
			//std::cout << "double arr";
			this->doubleArray = new double[this->size]{};
		}
		else{
			//std::cout << "integer arr";
			this->intArray = new int[this->size]{};
		}
	}



	for(int i = (this->size - 2); i > -1; i--){
		if(!isParameterDouble){
			//std::cout << "INT" << std::endl;
			auto temp = intArray[i];
			intArray[i+1] = temp;
		}else{
			//std::cout << "DOUBLE" << std::endl;
			auto temp = doubleArray[i];
			doubleArray[i+1] = temp;
		}
	}
	//std::cout << "LEL"  << std::endl;
	if(isParameterDouble){
		//std::cout << "69" << std::endl;
		this->doubleArray[0] = elementDouble;
	}else{
		//std::cout << "120" << elementInteger << std::endl;
		this->intArray[0] = elementInteger;
	}

//	if(this->doubleArray != nullptr){
//		this->doubleArray[0] = x;
//	}else{
//		this->intArray[0] = x;
//	}
	this->currentElementSize++;
}
int DynamicArray::getSize(){return this->size;}
double DynamicArray::operator[] (unsigned i){
	double retValue = 2.1;
	if((i > size) || (i < 0)){
		throw std::overflow_error("Index has exceeded the limit. Or is under the 0.");
	}

	if(this->doubleArray != nullptr){
		retValue = this->doubleArray[i];
	}else{
		retValue = this->intArray[i];
	}

	return retValue;

}
double* DynamicArray::getArray(){return this->doubleArray;}

int DynamicArray::getTotalElements(){return this->currentElementSize;}
