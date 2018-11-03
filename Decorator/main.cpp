#include "Decorator.h"

#include <iostream>
using namespace std;

/*
	让 Decorator 直接拥有一个ConcreteComponent 的引用（指针）也可以达到修饰的功能
	Decorator 模式和 Proxy 模式的相似的地方在于他们都拥有一个指向其他对象的引用（指针）
	即通过组合的方式来为对象提供更多的操作（或者Decorator模式）间接性（Proxy模式）。
	但是他们的区别是，Proxy模式会提供试用其作为代理的对象一样接口，使用代理类将其操作
	都委托给Proxy直接进行。这里可以简单理解为组合和委托之间的微妙的区别了。
	Decorator模式除了采用组合的方式取得了比采用继承方式更好的效果，Decorator模式还给
	设计带来一种“即用即付”的方式来添加职责。在 OO 设计和分析经常有这样一种情况：
	为了多态，通过父类指针指向其具体子类，就带来其他的问题，当具体子类要添加新的职责，就必须向
	其父类添加一个这个职责的抽象接口，否则是通过父类职责是调用不到这个方法。这样处于高层的父类
	就承载了太多的特性（方法），并且继承这个父类的所有子类都不可避免继承了父类的这些接口，但是
	可能这并不是这个具体子类所需要的。而在 Decorator 模式提供了一种比较好的解决方法，当需要添加一个操作
	的时候就可以通过 Decorator 模式来解决。
*/

int main(int argc, char* argv[]) 
{
	Component* com = new ConcreteComponent();

	Decorator* dec = new ConcreteDecorator(com);

	dec->Opetation();

	delete dec;

	return 0;
}