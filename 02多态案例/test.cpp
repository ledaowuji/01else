#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker
{
public:
	//
	virtual void func()
	{

	}
	virtual void func2()
	{

	}
	virtual void func3()
	{

	}
	 void func4()
	{

	}
};

int main()
{
	cout << sizeof(Maker) << endl;

	system("pause");
	return EXIT_SUCCESS;
}

