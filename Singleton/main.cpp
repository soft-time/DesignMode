#include "Singleton.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) 
{
	Singleton* sgn = Singleton::Instance();

	/* Ҳ���������� */
	Singleton::Instance()->PrintNum();

	return 0;
}