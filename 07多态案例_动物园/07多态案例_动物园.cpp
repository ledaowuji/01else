#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//������
class Animal
{
public:
	virtual void speak() = 0;

	string name;
};

//��
class Dog :public Animal
{
public:
	Dog(string name)
	{
		this->name = name;
	}
	virtual void speak()
	{
		cout << "С��" << this->name << "������..." << endl;
	}
private:
	//string name;
};

//Ѽ��
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
		cout << this->type<<"СѼ" << this->name << "�¸¸�..." << endl;
	}
private:
	//string name;
	string type;
};

//�ϻ�
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
		cout << this->age << "��" << "�ϻ�" << this->name << "���" << endl;
	}

private:
	int age;
	//string name;
};

//����԰
class Zoo
{
public:
	Zoo()
	{
		mCapacity = 1024;
		mSize = 0;
		//�Ӷ��������˺���ָ������
		p = new Animal*[mCapacity];

		
	}
	//��Ӷ��ﵽ����԰
	int AddAnaiml(Animal* ani)//Animal* ani =new Dog
	{
		if (mSize == mCapacity)
		{
			return -1;
		}
		//��ֵ���ǵ�ַ
		this->p[mSize] = ani;

		mSize++;
		return 0;

	}
	//�����еĶ��ﶼ��
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
	int mCapacity;//����
	int mSize;//��ǰ�������
};

void test()
{
	//��������԰
	Zoo *zoo = new Zoo;
	zoo->AddAnaiml(new Dog("Сǿ"));
	zoo->AddAnaiml(new Dark("����Ѽ","����"));
	zoo->AddAnaiml(new Tiger("������", 3));

	zoo->StrstaSpeak();

	delete zoo;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

