#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

namespace ComplexNumber{

	/**
		A structure to handle complex numbers
	*/
	struct complex_number{
		private:
			double real;
			double imaginary;

		public:
			/**
				Creates a zero complex number
			*/
			complex_number(){
				real=0.0;
				imaginary=0.0;
			};

			/**
				Creates a complex number new_real + new_imaginary*i
			*/
			complex_number(const double new_real, const double new_imaginary){
				real = new_real;
				imaginary = new_imaginary;
			}

			/**
				Get the real part of the complex number
				@return A double containing the real part
			*/
			double Real(){
				return real;
			}

			/**
				Get the imaginary part of the complex number
				@return A double containing the imaginary part
			*/
			double Imaginary(){
				return imaginary;
			}

			/**
				Get the conjugate complex number
				@return A new complex number which is the conjugate of the initial number
			*/
			complex_number Conjugate(){
				return {real, -1 * imaginary};
			}

			/**
				Get the Reciprocal of the complex number
				@return A double containing the complex number's reciprocal
			*/
			complex_number Reciprocal(){
				return{ real / SquareOfAbsoluteValue(), -1 * imaginary / SquareOfAbsoluteValue() };
			};

			/**
				Get the complex number's absolute value
				@return A double containing the complex number's absolute value
			*/
			double AbsoluteValue(){
				return sqrt(real*real + imaginary*imaginary);
			}

			/**
				Get the complex number's absolute value squared
				@return A double containing the complex number's absolute balue squared
			*/
			double SquareOfAbsoluteValue(){
				return real*real + imaginary*imaginary;
			}

			/** 
				Get the complex numbers' phase
				@return A double containing the phase of the complex number in radians
			*/
			double Phase(){
				return atan2(imaginary,real);
			}

			/**
				Get the complex number's angle
				@return A double containing the angle of the complex number in degrees
			*/
			double Angle(){
				return Phase() * 180 / M_PI;
			}

			complex_number operator*(complex_number cm1){
				return {real*cm1.real - imaginary*cm1.imaginary,real*cm1.imaginary + imaginary*cm1.real};
			}

			complex_number operator/(complex_number cm1){
				return {(real*cm1.real+imaginary*cm1.imaginary)/(cm1.real*cm1.real + cm1.imaginary*cm1.imaginary),(imaginary*cm1.real-real*cm1.imaginary)/(cm1.real*cm1.real + cm1.imaginary*cm1.imaginary)};
			}

			complex_number operator+(complex_number cm1){
				return {real + cm1.real,imaginary + cm1.imaginary};
			}

			complex_number operator-(complex_number cm1){
				return {real - cm1.real,imaginary - cm1.imaginary};
			}

			bool operator==(complex_number cm1){
				return(real==cm1.real && imaginary==cm1.imaginary);
			}

			void operator=(const complex_number &cm1){
				real = cm1.real;
				imaginary = cm1.imaginary;
			}

			friend std::ostream& operator<<(std::ostream& stream, const complex_number &cm1){
				if (cm1.real!=0) std::cout << cm1.real ;
				if (cm1.imaginary < 0) std::cout << cm1.imaginary;
				else if (cm1.imaginary == 0) return stream;
				else std::cout << "+" << cm1.imaginary;
				std::cout <<"i";
				return stream;
			}

	};
}
