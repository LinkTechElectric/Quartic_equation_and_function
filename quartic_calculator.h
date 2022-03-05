#include<cmath>
#include<complex>
using std::complex;
struct result_of_quartic_equation
{
	complex<float>  x1;
	complex<float> x2;
	float delta;
};
namespace quartic_counting
{
	class quartic_equation_counting
	{
	public:
		quartic_equation_counting()
		{
			a_b_c.a = 0;
			a_b_c.b = 0;
			a_b_c.c = 0;
			counting_delta();
		}
		~quartic_equation_counting()
		{

		}
		
		void set_a(float a) { a_b_c.a = a; };
		void set_b(float b) { a_b_c.b = b; };
		void set_c(float c) { a_b_c.c = c; };
		void counting_delta() { delta = a_b_c.b * a_b_c.b / (4 * a_b_c.a * a_b_c.c); };

		float quartic_equation(float a,float b,float c);
	private:
		struct counting_data
		{
			float a;
			float b;
			float c;
		};
		
		counting_data a_b_c;
		float delta;

	};
	
}
float quartic_equation(float a, float b, float c)
{
	void set_a(float a);
	void set_b(float b);
	void set_c(float c);
	void counting_delta();
	result_of_quartic_equation result_turning_back;
	
}

