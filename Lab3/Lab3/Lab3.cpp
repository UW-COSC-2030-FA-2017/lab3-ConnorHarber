//Connor harber
//9/25/2017
//lab3

#include<iostream>
using namespace std;


//part 4-5
void factorial()
{
	bool DONE = false;
	long int nc = 1;
	//float sumc = 1;
	double sumc = 1;
	float temp = 0;
	
	while (!DONE)
	{
		 temp = sumc;
		sumc *= nc;
		if (nc > 30)
		{
			cout << "n:  " << nc << "   sum:  " << sumc << "\n";
		}
		if (sumc == INFINITY)
		{
	
			DONE = true;
		}
		else
		{
			nc++;
		}
	}
	cout << "Last possible n: " << nc - 1 <<  " value that causes overflow is:  " << temp << "\n";
}
///////////////////////////////////////////////////////////////////////
//part 6

void strange()
{
	bool DONE = false;
	double sum = 0;
	//double suma = 1;
	while (!DONE)
	{
		for (short int n = 1; n < 25; n++)
		{
			for (int i = 1; i <= n; i++)
			{
				sum += (1.0 / n);

			}
			if (sum < 0 || sum > 0)
			{
				DONE = true;
			}
			
				sum = sum - 1;
				cout << "n values: " << n << " sum values: " << sum << endl;
		}
	}
	// expected value should be 0
	//float point values loose reliability at n =9
	//double looses reliability at n = 5
	//The reason behind this is that booleans are able to 
	//store for higher precision than Floats, more indepth explination given in part below
}
//////////////////////////////////////////////////////////////
//Part 7/8
void part7()
{
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i =" << i << endl;
	}
}
//the float i = 4.4 is not less than 4.4, It should stop at 4.2
//the double more accuralty stops at 4.2 < 4.4 , because like example 
//6 doubles will always provide a more accurate storage than floats,
// because floats store in exponential notation which looses accuracy when
//adding too them.

////////////////////////////////////////////
int main()
{
	bool DONE = false;
	short int na = 1;
	short int suma = 0;
	bool STOP = false;
	long int nb = 1;
	long int sumb = 0;

	// Part 1 -2
	while (!DONE)
	{
		suma += na;
		if (na > 250)
		{
			cout << "n:  " << na << "   sum:  " << suma << "\n";
		}
		if (suma < 0)
		{
			DONE = true;
		}
		else
		{
			na++;
		}
	}
	cout << "Value that causes overflow is:  " << na << "\n";

	//Part 3
	while (!STOP)
	{
		sumb += nb;
		if (nb > 65530)
		{
			cout << "n:  " << nb << "   sum:  " << sumb << "\n";
		}
		if (sumb < 0)
		{
			STOP = true;
		}
		else
		{
			nb++;
		}
	}
	cout << "Value that causes overflow is:  " << nb << "\n";
	factorial();
	strange();
	part7();

}


