//#pragma once
//#include <iostream>
//using namespace std;
//
//class IX //первый интерфейс
//{
//public:
//	virtual void Fx1() = 0;
//	virtual void Fx2() = 0;
//	virtual void Fx3() = 0;
//	virtual void Fx4() = 0;
//};
//
//class CA : public IX
//{
//public:
//	//данные экземпл€ра
//	double m_Fx2;
//	double m_Fx3;
//	double m_Fx4;
//	//реализаци€ абстрактного базового класса IX
//	virtual void Fx1() { cout << "CA::Fx1" << endl; };
//	virtual void Fx2() { cout << m_Fx2 << endl; };
//	virtual void Fx3() { cout << m_Fx3 << endl; };
//	virtual void Fx4() { cout << m_Fx4 << endl; };
//
//	//конструктор
//	CA(double d) {
//		m_Fx2 = d * d;
//		m_Fx3 = d * d * d;
//		m_Fx4 = d * d * d * d;
//	};
//};
//
//class CB : public IX {
//public:
//	//реализаци€ интерфейса IX
//	virtual void Fx1() { cout << "CA::Fx1" << endl; };
//	virtual void Fx2() { cout << "CA::Fx2" << endl; };
//	virtual void Fx3() { cout << "CA::Fx3" << endl; };
//	virtual void Fx4() { cout << "CA::Fx4" << endl; };
//};
//
//void foo(IX* pIX) {
//	pIX->Fx1();
//	pIX->Fx2();
//}
//
//int main() {
//	//создать экземпл€р CA
//	CA* pA = new CA(1.789);
//
//	//создать экземпл€р CB
//	CB* pB = new CB;
//
//	//получить указатель IX дл€ CA
//	IX* pIX = pA;
//	foo(pIX);
//
//	//получить указатель IX дл€ CB
//	pIX = pB;
//	foo(pIX);
//
//	delete pA;
//	delete pB;
//
//	return 0;
//
//}
//
//
//
////раскоммент ctrl + a ctrl + k ctrl + u
////коммент ctrl + a ctrl+ k ctrl + c