#include <iostream>
#include <cstddef>

#include "math/add.h"
#include "math/div.h"
#include "print/print.h"

int main(int argc, char **argv)
{
	float first_no, second_no, result_add, result_div;
	std::cout << "Enter first number\t";
	std::cin >> first_no;
	std::cout << "Enter second number\t";
	std::cin >> second_no;

	result_add = add(first_no, second_no);
	result_div = div(first_no, second_no);

	print_result("Addition", result_add);
	print_result("Devision", result_div);

	return EXIT_SUCCESS;
}
