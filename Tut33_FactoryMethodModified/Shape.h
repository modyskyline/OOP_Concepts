/*
 * SHAPE.h
 *
 *  Created on: Oct 15, 2016
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
			cout<<"Shape constructor called"<<endl;
		}

		virtual ~Shape()
		{
			cout<<"Shape destructor called"<<endl;
		}

		virtual void draw()=0;
};


class Circle : public Shape 
{
	public:
		Circle()
		{
			cout<<"Circle constructor called"<<endl;	
		}

		~Circle()
		{
			cout<<"Circle destructor called"<<endl;
		}
		void draw() { cout << "Circle\n"; }
};

class Square : public Shape 
{
	public:
		Square()
		{
			cout<<"Square constructor called"<<endl;	
		}

		~Square()
		{
			cout<<"Square destructor called"<<endl;
		}
		void draw() { cout << "Square\n"; }
};


class Rectangle : public Shape 
{
	public:
		Rectangle()
		{
			cout<<"Rectangle constructor called"<<endl;	
		}

		~Rectangle()
		{
			cout<<"Rectangle destructor called"<<endl;
		}
		void draw() { cout << "Rectangle\n"; }
};

#endif /* SHAPE_H_ */
