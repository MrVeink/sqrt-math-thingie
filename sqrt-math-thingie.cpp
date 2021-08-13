#include <iostream>
#include <cmath>

int main() {
	float a;
	std::cout << "Type value A";
	std::cin >> a;
	float b;
	std::cout << "Type value B";
	std::cin >> b;
	float c;
	std::cout; c = pow(a, 2) + pow(b, 2);
	float cr;
	std::cout; cr = sqrt(c);
	std::cout << cr << "cm = " << cr / 2.54 << "inches";
	
    return 0;
}
