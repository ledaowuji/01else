#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Drink
{
public:
	//��ˮ
	virtual void func1() = 0;

	//����
	virtual void func2() = 0;
	//��������
	virtual void func3() = 0;
	//�ӵ㸨��
	virtual void func4() = 0;


	void maker()
	{
		func1();
		func2();
		func3();
		func4();
	}
};

class Coffee :public Drink
{
	//��ˮ
	virtual void func1()
	{
		cout << "���¶ˮ" << endl;
	}

	//����
	virtual void func2()
	{
		cout << "���ݿ���" << endl;
	}
	//��������
	virtual void func3()
	{
		cout << "�������" << endl;
	}
	//�ӵ㸨��
	virtual void func4()
	{
		cout << "�ӵ���" << endl;
	}

	/*
	void maker()
	{
	func1();
	func2();
	func3();
	func4();
	}
	*/


};

void test()
{
	Drink *rink = NULL;
	rink = new Coffee;
	rink->maker();
	delete rink;

	
}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

