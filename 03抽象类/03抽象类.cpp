#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�д��麯������г�����
//�����಻��ʵ��������
//ע�⣺�̳��˳����࣬��ô�������е����д��麯����������������д
//��������£���ô����Ҳ���Ϊ������
class rule
{
public:
	//���麯��
	//����ֵ....
	//����������
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

