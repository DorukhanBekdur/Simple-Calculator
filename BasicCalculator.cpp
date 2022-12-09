#include <iostream>
using namespace std;
int main()
{
	int num1,num2,result;
	char process;
		
		//Introduction and how to use ?
		cout << "-WELCOME THE BASIC CALCULATOR-" <<endl;
		cout << "How to use ?"<<endl;
		cout << "1)First, enter the first number."<<endl;
		cout << "2)Then type the symbol of the operation you want to do. Then enter the second number."<<endl;
		cout << "3)Finally, press the enter key."<<endl;
		cout << "---------------------------------------------------------------------------------------------"<<endl;
		cin >> num1 >> process >> num2;
	
	if (process == '+')//For addition
			result = num1 + num2;
		else if (process == '-')//For extraction
			result = num1 - num2;
		else if (process == '*')//For multiplication
			result = num1 * num2;
		else if (process == '/')//For division
		{
				if (num2 == 0 )
				{
					cout << " Partition cannot be 0 !!!" <<endl;
					return 0; //Program terminates 
				}
			result = num1 / num2;
		}
		else if (process = '%')//Remainder from division by 2
			result = num1 % num2;
	else
	{
		return 0;
	}
		cout << "Result : ";
		cout << num1 << " " << process << " " << num2 << " = " << result;
	
	return 0;	
}
