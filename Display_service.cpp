#include<iostream>
#include"quartic_calculator.h"
using std::cout;
using std::endl;
using std::cin;
void welcome()
{
	cout << "��ӭʹ�øü�������" << endl;
	cout << "��ѡ������ʹ�õĹ���(һԪ���η��̼���������1��������������2)��"<< endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: {switched_to_quartic_counting(); }
	case 2: {switched_to_vector_counting(); }
	default:
		break;
	}
}
void switched_to_quartic_counting()
{
	quartic_counting::quartic_equation_counting course_1;
	cout << "��ѡ�����һԪ���η��̼���" << endl;
	cout << "������ϵ��ֵ��" << endl;
	
	float a, b, c; 
	cout << "a =" << endl;
	cin >> a;
	cout << "b =" << endl;
	cin >> b;
	cout << "c =" << endl;
	cin >> c; 

	course_1.quartic_equation(a,b,c);

}
void switched_to_vector_counting()
{

}