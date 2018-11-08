#pragma once
#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class State;

class Context 
{
public:
	Context();

	Context(State* state);

	~Context();

	void OprationInterface();

	void OperationChangState();

protected:

private:
	// 表明在 State 类中可以访问 Context 类的 private 字段
	friend class State;

	bool ChangeState(State* state);

private:
	State* _state;

};

#endif