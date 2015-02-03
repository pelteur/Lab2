#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_


class DynamicArray
{

public:
	DynamicArray();
	DynamicArray(int capacite);
	~DynamicArray();
	int getCapacite()const;
	int getElement(unsigned int _index)const;
	void setElement(unsigned int _index);
	void setCapacite(unsigned int _nouvelleCapacite);
	




private:
	int capacite;
	int* tableau;
	int element;
	int position;
};


#endif //DYNAMICARRAY_H_