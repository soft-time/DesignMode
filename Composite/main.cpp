#include "Component.h"
#include "Composite.h"
#include "leaf.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
	Leaf* one = new Leaf();
	one->Operation();

	Composite* com = new Composite();

	com->Add(one);

	com->Operation();

	Component* two = com->GetChild(0);

	two->Operation();

	return 0;
}