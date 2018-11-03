#pragma once

#ifndef _DECORATOR_H_
#define _DECORATOR_H_

class Component 
{
public:
	virtual ~Component();

	virtual void Opetation();

protected:
	Component();

private:

};

class ConcreteComponent : public Component 
{
public:
	ConcreteComponent();

	~ConcreteComponent();

	void Opetation();

protected:

private:

};

class Decorator : public Component 
{
public:
	Decorator(Component* com);

	Decorator();

	virtual ~Decorator();

	void Opetation();

protected:
	Component* _com;

private:

};

class ConcreteDecorator : public Decorator 
{
public:
	ConcreteDecorator(Component* com);

	~ConcreteDecorator();

	void Opetation();

	void AddedBehavior();

protected:

private:

};

#endif
