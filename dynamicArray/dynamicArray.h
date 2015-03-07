#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>
#include <string>
#include <algorithm>

const unsigned int DEFAULT_CAPACITE = 100;

class DynamicArray
{
public:
	DynamicArray(unsigned int _capacite = 100);
	~DynamicArray();

	bool operator==(const DynamicArray& _rhs) const;
	DynamicArray& operator+=(const DynamicArray& _rhs);

	int getElement(unsigned int _index);
	void setElement(unsigned int _index, int _valeur);
	unsigned int getCapacite();
	void setCapacite(unsigned int _capacite);

private:
	DynamicArray(const DynamicArray & _source);
	DynamicArray& operator=(const DynamicArray & _source);
	
	int* tabElements;
	unsigned int capacite;
	void initArray();
};


#endif //DYNAMICARRAY_H_