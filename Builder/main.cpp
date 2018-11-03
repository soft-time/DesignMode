#include "Builder.h"
#include "Product.h"
#include "Director.h"

#include <iostream>
using namespace std;

/*
	Builder ģʽ��AbstractFactoryģʽ�ڹ����Ϻ����ƣ����Ǵ�����ĸ��ӵĶ������ǵ������ǣ�
	Builder ģʽǿ������һ�����������󣬲�ͨ����ͬ�Ĵ������̿��Ի�ò�ͬ�Ľ������һ����˵Builder
	ģʽ�ж�����ֱ�ӷ��صġ�����AbstractFactoryģʽ�ж�����ֱ�ӷ��صģ�AbstractFactoryģʽǿ����
	��Ϊ��������໥�����Ķ����ṩһ��ͳһ�Ľӿڡ�
*/

int main(int argc, char* argv[]) 
{
	Director* d = new Director(new ConcreteBuilder());
	
	d->Construct();
	
	return 0;
}