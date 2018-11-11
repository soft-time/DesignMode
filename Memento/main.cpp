#include "Memento.h"

#include <iostream>

using namespace std;

/*
	Memento 模式的关键就是 friend class Originator，Memento 的接口声明都为 private，
	而将 Originator 声明为 Memento 的友元类， 我们带 Originator 的状态保存在 Memento 类中，
	而将 Memento 接口 Private 起来，达到封装的功效
	Originator 类中提供了方法让用户后悔：RestoreToMemento(Memento* mt); 
	测试程序 Originator 的状态由 old 变为 new 最后又回到了 old。
*/

int main(int argc, char* argv[]) 
{
	Originator* o = new Originator();
	
	o->SetState("old");			// 备忘前状态

	o->PrintState();

	Memento* m = o->CreateMemento();		// 将状态备忘

	o->SetState("new");

	o->PrintState();

	o->RestoreToMemento(m);

	o->PrintState();

	return 0;
}