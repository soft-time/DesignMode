#include <iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;

Factory::Factory() 
{
	
}

Factory::~Factory() 
{
	
}

ConcreteFactory::ConcreteFactory() 
{
	cout << "ConcreteFactory ..." << endl;
}

ConcreteFactory::~ConcreteFactory() 
{
	
}

Product* ConcreteFactory::CreateProduct() 
{
	return new ConcreteProduct;
}