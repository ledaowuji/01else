#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	//�麯�� ���߱�������������������
	virtual void speak()//0x001
	{
		cout << "Animal speak()" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "Dog speak()" << endl;
	}
};


void func(Animal *animal)
{
	animal->speak();//0x001

}

//1.func���βκ�ʵ�β�һ�£�Ϊʲôû�б���
//û�����������1.�м̳й�ϵ��2.��Ϊ������С�ˣ�Ѱַ��Χ�����ںϷ����ڴ�ռ�
//2.�������dog�ĵ�ַ������ӡ����Animal�ĺ���������Ϊ��̬���ࣩ

//��̬�������ڱ���׶Σ���������ȷ���˺����ĵ��õ�ַ
//��̬���࣬�ú�����Ϊ�麯�������Ǹ��߱�������󶨺����ĵ��õ�ַ


void test()
{
	Dog *dog = new Dog;


	func(dog);

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

