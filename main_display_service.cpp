#include<iostream>
void switched_to_magnitude_counting(); 
void switched_to_quartic_counting();
int main()
{
	std::cout << "��ѡ����Ҫʹ�õİ�飺\n"
		<< "��1�����κ������Ԫһ�η���                         ��2����������";
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