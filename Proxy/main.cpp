#include "Proxy.h"

#include <iostream>
using namespace std;

/*
	Proxy 模式最大的好处就是实现了逻辑和实现的彻底解耦
*/

int main(int argc, char* argv[]) 
{
	Subject* sub = new ConcreteSubject();

	Proxy* p = new Proxy(sub);

	p->Request();

	return 0;
}