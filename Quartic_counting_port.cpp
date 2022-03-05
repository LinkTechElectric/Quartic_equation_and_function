#include<cmath>
#include"HeadFile_of_quartic_Calcular.h"
quartic_equation_result quartic_equation(quartic_data a_b_c)
{
	//读取a，b，c和计算delta
	float a = a_b_c.a;
	float b = a_b_c.b;
	float c = a_b_c.c;
	float Delta = b * b - 4 * a * c;
	quartic_equation_result equation_back;//返回一个在HeadFile_of_quartic_Calcular中定义的方程返回结构
    equation_back.delta = Delta;
		if (Delta < 0)//如果delta < 0，函数停止运算并回复带有判断结果bool值的结构
		{
			equation_back.judge = false;
			return equation_back;
		}
	equation_back.judge = true;
	float x1 = (-b + sqrt(Delta)) / (2 * a * c);
	float x2 = (-b - sqrt(Delta)) / (2 * a * c);
	equation_back.x1 = x1;
	equation_back.x2 = x2;
	return equation_back;
}
quartic_function_result quartic_function(quartic_data a_b_c)
{
    float a = a_b_c.a;
	float b = a_b_c.b;
	float c = a_b_c.c;
	quartic_function_result function_back;
	if (a == 0)
	{
		function_back.judge_a = false;
	}
	function_back.judge_a = true;
	function_back.symmetrical_shaft_position = b / (2 * a);
	quartic_equation_result databack_of_quartic_equation = quartic_equation(a_b_c);
	if (databack_of_quartic_equation.delta > 0)
	{
		function_back.direction = true;
	}
	else if (databack_of_quartic_equation.delta <= 0)
	{
		     function_back.direction = false;
	}
	function_back.zero_point_1.y = function_back.zero_point_2.y = 0;
	if (databack_of_quartic_equation.delta == 0)
	{
		function_back.judge_zero_point = true;
		function_back.zero_point_1.x = function_back.zero_point_2.x = databack_of_quartic_equation.x1;
	}
	else if (databack_of_quartic_equation.delta < 0 )
	{
		function_back.judge_zero_point = false;
	}
	else if (databack_of_quartic_equation.delta >0)
	{
		function_back.judge_zero_point = true;
		function_back.zero_point_1.x = databack_of_quartic_equation.x1;
		function_back.zero_point_2.x = databack_of_quartic_equation.x2;
	}
	function_back.pinnacle_position.x = function_back.symmetrical_shaft_position;
	function_back.pinnacle_position.y = (4 * a * c) * (4 * a * c) / (4 * a);
    return function_back;
}
