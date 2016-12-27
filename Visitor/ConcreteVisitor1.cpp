#include "ConcreteVisitor1.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

ConcreteVisitor1::ConcreteVisitor1()
{
}


ConcreteVisitor1::~ConcreteVisitor1()
{
}

void ConcreteVisitor1::VisitConcreteElementA(ConcreteElementA* ele)
{
	cout << "ConcreteVisitor1" << endl;
	ele->OperationA();
}

void ConcreteVisitor1::VisitConcreteElementB(ConcreteElementB* ele)
{
	cout << "ConcreteVisitor1" << endl;
	ele->OperationB();
}