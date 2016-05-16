#include <iostream>

#include "ComplexNumber.hpp"

int main(){

	ComplexNumber::complex_number my_cm1(4.5,6.7);
	ComplexNumber::complex_number my_cm2(3.9,2.1);

	std::cout << my_cm1 << std::endl;
	std::cout << "The above complex number has: " << my_cm1.getRealPart() << " as real part" << std::endl;
	std::cout << "and: " << my_cm1.getImaginaryPart() << " as imaginary part" << std::endl;
	std::cout << "The complex number: " << my_cm2 << " has conjugate the: " << my_cm2.getConjugate() << std::endl;
	std::cout << "The complex number: " << my_cm1 << " can be written in polar form: " << my_cm1.getAbsoluteValue() << "*e^(i" << my_cm1.getPhase() << ")" << std::endl;
	std::cout << my_cm1 << "*" << my_cm2 << " = " << my_cm1*my_cm2 << std::endl;
	std::cout << "(" << my_cm1 << ")/(" << my_cm2 << ") = " << my_cm1/my_cm2 << std::endl;
	std::cout << my_cm1 << " + " << my_cm2 << " = " << my_cm1 + my_cm2 << std::endl;
	std::cout << my_cm1 << " - " << my_cm2 << " = " << my_cm1 - my_cm2 << std::endl;
	//std::cout << my_cm1 << " is" << (my_cm1 == my_cm2)?" ":" not " << my_cm2 << std::endl;

}
