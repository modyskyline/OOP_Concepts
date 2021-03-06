/*
 * Shape.h
 *
 *  Created on: Oct 24, 2016
 *      Author: modys
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
using namespace std;

class Shape
{

public:
	Shape()
	{
		cout<<"Shape called"<<endl;
	}

	virtual ~Shape()
	{
		cout<<"~Shape called"<<endl;
	}

	virtual void draw()=0;
};

class Rectangle :public Shape
{
public:
	Rectangle()
	{
		cout<<"Rectangle called"<<endl;
	}

	virtual ~Rectangle()
	{
		cout<<"~Rectangle called"<<endl;
	}

	void draw()
	{
		cout<<"Draw a circle"<<endl;
	}
};

class Circle :public Shape
{
public:
	Circle()
	{
		cout<<"Circle called"<<endl;
	}

	virtual ~Circle()
	{
		cout<<"~Circle called"<<endl;
	}

	void draw()
	{
		cout<<"Draw a Circle"<<endl;
	}
};

#endif /* SHAPE_H_ */
