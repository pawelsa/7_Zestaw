#include <stdio.h>

struct complex{
	float real;
	float imaginary;
};

complex sum(complex n1, complex n2){
	complex temp;
	temp.real = n1.real + n2.real;
	temp.imaginary = n1.imaginary + n2.imaginary;
	return (temp);
}
complex difference(complex n1, complex n2){
	complex temp;
	temp.real = n1.real - n2.real;
	temp.imaginary = n1.imaginary - n2.imaginary;
	return (temp);
}
complex multiplication(complex n1, complex n2){
	complex temp;
	temp.real = n1.real * n2.real;
	temp.imaginary = n1.imaginary * n2.imaginary;
	return (temp);
}
complex division(complex n1, complex n2){
	complex temp;
	temp.real = n1.real / n2.real;
	temp.imaginary = n1.imaginary / n2.imaginary;
	return (temp);
}



int main(){

// 1	//Define a structure storing complex numbers.Define four basic operations(+, -, *, / ) as functions accepting two complex numbers and returnig a complex number as a result.
		//Additionally, define a function accepting two real numbers and composing one complex number from them.Check, how all these functions work.

	complex n1, n2, temp;
	n1.real = 2;
	n2.real = 5;
	n1.imaginary = 4;
	n2.imaginary = 8;
	temp = sum(n1, n2);

	printf("+ Re(%.2f) Im(%.2f)\n", temp.real, temp.imaginary);
	temp = difference(n1, n2);
	printf("- Re(%.2f) Im(%.2f)\n", temp.real, temp.imaginary);
	temp = multiplication(n1, n2);
	printf("* Re(%.2f) Im(%.2f)\n", temp.real, temp.imaginary);
	temp = division(n1, n2);
	printf("/ Re(%.2f) Im(%.2f)\n", temp.real, temp.imaginary);

// 2	//Define a structure containing coordinates of a vector in a 3 - dimensional space.Define an array of 5 such structures, 
		//fill them with data.Write code to find the longest vector.



// 3	//Write a function creating a string composed of n asterisks, where n is the parameter of this function.
		//The result should be a pointer to a static array defined in this function.For example, the code printf("%s", aster(10)) should print **********.
	


	return 0;
}