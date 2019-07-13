#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//发生多态的三个条件
//1.要有继承
//2.要重写父类的虚函数
//3.要父类指针指向子类对象
class rule
{
public:
	//虚函数
	virtual int getrule(int a, int b)
	{
		return 0;
	}
	
};

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
		return a+b;
	}
};

class minu_rule :public rule
{
public:
	int getrule(int a, int b)
	{
		return a - b;
	}
};

class custom :public rule
{
public:
	int getrule(int a, int b)
	{
		return (a + b)*10;
	}
};

//业务
int func(rule *rul)
{
	int a = 20;
	int b = 30;

	int ret = rul->getrule(a,b);

	return ret;

}

void test()
{
	rule *rul = NULL;
	rul = new Plus_rule;

	cout << func(rul) << endl;

	delete rul;

	rul = new minu_rule;
	cout << func(rul) << endl;

	delete rul;

	rul = new custom;
	cout << func(rul) << endl;

	delete rul;

	rul = new Maker;
	cout << func(rul) << endl;
}


int main02()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

