#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//������������Ϊ�˽��������ָ��ָ����������ø���ָ��ɾ���������

class Father
{
public:
	Father()
	{
		cout << "Father �Ĺ��캯��" << endl;
	}
	virtual void speak()
	{
		cout << "Father void speak()" << endl;
	}
	//����������
	/*virtual ~Father()
	{
		cout << "Father ����������" << endl;
	}*/
	//������������
	virtual ~Father() = 0;//�д��麯�������ǳ�����
};

Father::~Father()
{
	cout << "Father �Ĵ�����������" << endl;
}
class Son :public Father
{
public:
	Son()
	{
		cout << "Son �Ĺ��캯��" << endl;
	}
	virtual void speak()
	{
		cout << "Son void speak()" << endl;
	}

	~Son()
	{
		cout << "Son ����������" << endl;
	}
};
void test()
{
	Father *f = new Son;

	f->speak();
	//�ͷ��������ʱ����Ҫ�Ѹ������������д������������
	delete f;

}
int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

