#include "Subject.h"
#include "Observer.h"

#include <iostream>
using namespace std;

/*
	��Observer ģʽ��ʵ���У� Subject ά��һ�� list ��Ϊ�洢���й۲��ߵ�������ÿ��
	���� Noify �����ͱ��� list �е� Observer ���󣬲��㲥֪ͨ�ı�״̬������Observer �� Update ������
	Ŀ���״̬ state ������ Subject �Լ��ı䣬Ҳ������ Observer ��ĳ���������� State �ĸı�
	Notify ���������� Subject Ŀ�������㲥��
	�� Subject ����״̬ ��old�� ��ʱ�����������������۲��߶���ʾ��old��,��Ŀ��״̬��Ϊ��new�� ��
	ʱ�����������������۲���Ҳ���ı�Ϊ��new��.
*/

int main(int argc, char* argv[]) 
{
	ConcreteSubject* sub = new ConcreteSubject();

	Observer* o1 = new ConcreteObserverA(sub);

	Observer* o2 = new ConcreteObserverB(sub);

	sub->SetState("old");

	sub->Notify();

	sub->SetState("new");		// Ҳ������ Observer ����

	sub->Notify();

	return 0;

}