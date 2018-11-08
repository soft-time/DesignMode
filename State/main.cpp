#include "Contex.h"
#include "State.h"

#include <iostream>
using namespace std;

/*
	将 State 声明为 Context 的友元类（friend class）， 其作用是让 State 模式访问 Context 的
	Peotected 接口 ChangeState()

	State 及其子类中的操作都将 Context* 传入作为参数，其主要目的是 State 类可以通过这个指针调用
	Context 中的方法。

	3次调用 Context 的 OprationInterface() ，每次调用后状态都会改变（A - B - A）
	
***/

int main(int argc, char* argv[]) 
{
	State* st = new ConcreteStateA();

	Context* con = new Context(st);

	con->OperationChangState();

	con->OperationChangState();

	con->OperationChangState();

	if (con != NULL)
	{
		delete con;
	}

	if (st != NULL)
	{
		st = NULL;
	}

	return 0;

}