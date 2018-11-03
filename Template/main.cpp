#include "Template.h"

#include <iostream>
using namespace std;

/*
	Template 模式的实现代码简单，只提供模板方法 子类去实现。
*/

int main(int argc, char* argv[]) 
{
	AbstractClass* p1 = new ConcreteClass1();

	AbstractClass* p2 = new ConcreteClass2();

	p1->TemplateMethod();

	p2->TemplateMethod();

	return 0;
}