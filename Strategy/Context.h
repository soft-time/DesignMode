#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Strategy;

/*
这个类是Strategy模式的关键，也是Strategy模式和Template模式的根本区别所在
*Strategy 通过组合（委托方式实现算法的异构，而Template 模式则采取的是继承的方式）
*这两个模式的区别也是继承和组合两种实现接口重用方式的区别
**/

class Context 
{
public:
	Context(Strategy* stg);
	
	~Context();

	void DoAction();
	
protected:
	Strategy* _stg;

};

#endif
