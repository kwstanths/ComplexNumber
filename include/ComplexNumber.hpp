#include <iostream>
#include <math.h>

namespace ComplexNumber{
	struct complex_number{
		private:
			double real;
			double imaginary;
		public:

			complex_number(){
				real=0.0;
				imaginary=0.0;
			};
			complex_number(const double new_real, const double new_imaginary){
				real = new_real;
				imaginary = new_imaginary;
			}
			double getRealPart(){
				return real;
			}
			double getImaginaryPart(){
				return imaginary;
			}
			complex_number getConjugate(){
				return {real, -1 * imaginary};
			}
			double getAbsoluteValue(){
				return sqrt(real*real + imaginary*imaginary);
			}
			double getSquareOfAbsoluteValue(){
				return real*real + imaginary*imaginary;
			}
			double getPhase(){
				return atan2(imaginary,real);
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
