#include "Prototype.h"
#include <iostream>

/*
Prototype -> ���󹤳�
	Prototypeģʽ�Ĺؼ��ǿ������캯����ʵ�ַ�ʽ��Prototypeģʽͨ������ԭ�Ͷ�����¶��󴴽��Ĺ���
*/

int main(int argc, char* argv[]) 
{
	Prototype* p = new ConcretePrototype();

	Prototype* p1 = p->Clone();

	return 0;
}