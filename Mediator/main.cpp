#include "Mediator.h"

#include "Colleage.h"

#include <iostream>
using namespace std;


/*
	Mediator ģʽ��ʵ�ֹؼ����ǽ����� Colleague ֮���ͨ�ŷ�װ��һ�����е������� Ϊ��ģ��
	Mediator ģʽ�Ĺ��ܣ������ÿ�� Colleague ����һ�� string ����Լ�¼��״̬����ͨ��״̬
	�ı������ζ���֮��Ľ�����ͨ�š���Ҫ�� Mediator ��ʾ�����н������������
	1���� ConcreteColleageA ��������״̬ ��old��, ConcreteColleageB Ҳ����״̬ ��old��;
	2��ConcreteColleageA ����ı�״̬������ Action �к� ConcreteColleageB �������ͨ�ţ���
	�ı� ConcreteColleageB �����״̬ ��new��
	3��ConcreteColleageB ����ı�״̬������Action �к� ConcreteColleageA �������ͨ�ţ����ı�
	ConcreteColleageA ����״̬Ϊ "new"
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