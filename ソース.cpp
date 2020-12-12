#include <iostream>
#include <cstdint>

int main() {

	std::int32_t A = 16;
	std::int32_t B = 4;

	std::int32_t C = A * B;

	std::cout << A << '*' << B << '=' << C << std::endl;
	
	double D = 1.0 / (double)B;//make invarse number. some time need like this. almost need time is meanful.
	double E = 1.0 / (double)A;

	std::cout << C << "*" << E <<'='<< C * E << std::endl;
	std::cout << C << "*" << D <<'='<< C * D << std::endl;


	return 0;
}