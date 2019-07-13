#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void func()
	{

	}
};

class Dog :public Animal
{
public:
	virtual void func()
	{
		cout << "Dog func" << endl;
	}
};

void test()
{

	Animal *ani = new Dog;
	ani->func();


	Animal &ani2 = Dog();
	ani2.func();



	Animal *a = new Dog;

	Animal * &p = a;
	
	p->func();




}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

