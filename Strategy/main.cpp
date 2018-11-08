#include "Context.h"
#include "Strategy.h"

#include <iostream>
using namespace std;

/*
Strategy模式和Template 模式实际上是实现一个抽象接口的两种方式：继承和组合之间的区别
*/

int main(int argc, char* argv[]) 
{
	Strategy* ps = new ConcreteStrategyA;

	Context* pc = new Context(ps);

	pc->DoAction();

	if (NULL != pc)
		delete pc;
	
	return 0;

}