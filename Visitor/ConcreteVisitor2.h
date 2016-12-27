#pragma once
#include "Visitor.h"
class ConcreteVisitor2 :
	public Visitor
{
public:
	ConcreteVisitor2();
	virtual ~ConcreteVisitor2();
	virtual void VisitConcreteElementA(ConcreteElementA*) override;
	virtual void VisitConcreteElementB(ConcreteElementB*) override;
};

