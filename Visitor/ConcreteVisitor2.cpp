#include "ConcreteVisitor2.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

ConcreteVisitor2::ConcreteVisitor2()
{
}


ConcreteVisitor2::~ConcreteVisitor2()
{
}

void ConcreteVisitor2::VisitConcreteElementA(ConcreteElementA* ele)
{
	cout << "ConcreteVisitor2" << endl;

	ele->OperationA();
}

void ConcreteVisitor2::VisitConcreteElementB(ConcreteElementB* ele)
{
	cout << "ConcreteVisitor2" << endl;

	ele->OperationB();
}