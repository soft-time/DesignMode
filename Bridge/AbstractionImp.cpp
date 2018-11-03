#include "AbstractionImp.h"

#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp() 
{
	
}

AbstractionImp::~AbstractionImp() 
{
	
}

void AbstractionImp::Operaction() 
{
	cout << "AbstarctionImp ... imp ... " << endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA() 
{

}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA() 
{
	
}

void ConcreteAbstractionImpA::Operaction() 
{
	cout << "ConcreteAbstarctionImpA..." << endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB() 
{
	
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB() 
{
	
}

void ConcreteAbstractionImpB::Operaction() 
{
	cout << "ConcreteAbstractionImpB ..." << endl;
}
