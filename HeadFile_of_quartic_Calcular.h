struct quartic_data
{
	float a;
	float b;
	float c;
	bool judge;
};
struct quartic_equation_result
{
	float x1;
	float x2;
	float delta;
	bool judge;
};
struct rectangular_position
{
	float x;
	float y;
};
struct quartic_function_result
{
	bool judge_a;
	bool direction;
	bool judge_zero_point;
	float symmetrical_shaft_position;//¶Ô³ÆÖá
	rectangular_position zero_point_1;
	rectangular_position zero_point_2;
	rectangular_position pinnacle_position;//º¯Êý¶¥µã
};
quartic_equation_result quartic_equation(quartic_data a_b_c);
quartic_function_result quartic_function(quartic_data a_b_c);
void quartic_function_display_service();
void quartic_equation_display_service(quartic_data a_b_c);
void switched_to_quartic_counting();
const bool up = false;
const bool down = true;