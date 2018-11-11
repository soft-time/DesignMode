#include "Mediator.h"

#include "Colleage.h"

#include <iostream>
using namespace std;


/*
	Mediator 模式的实现关键就是将对象 Colleague 之间的通信封装到一个类中单独处理。 为了模拟
	Mediator 模式的功能，这里给每个 Colleague 对象一个 string 类别以记录其状态，并通过状态
	改变来掩饰对象之间的交互和通信。主要就 Mediator 的示例运行结果给出分析：
	1、将 ConcreteColleageA 对象设置状态 “old”, ConcreteColleageB 也设置状态 “old”;
	2、ConcreteColleageA 对象改变状态，并在 Action 中和 ConcreteColleageB 对象进行通信，并
	改变 ConcreteColleageB 对象的状态 “new”
	3、ConcreteColleageB 对象改变状态，并在Action 中和 ConcreteColleageA 对象进行通信，并改变
	ConcreteColleageA 对象状态为 "new"
*/

int main(int argc, char* argv[]) 
{
	ConcreteMediator* m = new ConcreteMediator();

	ConcreteColleageA* c1 = new ConcreteColleageA(m);

	ConcreteColleageB* c2 = new ConcreteColleageB(m);

	m->IntroColleage(c1, c2);

	c1->SetState("old");
	c2->SetState("old");
	c1->Action();
	c2->Action();
	cout << endl;

	c1->SetState("new");
	c1->Action();
	c2->Action();
	cout << endl;

	c2->SetState("old");
	c2->Action();
	c1->Action();

	return 0;
}