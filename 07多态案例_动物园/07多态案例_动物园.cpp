#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//抽象类
class Animal
{
public:
	virtual void speak() = 0;

	string name;
};

//狗
class Dog :public Animal
{
public:
	Dog(string name)
	{
		this->name = name;
	}
	virtual void speak()
	{
		cout << "小狗" << this->name << "汪汪汪..." << endl;
	}
private:
	//string name;
};

//鸭子
class Dark :public Animal
{
public:
	Dark(string name,string type)
	{
		this->name = name;
		this->type = type;
	}
	virtual void speak()
	{
		cout << this->type<<"小鸭" << this->name << "嘎嘎嘎..." << endl;
	}
private:
	//string name;
	string type;
};

//老虎
class Tiger :public Animal
{
public:
	Tiger(string name,int age)
	{
		this->name = name;
		this->age = age;
	}
	virtual void speak()
	{
		cout << this->age << "岁" << "老虎" << this->name << "嗷嗷嗷" << endl;
	}

private:
	int age;
	//string name;
};

//动物园
class Zoo
{
public:
	Zoo()
	{
		mCapacity = 1024;
		mSize = 0;
		//从堆区申请了函数指针数组
		p = new Animal*[mCapacity];

		
	}
	//添加动物到动物园
	int AddAnaiml(Animal* ani)//Animal* ani =new Dog
	{
		if (mSize == mCapacity)
		{
			return -1;
		}
		//赋值的是地址
		this->p[mSize] = ani;

		mSize++;
		return 0;

	}
	//让所有的动物都叫
	void StrstaSpeak()
	{
		for (int i = 0; i < mSize; i++)
		{
			this->p[i]->speak();
		}
	}

	~Zoo()
	{
		for (int i = 0; i < mSize; i++)
		{
			if (this->p[i] != NULL)
			{
				delete this->p[i];
				this->p[i] = NULL;
			}
		}

		if (p != NULL)
		{
			delete[] p;
			p = NULL;
		}
	}
private:
	Animal **p;
	int mCapacity;//容量
	int mSize;//当前动物个数
};

void test()
{
	//创建动物园
	Zoo *zoo = new Zoo;
	zoo->AddAnaiml(new Dog("小强"));
	zoo->AddAnaiml(new Dark("唐老鸭","美国"));
	zoo->AddAnaiml(new Tiger("东北虎", 3));

	zoo->StrstaSpeak();

	delete zoo;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

