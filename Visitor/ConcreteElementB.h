#pragma once
#include "Element.h"
class ConcreteElementB :
	public Element
{
public:
	ConcreteElementB();
	virtual ~ConcreteElementB();

	virtual void Accept(Visitor*) override;

	void OperationB();
};

