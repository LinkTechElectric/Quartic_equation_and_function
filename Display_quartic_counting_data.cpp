#include<iostream>
#include"HeadFile_of_quartic_Calcular.h"
#include"HeadFile_of_Magnitude_calcular.h"
void switched_to_quartic_counting()
{
loop_quartic:float a, b, c;//声明a，b，c
	std::cout << "请输入a，b，c的值\n";
	std::cout << "a=";
	std::cin >> a;//初始化a
	std::cout << "b=";
	std::cin >> b;//初始化b
	std::cout << "c=";
	std::cin >> c;//初始化c

	quartic_data a_b_c;
	a_b_c.a = a;
	a_b_c.b = b;
	a_b_c.c = c;

	const int Choice_limit = 2;//只能选择两个选项
	int choice;
	std::cout << "请选择您想使用的功能（输入对应数字）：\n"
		<< "（1）一元二次方程    （2）二次函数\n";
	std::cin >> choice;
	while (choice > Choice_limit)//当选择无效选项时
	{
		std::cout << "您输入的数字没有对应的功能，"
			<< "请重新输入：\n"
			<< "（1）一元二次方程    （2）二次函数";
		std::cin >> choice;
	}
switch (choice)
{
case 1:
{
	quartic_equation_display_service(a_b_c);
}
break;
case 2:
{
	quartic_function_display_service(a_b_c);
}
break;
default;
break;
}
}
void quartic_function_display_service(quartic_data a_b_c)
{
	std::cout << "您选择的是" << " 一元二次方程 ";
	quartic_equation_result results = quartic_equation(a_b_c);//a，b，c
	while (a_b_c.judge = false)//Delta < 0即函数无解时
	{
		std::cout << "您输入的值无法使方程有解"
			<< "请重新输入：";
		std::cout << "a=";
		std::cin >> a_b_c.a;//初始化a
		std::cout << "b=";
		std::cin >> a_b_c.b;//初始化b
		std::cout << "c=";
		std::cin >> a_b_c.c;//初始化c
		results = quartic_equation(a_b_c);
	}
	float x1, x2;
	x1 = results.x1;
	x2 = results.x2;
	std::cout << "您的结果是：\n"
		<< "x1=" << x1 << ","
		<< "x2=" << x2
		<<"\n感谢使用本程序！";
}
void quartic_equation_display_service()
{
	std::cout << "您选择的是" << " 二次函数 "
		<< "该功能尚在开发";
	
}