#include<iostream>
#include"quartic_calculator.h"
using std::cout;
using std::endl;
using std::cin;
void welcome()
{
	cout << "欢迎使用该计算器！" << endl;
	cout << "请选择您想使用的功能(一元二次方程计算请输入1，向量计算输入2)："<< endl;
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
	cout << "您选择的是一元二次方程计算" << endl;
	cout << "请输入系数值：" << endl;
	
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