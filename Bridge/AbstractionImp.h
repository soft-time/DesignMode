#pragma once
#ifndef _ABSTRACTIONIMP_H_

class AbstractionImp 
{
public:
	virtual ~AbstractionImp();

	virtual void Operaction() = 0;

protected:
	AbstractionImp();

private:

};

class ConcreteAbstractionImpA :public AbstractionImp 
{
public:
	ConcreteAbstractionImpA();

	~ConcreteAbstractionImpA();
	
	virtual void Operaction();

protected:

private:

};

class ConcreteAbstractionImpB :public AbstractionImp 
{
public:
	ConcreteAbstractionImpB();

	~ConcreteAbstractionImpB();

	virtual void Operaction();

protected:

private:

};

#endif