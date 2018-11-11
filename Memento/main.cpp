#include "Memento.h"

#include <iostream>

using namespace std;

/*
	Memento ģʽ�Ĺؼ����� friend class Originator��Memento �Ľӿ�������Ϊ private��
	���� Originator ����Ϊ Memento ����Ԫ�࣬ ���Ǵ� Originator ��״̬������ Memento ���У�
	���� Memento �ӿ� Private �������ﵽ��װ�Ĺ�Ч
	Originator �����ṩ�˷������û���ڣ�RestoreToMemento(Memento* mt); 
	���Գ��� Originator ��״̬�� old ��Ϊ new ����ֻص��� old��
*/

int main(int argc, char* argv[]) 
{
	Originator* o = new Originator();
	
	o->SetState("old");			// ����ǰ״̬

	o->PrintState();

	Memento* m = o->CreateMemento();		// ��״̬����

	o->SetState("new");

	o->PrintState();

	o->RestoreToMemento(m);

	o->PrintState();

	return 0;
}