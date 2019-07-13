#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//有纯虚函数的类叫抽象类
//抽象类不能实例化对象
//注意：继承了抽象类，那么抽象类中的所有纯虚函数必须在子类中重写
//如果不重新，那么子类也会变为抽象类
class rule
{
public:
	//纯虚函数
	//返回值....
	//参数。。。
	virtual int getrule(int a, int b) = 0;

	virtual int getrule2(int a, int b) = 0;
	virtual int getrule3(int a, int b) = 0;
	virtual int getrule4(int a, int b) = 0;
};

void test()
{
	//rule r;err
	rule *p;
}

class Maker :public rule
{
public:
	//虚函数 virtual 可加可不加，
	virtual int getrule(int a, int b)
	{
		return a*b;
	}
};

class Plus_rule :public rule
{
public:
	int getrule(int a, int b)
	{
		return a + b;
	}
	virtual int getrule2(int a, int b)
	{

	}
	virtual int getrule3(int a, int b)
	{

	}
	virtual int getrule4(int a, int b)
	{

	}
};

void test02()
{
	Plus_rule pr;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

