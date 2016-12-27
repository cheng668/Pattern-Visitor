#pragma once
#include "Element.h"
class ConcreteElementA :
	public Element
{
public:
	ConcreteElementA();
	virtual ~ConcreteElementA();

	virtual void Accept(Visitor*) override;
	virtual void OperationA();
};

