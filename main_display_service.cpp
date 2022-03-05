#include<iostream>
void switched_to_magnitude_counting(); 
void switched_to_quartic_counting();
int main()
{
	std::cout << "请选择您要使用的板块：\n"
		<< "（1）二次函数与二元一次方程                         （2）向量计算";
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
	{
		switched_to_quartic_counting();
	}
	break;
	case 2:
	{
		switched_to_magnitude_counting();
	}
	break;
	}
	return 0;
}