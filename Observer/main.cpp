#include "Subject.h"
#include "Observer.h"

#include <iostream>
using namespace std;

/*
	在Observer 模式的实现中， Subject 维护一个 list 作为存储所有观察者的容器，每当
	调用 Noify 操作就遍历 list 中的 Observer 对象，并广播通知改变状态（调用Observer 的 Update 操作）
	目标的状态 state 可以由 Subject 自己改变，也可以由 Observer 的某个操作引起 State 的改变
	Notify 操作可以由 Subject 目标主动广播。
	当 Subject 处于状态 “old” 的时候，依赖于它的两个观察者都显示“old”,当目标状态变为“new” 的
	时候，依赖于它的两个观察者也都改变为“new”.
*/

int main(int argc, char* argv[]) 
{
	ConcreteSubject* sub = new ConcreteSubject();

	Observer* o1 = new ConcreteObserverA(sub);

	Observer* o2 = new ConcreteObserverB(sub);

	sub->SetState("old");

	sub->Notify();

	sub->SetState("new");		// 也可以由 Observer 调用

	sub->Notify();

	return 0;

}