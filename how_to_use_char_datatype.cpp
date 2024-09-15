// This code will make you learn how to use the char data type in a correct manner
#include <iostream> 
int main()
{	
	char myCharacter;

	std::cout<<"Case 1:"<<std::endl;
	std::cout<<"-------"<<std::endl<<std::endl;
	std::cout<<"myCharacter = \'3\';"<<std::endl;
	std::cout<<"std::cout<<myCharacter<<std::endl;"<<std::endl;

	myCharacter = '3';
	std::cout<<"Output: "<<myCharacter<<std::endl;
	std::cout<<"Conclusion: This basically prints the character inside the quotes, we cannot type more than one character, it can be a single letter, symbol or number"<<std::endl<<std::endl;

	std::cout<<"_______________________________________________________________________________________________________________________________________________________"<<std::endl<<std::endl;

	std::cout<<"Case 2:"<<std::endl;
	std::cout<<"-------"<<std::endl<<std::endl;
	std::cout<<"myCharacter = \'3\';"<<std::endl;
	std::cout<<"std::cout<<int(myCharacter)<<std::endl;"<<std::endl;

	myCharacter = '3';
	std::cout<<"Output: "<< int(myCharacter)<<std::endl;
	std::cout<<"Conclusion: This basically prints ASCII code of the character '3' "<<std::endl<<std::endl;
    
	std::cout<<"_______________________________________________________________________________________________________________________________________________________"<<std::endl<<std::endl;


	std::cout<<"Case 3:"<<std::endl;
	std::cout<<"-------"<<std::endl<<std::endl;
	std::cout<<"myCharacter = 3;"<<std::endl;
	std::cout<<"std::cout<<myCharacter<<std::endl;"<<std::endl;

	myCharacter = 3;
	std::cout<<"Output: "<<myCharacter<<std::endl;
	std::cout<<"This basically prints the symbol that has a corresponding ASCII code: 3 "<<std::endl<<std::endl;
	
	std::cout<<"_______________________________________________________________________________________________________________________________________________________"<<std::endl<<std::endl;


	std::cout<<"Case 4:"<<std::endl;
	std::cout<<"-------"<<std::endl<<std::endl;
	std::cout<<"myCharacter = 3;"<<std::endl;
	std::cout<<"std::cout<<int(myCharacter)<<std::endl;"<<std::endl;

	myCharacter = 3;
	std::cout<<"Output: "<<int(myCharacter)<<std::endl;
	std::cout<<"This basically prints the number 3, but mycharacter cannot hold a value more than 127"<<std::endl<<std::endl;

	std::cout<<"_______________________________________________________________________________________________________________________________________________________"<<std::endl<<std::endl;


	std::cout<<"Conclusion and Tips:"<<std::endl;
	std::cout<<"--------------------"<<std::endl;
	std::cout<<"1- Dealing with char data type can be confusing so you need to focus on how you can use it efficiently"<<std::endl;
	std::cout<<"2- If you want to store a variable that will contain a number less than 127, the best thing is to store it into a char to save resources"<<std::endl;
	std::cout<<"3- If you store a number into a char and you want to print it or use it do not forget to type cast it into an int so that the compiler knows that it's an integer"<<std::endl;
	std::cout<<"4- If we deal with positive small variables, you can increase the range of the char to include larger values by specifying that it is unsigned char"<<std::endl;
	std::cout<<"5- You can print the character as it is, the ASCII code of the character, the symbol corresponding to the ASCII code or the integer value as it is"<<std::endl;
	std::cout<<"6- That's why you need to know the difference between all these examples."<<std::endl;
	
	return 0;	
}