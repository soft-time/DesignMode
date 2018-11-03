#include "Prototype.h"
#include <iostream>

/*
Prototype -> 对象工厂
	Prototype模式的关键是拷贝构造函数的实现方式，Prototype模式通过复制原型而获得新对象创建的功能
*/

int main(int argc, char* argv[]) 
{
	Prototype* p = new ConcretePrototype();

	Prototype* p1 = p->Clone();

	return 0;
}