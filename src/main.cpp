
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


	dynArray.toString();

	for(int i = 0 ; i<size;i++){
		int arrP = size - 1;
		cout << "Position " << (i+1) <<" Element should be: " << test[i] << " | TEST STATUS: " << isEqual(test[i], dynArray[size - i - 1]) << std::endl;
	}

//	auto b = 2.9;
//	auto c = true;
//	auto d = 'c';
//	auto e = "asdasd";
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;



}


