/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include<iostream>
#include "Rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	width = 0;
	length = 0;

}

/// @brief init constructor 
/// @param w width
/// @param h length
Rectangle::Rectangle(float w, float l) {

	width = 0;
	length = 0;

	cout << "Rectangle - constructor" << endl;

	if (w <= 0) 
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0) 
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;

}


/// @brief copy constructor
/// @param rectangle to copy passed by reference
Rectangle::Rectangle(const Rectangle &r)
{
	cout << "Rectangle - copy constructor" << endl;
	
	width = r.width;
	length = r.length;
}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}
/// @brief overload operator =
/// @param Rectagle to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	cout << "Rectangle - operator =" << endl;

	width = r.width;
	length = r.length;

	return *this;
}
/// @brief overload operator == (useful for if(obj1=obj2) construct, when are to obj equal? we have to decide it, obj1 is the caller, obj2 is called as a parameter)
/// @param Rectagle to check if it is equal to the rectangle that called == operator (as a constant to block an eventual change)
/// @return true if lentgh and width of the two rectangles are equal, false otherwise (we decided the meaning of the operator ==)
bool Rectangle::operator==(const Rectangle& r)
{
	if (width == r.width && length == r.length)
	{
		return true;
	}
	return false;
}

/// @brief set width of the object
/// @param w width
void Rectangle::SetWidth(float w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

}

/// @brief set length of the object
/// @param l length
void Rectangle::SetLength(float l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}

/// @brief set width and length of the object
/// @param w width
/// @param l length
void Rectangle::SetDim(float w, float l) {

	SetWidth(w);
	SetLength(l);
}


/// @brief get width of the object
/// @return width of the object
float Rectangle::GetWidth() {

	return width;

}

/// @brief get length of the object
/// @return length of the object
float Rectangle::GetLength() {

	return length;

}

/// @brief get width and length of the object returning them in the given variables
/// @param given variable for width in pixels
/// @param given variable for length in pixels
void Rectangle::GetDim(float&w, float&l) {

	w = width;
	l = length;

	return;
}

/// @brief function to calculate the area of a rectangle
/// @return area if the rectangle
float Rectangle::GetArea()
{
	return width*length;
}

/// @brief function to calculate the perimeter of a rectangle
/// @return perimeter if the rectangle
float Rectangle::GetPerimeter()
{
	return 2*(length + width);
}