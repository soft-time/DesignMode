#include "Proxy.h"

#include <iostream>
using namespace std;

/*
	Proxy ģʽ���ĺô�����ʵ�����߼���ʵ�ֵĳ��׽���
*/

int main(int argc, char* argv[]) 
{
	Subject* sub = new ConcreteSubject();

	Proxy* p = new Proxy(sub);

	p->Request();

	return 0;
}