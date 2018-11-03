#include "Decorator.h"

#include <iostream>

Component::Component() 
{
	
}

Component::~Component() 
{
	
}

void Component::Opetation() 
{
	
}

ConcreteComponent::ConcreteComponent() 
{
	
}

ConcreteComponent::~ConcreteComponent() 
{
	
}

void ConcreteComponent::Opetation() 
{
	std::cout << "ConcreteCompoent operation..." << std::endl;
}

Decorator::Decorator(Component* com) 
{
	this->_com = com;
}

Decorator::~Decorator()
{
	delete _com;
}

void Decorator::Opetation() 
{
	
}

ConcreteDecorator::ConcreteDecorator(Component* com) :Decorator(com) 
{
	
}

ConcreteDecorator::~ConcreteDecorator() 
{
	
}

void ConcreteDecorator::AddedBehavior() 
{
	std::cout << "ConcreteDecorator::AddedBehacior..." << std::endl;
}

void ConcreteDecorator::Opetation() 
{
	_com->Opetation();
	
	this->AddedBehavior();
}