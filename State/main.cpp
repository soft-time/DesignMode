#include "Contex.h"
#include "State.h"

#include <iostream>
using namespace std;

/*
	�� State ����Ϊ Context ����Ԫ�ࣨfriend class���� ���������� State ģʽ���� Context ��
	Peotected �ӿ� ChangeState()

	State ���������еĲ������� Context* ������Ϊ����������ҪĿ���� State �����ͨ�����ָ�����
	Context �еķ�����

	3�ε��� Context �� OprationInterface() ��ÿ�ε��ú�״̬����ı䣨A - B - A��
	
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