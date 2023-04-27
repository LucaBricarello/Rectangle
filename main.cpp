#include<iostream>

#include "Rectangle.h"

int main() {

	float w;
	float l;

	float w1;
	float l1;

	float A;
	float P;

	Rectangle objRectA(10,5);
	Rectangle objRectB;
	Rectangle objRectC;
	
	objRectB.SetDim(3,7);
	
	objRectA.SetWidth(4);
	
	w = objRectB.GetLength();

	l = objRectB.GetWidth();

	objRectB.GetDim(w1 ,l1);

	objRectC = objRectB;


	//objRectC = objRectB = objRectA;                                   come si scrive 
	//objRectC.operator=(objRectB.operator=(objRectA));                 come lo legge il compilatore

	if (objRectC == objRectB);
	{
		cout << "C and B are equal" << endl;
	}

	A = objRectA.GetArea();

	P = objRectA.GetPerimeter();

	return 0;
}