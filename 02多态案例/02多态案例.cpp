#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//������̬����������
//1.Ҫ�м̳�
//2.Ҫ��д������麯��
//3.Ҫ����ָ��ָ���������
class rule
{
public:
	//�麯��
	virtual int getrule(int a, int b)
	{
		return 0;
	}
	
};

class Maker :public rule
{
public:
	//�麯�� virtual �ɼӿɲ��ӣ�
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

//ҵ��
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

