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

	std::cout<<"_______________________________________________________________________________________________________________________________________________________"<<std::endl<<std::endl;


	std::cout<<"Conclusion and Tips:"<<std::endl;
	std::cout<<"--------------------"<<std::endl;
	std::cout<<"1- Functions can be declared in the top of the code or in a header file instead of declaring and defining it at the top of the code but I prefer the second way"<<std::endl;
	std::cout<<"2- If the function returns a value then we must specify the return value"<<std::endl;
	std::cout<<"3- If the function does not return a value then its return type is void"<<std::endl;
	std::cout<<"4- We must specify the data type of function arguments if the function takes inputs"<<std::endl;
	std::cout<<"5- In declaring a function we put a ; in the end unlike while declaring and defining simultaneously"<<std::endl;
	std::cout<<"6- Functions make our code reusable and it is more intuitive to capture every chunk of code into a function to make that chunk easier to comprehend"<<std::endl;
	std::cout<<"7- C++ has no exponent operator"<<std::endl;
	std::cout<<"8- To implement the exponent operator we need a for loop with number of iterations equal to the exponent and we create a variable and set it equal to one and multiply it by the base"<<std::endl;
	std::cout<<"9- The % operator only works on integers"<<std::endl;
	std::cout<<"10- We need to type cast the variable data type from int to float if we are a number by a bigger one"<<std::endl;
	
	return 0;
}

