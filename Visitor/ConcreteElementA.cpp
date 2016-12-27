#include "ConcreteElementA.h"
#include "Visitor.h"

ConcreteElementA::ConcreteElementA()
{
}


ConcreteElementA::~ConcreteElementA()
{
}

void ConcreteElementA::Accept(Visitor* v)
{
	v->VisitConcreteElementA(this);
}

void ConcreteElementA::OperationA()
{
	cout << "visit ConcreteElementA" << endl;
}