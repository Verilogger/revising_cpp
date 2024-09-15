// This code calculates the size of data types in c++ and their ranges (we must include <climits>)

#include <iostream>
#include <climits> 
int main()
{	
	std::cout<<"Important information about data types' size and limits in C++:"<<std::endl;
	std::cout<<"---------------------------------------------------------------"<<std::endl<<std::endl;
	std::cout<<"The size of \"short\" data type is: "<<sizeof(short)<<" bytes "<<std::endl;
	std::cout<<"The largest number that can be respresented by short is: "<<SHRT_MAX<<std::endl;
	std::cout<<"The smallest number that can be respresented by short is: "<<SHRT_MIN<<std::endl;
	std::cout<<"The largest number that can be respresented by unsigned short is: "<<USHRT_MAX<<std::endl;

	std::cout<<"_____________________________________________________________________________"<<std::endl<<std::endl;

	std::cout<<"The size of \"int\" data type is: "<<sizeof(int)<<" bytes "<<std::endl;
	std::cout<<"The largest number that can be respresented by int is: "<<INT_MAX<<std::endl;
	std::cout<<"The smallest number that can be respresented by int is: "<<INT_MIN<<std::endl;
	std::cout<<"The largest number that can be respresented by unsigned int is: "<<UINT_MAX<<std::endl;

	std::cout<<"_____________________________________________________________________________"<<std::endl<<std::endl;

	std::cout<<"The size of \"long\" data type is: "<<sizeof(long)<<" bytes "<<std::endl;
	std::cout<<"The largest number that can be respresented by long is: "<<LONG_MAX<<std::endl;
	std::cout<<"The smallest number that can be respresented by long is: "<<LONG_MIN<<std::endl;
	std::cout<<"The largest number that can be respresented by unsigned long is: "<<ULONG_MAX<<std::endl;

	std::cout<<"_____________________________________________________________________________"<<std::endl<<std::endl;

	std::cout<<"The size of \"long long\" data type is: "<<sizeof(long long)<<" bytes "<<std::endl;
	std::cout<<"The largest number that can be respresented by long long is: "<<LLONG_MAX<<std::endl;
	std::cout<<"The smallest number that can be respresented by long long is: "<<LLONG_MIN<<std::endl;
	std::cout<<"The largest number that can be respresented by unsigned long long is: "<<ULLONG_MAX<<std::endl;
	
	std::cout<<"_____________________________________________________________________________"<<std::endl<<std::endl;
	
	std::cout<<"Conclusion and Tips:"<<std::endl;
	std::cout<<"--------------------"<<std::endl;
	std::cout<<"1- Always use unsigned data types when you are working with a variable which can never be negative"<<std::endl;
	std::cout<<"2- Always use the smallest data type that can fit for your application to save memory"<<std::endl;
	std::cout<<"3- For small numbers which are near 32k use short"<<std::endl;
	std::cout<<"4- Use integers for variables that will have a value more than 32k and less than 4 billion"<<std::endl;
	std::cout<<"5- If you are working with very huge numbers, use long long"<<std::endl;
	std::cout<<"6- If you forgot the size of data types in bytes use sizeof() to easily print its size"<<std::endl;
	std::cout<<"7- If you forgot the ranges of the data types you must include <climits> and print SHRT_MAX, INT_MAX, ULONG_MAX, LLONG_MAX "<<std::endl;
	return 0;	
}