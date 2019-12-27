
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "DynamicArray.h"
using namespace std;


int main()
{
	DynamicArray d(4);
	d.addElement(1);
	d.addElement(3);
	d.addElement(0);
	d.addElement(4);
	cout << "The size " << d.getSize() << std::endl;
	 d.toString();
	if(d.getIsDouble()){
		cout << "TRUE";
	}else{
		cout << "FALSE";
	}
	//	cout << "hi";
//	cout << d.currentElementSize;
}

