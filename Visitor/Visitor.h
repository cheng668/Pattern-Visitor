#pragma once
#include <iostream>

using namespace std;
class ConcreteElementA;
class ConcreteElementB;
class Visitor
{
public:
	virtual ~Visitor(){}

	virtual void VisitConcreteElementA(ConcreteElementA*){}
	virtual void VisitConcreteElementB(ConcreteElementB*){}
	//...

protected:
	Visitor(){}
};
