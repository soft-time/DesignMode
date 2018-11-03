#include "Builder.h"
#include "Product.h"
#include "Director.h"

#include <iostream>
using namespace std;

/*
	Builder 模式和AbstractFactory模式在功能上很相似，都是创建大的复杂的对象，它们的区别是：
	Builder 模式强调的是一步步创建对象，并通过相同的创建过程可以获得不同的结果对象，一般来说Builder
	模式中对象不是直接返回的。而在AbstractFactory模式中对象是直接返回的，AbstractFactory模式强调的
	是为创建多个相互依赖的对象提供一个统一的接口。
*/

int main(int argc, char* argv[]) 
{
	Director* d = new Director(new ConcreteBuilder());
	
	d->Construct();
	
	return 0;
}