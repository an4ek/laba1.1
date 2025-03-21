#pragma once
#include <iostream>
using namespace std;

class IX //������ ���������
{
public:
	virtual void Fx1() = 0;
	virtual void Fx2() = 0;
	virtual void Fx3() = 0;
	virtual void Fx4() = 0;
};

class CA : public IX
{
public:
	//������ ����������
	double m_Fx2;
	double m_Fx3;
	double m_Fx4;
	//���������� ������������ �������� ������ IX
	virtual void Fx1() { cout << "CA::Fx1" << endl; };
	virtual void Fx2() { cout << m_Fx2 << endl; };
	virtual void Fx3() { cout << m_Fx3 << endl; };
	virtual void Fx4() { cout << m_Fx4 << endl; };

	//�����������
	CA(double d) {
		m_Fx2 = d * d;
		m_Fx3 = d * d * d;
		m_Fx4 = d * d * d * d;
	};
};

int main() {
	//������� 1-� ��������� CA
	CA* pA1 = new CA(1.5);

	//������� 2-� ��������� CA
	CA* pA2 = new CA(2.75);

	return 0;


}



//���������� ctrl + a ctrl + k ctrl + u
//������� ctrl + a ctrl+ k ctrl + c