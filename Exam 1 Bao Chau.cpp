//Bao Chau
//CSIS 135 - Online Class
//Exam 1

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int getNumLetter()
{
	int NumLetter;
	cout << "\n\n"
		<< "Please enter the amount of letter on the T-Shirt: \n";
		cin >> NumLetter;
		while (NumLetter < 0 || NumLetter > 200) 
		{
			cout << "Please enter a valid amount of letter on the T-Shirt: \n";
			cin >> NumLetter;
		}
	return NumLetter;
}

double extra(int letters)
{
	double extraprice;
	if (letters == 0)
	{
		extraprice = 1;
	}
	else
	{
		extraprice = 0.20;
	}
	return extraprice;
}
double PriceCalculator(char sizes, int letters, double extraprice)
{
	double price;
	double baseprices;
	if(sizes == 'S')
	{
		baseprices = 9.99;
	}
	else if(sizes == 'M')
	{
		baseprices = 10.99;
	}
	else
	{
		baseprices = 11.99;
	}
	price = baseprices + (extraprice * letters);
	return price;
}

 void result(char sizes, int letter, double fullprice)
{
	 cout << "\nYOUR CUSTOM T-SHIRT PRICE\n"
		 << "-------------------------"
		 << "\nT-SHIRT SIZE :" << sizes
		 << "\nNUM LETTERS :" << letter
		 << "\nT-SHIRT PRICE $" << fullprice
		 << "\n";
}

int main()
{
	char selections;
	int letters;
	char sizes;
	double extraprice;
	double fullprices;
	do
	{
		cout << "\n"
			<< "CUSTOM T-SHIRT MESSAGE PRICE CALCULATOR\n"
			<< "-----------------------------------------\n"
			<< "1)Calculate the Price of a T-shirt\n"
			<< "Q)Quit\n"
			<< "Please make a selection: ";
		cin >> selections;
		cout << "\n";
		if (selections == '1')
		{
			do
			{
				cout << "\nPlease enter the size of the T-shirt: ";
				cin >> sizes;
				if (sizes == 'S')
				{
					letters = getNumLetter();
					extraprice = extra(letters);
					fullprices = PriceCalculator(sizes, letters, extraprice);
					result(sizes, letters, fullprices);
					
				}

				else if (sizes == 'M')
				{
					letters = getNumLetter();
					extraprice = extra(letters);
					fullprices = PriceCalculator(sizes, letters, extraprice);
					result(sizes, letters, fullprices);
				}

				else if (sizes == 'L')
				{
					letters = getNumLetter();
					extraprice = extra(letters);
					fullprices = PriceCalculator(sizes, letters, extraprice);
					result(sizes, letters, fullprices);
				}

				else
				{
					cout << "Invalid T-shirt sizes.\n";
				}
			} while (sizes != 'S' && sizes != 'M' && sizes != 'L');
		}
		
		else if (selections == 'Q' || selections == 'q')
		{
			cout << "Thank you for using the program.\n";
		}

		else
		{
			cout << "Invalid Selection.\n";
		}
	} while (selections != 'Q' && selections != 'q');
	return 0;
}
