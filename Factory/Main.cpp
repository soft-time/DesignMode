#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

/*
	������Factoryģʽ��������в���֪������Ҫʵ������һ���������������⣬��Ҫ���������ṩ�ӿ����⣬
	������Factiry�и�����Ӧ��Create***Product�������ɡ�
*/
int main(int argc, char* argv[]) 
{
	Factory* fac = new ConcreteFactory();
	
	Product* p = fac->CreateProduct();

	return 0;
}