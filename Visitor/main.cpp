#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"
#include "Element.h"
#include <list>
#include <iterator>
int main()
{
	//用list作为对象结构ObjectStructure
	list<Element*> li;
	Visitor* vi1 = new ConcreteVisitor1();
	Visitor* vi2 = new ConcreteVisitor2();

	Element* eA = new ConcreteElementA();
	Element* eB = new ConcreteElementB();

	li.push_back(eA);
	li.push_back(eB);

	for (list<Element*>::iterator i = li.begin()
		; i != li.end(); ++i)
	{
		(*i)->Accept(vi1);
		(*i)->Accept(vi2);
	}

	delete vi1;
	delete vi2;
	delete eA;
	delete eB;
	_CrtCheckMemory();
	system("pause");
	return 0;
}

/*
output:
	ConcreteVisitor1
	visit ConcreteElementA
	ConcreteVisitor2
	visit ConcreteElementA
	ConcreteVisitor1
	visit ConcreteElementB
	ConcreteVisitor2
	visit ConcreteElementB
*/