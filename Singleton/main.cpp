#include "Singleton.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) 
{
	Singleton* sgn = Singleton::Instance();

	/* 也可以这样用 */
	Singleton::Instance()->PrintNum();

	return 0;
}