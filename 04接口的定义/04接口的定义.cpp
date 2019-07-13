#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class rule
{
public:
	//纯虚函数
	//返回值....
	//参数。。。
	virtual int getrule(int a, int b) = 0;//接口

	virtual int getrule2(int a, int b) = 0;
	virtual int getrule3(int a, int b) = 0;
	virtual int getrule4(int a, int b) = 0;




};

class Maker :public rule
{
public:
	//纯虚函数
	//返回值....
	//参数。。。
	virtual int getrule(int a, int b)
	{
		return a + b;
	}

	virtual int getrule2(int a, int b)
	{
		return a - b;
	}
	virtual int getrule3(int a, int b)
	{
		return a*b;
	}
	virtual int getrule4(int a, int b)
	{
		return a / b;
	}
};


void func(rule *rul)
{
	int a = 10;
	int b = 20;

	rul->getrule(a, b);


}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

