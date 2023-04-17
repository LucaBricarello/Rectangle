#include<iostream>

#include "Rectangle.h"

int main() {

	int w;
	int l;

	int w1;
	int l1;

	Rectangle objRectA(10,5);
	Rectangle objRectB;
	
	objRectB.SetDim(3,7);
	
	objRectA.SetWidth(4);
	
	w = objRectB.GetLength();

	l = objRectB.GetWidth();

	objRectB.GetDim(w1 ,l1);

	return 0;
}