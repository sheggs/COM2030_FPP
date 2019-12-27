/*
 * DynamicArray.cpp
 *
 *  Created on: 26 Dec 2019
 *      Author: Mahdi PC
 */

#include "DynamicArray.h"

DynamicArray::DynamicArray(int size) {
	// TODO Auto-generated constructor stub
	this->size = size;
	this->pArray = new double[size]{};
	this->currentElementSize = 0;
	this->isFirstElementEmpty = false;
	this->isDouble = false;
}
DynamicArray::DynamicArray(DynamicArray &p){
	this->size = p.getSize();
	this->pArray = p.getArray();
	this->isFirstElementEmpty = p.getIsFirstElementEmpty();
}

DynamicArray::~DynamicArray() {
	// TODO Auto-generated destructor stub
}

bool DynamicArray::getIsDouble(){return isDouble;}
bool DynamicArray::getIsFirstElementEmpty(){return isFirstElementEmpty;}
void DynamicArray::toString(){
	if(this->size > 0){
		for(int i = 0; i<this->size;i++){
			if(getIsDouble()){
				printf("%.2f \n",this->pArray[i]);
			}
			else{
				printf("%.0f \n",this->pArray[i]);

			}
		}
	}
}

void DynamicArray::addElement(double x){
	for(int i = (this->size - 2); i > -1; i--){
		double temp = pArray[i];
		pArray[i+1] = temp;

	}
	if((x - (int)x) > 0.0){
		this->isDouble = true;
	}
	this->pArray[0] = x;
	this->currentElementSize++;
}
int DynamicArray::getSize(){return this->size;}

double* DynamicArray::getArray(){return this->pArray;}
