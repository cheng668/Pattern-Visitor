#pragma once
#include "Visitor.h"
class ConcreteVisitor1 :
	public Visitor
{
public:
	ConcreteVisitor1();
	virtual ~ConcreteVisitor1();
	virtual void VisitConcreteElementA(ConcreteElementA*) override;
	virtual void VisitConcreteElementB(ConcreteElementB*) override;
};

