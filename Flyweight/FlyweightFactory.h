#pragma once
#ifndef _FLYWEIGHT_FACTORY_H_
#define _FLYWEIGHT_FACTORY_H_

#include "Flyweight.h"
#include <string>
#include <vector>

class FlyweightFactory 
{
public:
	FlyweightFactory();

	~FlyweightFactory();

	Flyweight* GetFlyweight(const string& key);

protected:

private:
	vector<Flyweight*> _fly;

};

#endif