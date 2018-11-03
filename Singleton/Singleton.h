#pragma once
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class Singleton 
{
public:
	static Singleton* Instance();
	void PrintNum();

protected:
	Singleton();

private:
	static Singleton* _instance;

};

#endif