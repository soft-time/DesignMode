#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Strategy;

/*
�������Strategyģʽ�Ĺؼ���Ҳ��Strategyģʽ��Templateģʽ�ĸ�����������
*Strategy ͨ����ϣ�ί�з�ʽʵ���㷨���칹����Template ģʽ���ȡ���Ǽ̳еķ�ʽ��
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����÷�ʽ������
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
