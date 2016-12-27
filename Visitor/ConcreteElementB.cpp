#include "ConcreteElementB.h"
#include "Visitor.h"

ConcreteElementB::ConcreteElementB()
{
}


ConcreteElementB::~ConcreteElementB()
{
}

void ConcreteElementB::Accept(Visitor* v)
{
	v->VisitConcreteElementB(this);
}

void ConcreteElementB::OperationB()
{
	cout << "visit ConcreteElementB" << endl;
}