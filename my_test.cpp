#include <iostream>

#include "ComplexNumber.hpp"

int main(){

	ComplexNumber::complex_number my_cm1(4.5,6.7);
	ComplexNumber::complex_number my_cm2(3.9,2.1);

	std::cout << my_cm1 << std::endl;
	std::cout << "The above complex number has: " << my_cm1.Real() << " as real part" << std::endl;
	std::cout << "and: " << my_cm1.Imaginary() << " as imaginary part" << std::endl;
	std::cout << "The complex number: " << my_cm2 << " has conjugate the: " << my_cm2.Conjugate() << std::endl;
	std::cout << "The complex number: " << my_cm1 << " can be written in polar form: " << my_cm1.AbsoluteValue() << "*e^(i" << my_cm1.Phase() << ")" << std::endl;
	std::cout << "Or: " << my_cm1.AbsoluteValue() << " " << my_cm1.Angle() << "\370" << std::endl;
	std::cout << my_cm1 << "*" << my_cm2 << " = " << my_cm1*my_cm2 << std::endl;
	std::cout << "(" << my_cm1 << ")/(" << my_cm2 << ") = " << my_cm1/my_cm2 << std::endl;
	std::cout << my_cm1 << " + " << my_cm2 << " = " << my_cm1 + my_cm2 << std::endl;
	std::cout << my_cm1 << " - " << my_cm2 << " = " << my_cm1 - my_cm2 << std::endl;
	//std::cout << my_cm1 << " is" << (my_cm1 == my_cm2)?" ":" not " << my_cm2 << std::endl;

	system("PAUSE");
}


