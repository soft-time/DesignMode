#pragma once
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product 
{
public:
	// ���麯��
	virtual ~Product() = 0;

protected:
	// ���ι��캯��
	Product();	

private:

};

class ConcreteProduct :public Product 
{
public:
	~ConcreteProduct();

	ConcreteProduct();

protected:

private:

};

#endif