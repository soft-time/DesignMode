#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

/*
	这样的Factory模式解决父类中并不知道具体要实例化哪一个具体的子类的问题，需要创建对象提供接口问题，
	可以由Factiry中附加相应的Create***Product（）即可。
*/
int main(int argc, char* argv[]) 
{
	Factory* fac = new ConcreteFactory();
	
	Product* p = fac->CreateProduct();

	return 0;
}