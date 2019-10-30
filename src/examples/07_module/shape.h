//shape.h
#ifndef SHAPE_H
#define SHAPE_H
#inlcude <iostream>
using std::cout;

class Shape
{
public:
	virtual void draw() = 0; //pure virtual function,abstract class
};

#endif