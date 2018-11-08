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
	// ������ State ���п��Է��� Context ��� private �ֶ�
	friend class State;

	bool ChangeState(State* state);

private:
	State* _state;

};

#endif