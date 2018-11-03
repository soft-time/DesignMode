#pragma once
#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product 
{
public:
	// 纯虚函数
	virtual ~Product() = 0;

protected:
	// 屏蔽构造函数
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