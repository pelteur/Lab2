#include "dynamicArray.h"

#include "dynamicArray.h"
#include <algorithm>

DynamicArray::DynamicArray()
{
	capacite = 100;
	tableau = new int[capacite];
}

DynamicArray::DynamicArray(int _capacite)
{
	//DynamicArray::DynamicArray(int _nbElement)
	//if(_nbElement <= 0) throw std::invalid_argument("La capacite doit etre superieur a 0")
	//capacite = _nbElement

	//for(int cpt = 0; cpt < capacite cpt++)

	//tabElement[cpt] = 0;


	capacite = _capacite;
	tableau = new int[capacite];
}


DynamicArray::~DynamicArray()
{
	//Delet[] tabElement;
}

void getCapacite()
{
	return capacite;
}

int getElement(unsigned int _index)
{
	  
}
void setElement(unsigned int _index)
{
	if (_index >= capacite)
	{
		setCapacite(_index + 1);
		tabElement[_index] = _element;
	}
		
}
void setCapacite(unsigned int _nouvelleCapacite)
{
	if (_nouvelleCapacite <= 0)throw...

		for (int i = 0; 1 < std::min(capacite, _nouvelleCapacite); ++i)
		{
		nouveautableauTableauElement[i] = tabElement[i];
		}


}

//*

*//