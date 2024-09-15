//This code takes two numbers and perform on them basic math operations without using any libraries

#include <iostream>

void performAllOperations(int a, int b)
{
	double result;
	
	result = a+b;
	std::cout<<"Adding "<<a<<" and "<<b<<" will give you "<<result<<std::endl;
	
	result = a-b;
	std::cout<<"Subtracting "<<b<<" from "<<a<<" will give you "<<result<<std::endl;
	
	result = a*b;
	std::cout<<"Multiplying "<<a<<" with "<<b<<" will give you "<<result<<std::endl;
	
	result = float(a)/float(b);
	std::cout<<"Dividing "<<a<<" with "<<b<<" will give you "<<result<<std::endl;
	
	result = a%b;
	std::cout<<"The remainder of "<<a<<" from "<<b<<" will give you "<<result<<std::endl;

	result = 1;
	for(int i=0;i<b;i++)
	{
		result = result * a;
	}
	std::cout<<a<<" to the power of "<<b<<" will give you "<<result<<std::endl;

}

int main()
{	
	int firstNumber,secondNumber;
	std::cout<<"Enter two numbers and watch the magic: ";
	std::cin>>firstNumber;
	std::cin>>secondNumber;
	performAllOperations(firstNumber, secondNumber);
	return 0;
}