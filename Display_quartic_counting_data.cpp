#include<iostream>
#include"HeadFile_of_quartic_Calcular.h"
#include"HeadFile_of_Magnitude_calcular.h"
void switched_to_quartic_counting()
{
loop_quartic:float a, b, c;//����a��b��c
	std::cout << "������a��b��c��ֵ\n";
	std::cout << "a=";
	std::cin >> a;//��ʼ��a
	std::cout << "b=";
	std::cin >> b;//��ʼ��b
	std::cout << "c=";
	std::cin >> c;//��ʼ��c

	quartic_data a_b_c;
	a_b_c.a = a;
	a_b_c.b = b;
	a_b_c.c = c;

	const int Choice_limit = 2;//ֻ��ѡ������ѡ��
	int choice;
	std::cout << "��ѡ������ʹ�õĹ��ܣ������Ӧ���֣���\n"
		<< "��1��һԪ���η���    ��2�����κ���\n";
	std::cin >> choice;
	while (choice > Choice_limit)//��ѡ����Чѡ��ʱ
	{
		std::cout << "�����������û�ж�Ӧ�Ĺ��ܣ�"
			<< "���������룺\n"
			<< "��1��һԪ���η���    ��2�����κ���";
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
	std::cout << "��ѡ�����" << " һԪ���η��� ";
	quartic_equation_result results = quartic_equation(a_b_c);//a��b��c
	while (a_b_c.judge = false)//Delta < 0�������޽�ʱ
	{
		std::cout << "�������ֵ�޷�ʹ�����н�"
			<< "���������룺";
		std::cout << "a=";
		std::cin >> a_b_c.a;//��ʼ��a
		std::cout << "b=";
		std::cin >> a_b_c.b;//��ʼ��b
		std::cout << "c=";
		std::cin >> a_b_c.c;//��ʼ��c
		results = quartic_equation(a_b_c);
	}
	float x1, x2;
	x1 = results.x1;
	x2 = results.x2;
	std::cout << "���Ľ���ǣ�\n"
		<< "x1=" << x1 << ","
		<< "x2=" << x2
		<<"\n��лʹ�ñ�����";
}
void quartic_equation_display_service()
{
	std::cout << "��ѡ�����" << " ���κ��� "
		<< "�ù������ڿ���";
	
}