//#pragma once
//#include <iostream>
//using namespace std;
//
//class IX //������ ���������
//{
//public:
//	virtual void Fx1() = 0;
//	virtual void Fx2() = 0;
//};
//
//class IY //������ ���������
//{
//public:
//	virtual void Fy1() = 0;
//	virtual void Fy2() = 0;
//};
//class CA : public IX,
//	public IY //���������
//{
//public:
//	//���������� ������������ �������� ������ IX
//	virtual void Fx1() { cout << "Fx1" << endl; }
//	virtual void Fx2() { cout << "Fx2" << endl; }
//	//���������� ������������ �������� ������ IY
//	virtual void Fy1() { cout << "Fy1" << endl; }
//	virtual void Fy2() { cout << "Fy2" << endl; }
//};
//
//
//int main()
//{
//	cout << "Client: create an example of component" << endl;
//	CA* pA = new CA;
//
//	//�������� ��������� IX
//	IX* pIX = pA;
//
//	cout << "Client: using interface IX" << endl;
//	pIX->Fx1();
//	pIX->Fx2();
//
//	//�������� ��������� IY
//	IY* pIY = pA;
//
//	cout << "Client: using interface IY" << endl;
//	pIY->Fy1();
//	pIY->Fy2();
//
//	cout << "Client: deleting component" << endl;
//	delete pA;
//
//	return 0;
//
//}
//���������� ctrl + a ctrl + k ctrl + u
//������� ctrl + a ctrl+ k ctrl + c