#include <iostream>
#include <iomanip>
#include <cmath>

double f(double x, double eps)
{
	if (x <= -2 + eps)
	{
		return (1.0 / 4) * pow(x, 3) - x + 5;
	}
	if (x > -2 + eps && x < 2 - eps);
	{
		return (x * asin(x / 2)) / (x * x + 1);
	}
	return exp(abs(cos(x))) - log(pow(x, 2) + 1);
}

int main()
{
	double x = -2;

	const double eps = 1e-8;

	std::cout << "--- Task #1 ---" << std::endl;
	std::cout << "Input x: "; std::cin >> x;
	std::cout << "f(" << x << ") = " << std::fixed << std::setprecision(6) << f(x, eps) << std::endl;
}

/* --- Task-1 ---
test_1
input: x = -2, eps = 1e-8
output: 5

test_2
input: x = 2, eps = 1e-8
output: 0.628319

test_3
input: 1 eps = 1e-8
output: 0.261799

test_4
input: 0 eps = 1e-8
output: 0

test_5
input: x = -3, eps = 1e-8
output: -1.25

test_6
input: x = 3, eps = 1e-8
output: - nan(ind)
*/