//This program evaluates truth table entries for a given boolean expression.

#include<iostream>

using namespace std;

//This function solves the particular expression.
int Solve1(int Par1, int Par2)
{
	bool Check;
	Check = !(Par1 || Par2);

	//This return 1 if the result is true and 0 if it is false.
	if (Check)
	{
		return 1;
	}
	return 0;
}


//This function also solves the particular expression.
int Solve2(int Par1, int Par2)
{
	bool Check;
	Check = !Par1 && !Par2;

	//This return 1 if the result is true and 0 if it is false.
	if (Check)
	{
		return 1;
	}
	return 0;
}


//This function solves the given expression.
int Solve3(int Par1, int Par2,int Par3)
{
	bool Check;
	Check = (Par1 || Par2) && !Par3;

	//This return 1 if the result is true and 0 if it is false.
	if (Check)
	{
		return 1;
	}
	return 0;
}

//This function also solves the given expression.
int Solve4(int Par1, int Par2,int Par3)
{
	bool Check;
	Check = !(Par1 || (!Par2 && Par3));

	//This return 1 if the result is true and 0 if it is false.
	if (Check)
	{
		return 1;
	}
	return 0;
}


int main()
{
	int A, B, C;
	char CH;

	//This do-while loop is used if you want to print more than one time or a complete table.
	do
	{
		system("Cls");
		

		//Taking input values of A,B and C from user.
		cout <<endl<< "Please input the value of Variable 'A': " << endl;
		cin >> A;
		cout << endl << "Please input the value of Variable 'B': " << endl;
		cin >> B;
		cout << endl << "Please input the value of Variable 'C': " << endl;
		cin >> C;


	//If A,B and C have values either '0' or '1', only then the program runs.
		if ( ( A==1 || A==0 ) && ( B==0 || B==1) && ( C==1 || C==0 ) )
		{
			int Exp1, Exp2, Exp3, Exp4;

			Exp1 = Solve1(A, B);
			Exp2 = Solve2(A, B);
			Exp3 = Solve3(A, B, C);
			Exp4 = Solve4(A, B, C);

			cout << endl << "A\t" << "B\t" << "C\t";
			cout << "!(A || B)\t" << "!A && !B\t" << "(A || B) && !C\t" << "!(A || (!B && C))" << endl;


			cout << endl << A << "\t" << B << "\t" << C << "\t   ";
			cout << Exp1 << "\t\t  " << Exp2 << "\t\t  " << Exp3 << "\t\t  " << Exp4 << endl;

			system("Pause");
			system("Cls");

			//Input y/y if you want to run another time.
			cout << "Please input (Y/y) or (N/n) to either run or close the program: " << endl;
			cin >> CH;

		}

		//Else print invalid input message and program terminates.
		else
		{

			cout << endl << "You have entered invalid input, the program ends." << endl;
			exit(0);

		}

	} while (CH==Y'||CH==y');

	system("Pause");
	return 0;
}