//////////////////////////////////////
//
//	author Vasilionak Denis (ВДА)
//
//	brief Лабы по ++
//	
//
//	group 10903520

#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

namespace dendid4
{
	template <typename T>
	std::string toString(T val)
	{
		std::ostringstream oss;
		oss << val;
		return oss.str();
	}

	template<typename T>
	T fromString(const std::string& s)
	{
		std::istringstream iss(s);
		T res;
		iss >> res;
		return res;
	}
	void Zadanie1PrintPrivet(string val)
	{
		std::cout << val;
	}
	enum StringSides
	{
		Right = 1,
		Left,
		Front,
		Back,
		Own
	};
	using output_id = std::unordered_map<StringSides, string>;
	void Mapping(StringSides side)
	{

	}
	void Printing(string val)
	{
		std::cout << val;
	}
}
// laba 1
void lb1()
{
	std::cout << "Hi, students";
	std::cout << "IPF, Vasilionak Denis, 10903520";
}
// laba 2
/*void lb2Zadanie1(double x, double y)
{
	double result = 0;
	double chislitel = 0;
	double znaminatel = 0;
	chislitel = pow(x, 2) - 7 * x + y;
	znaminatel = y;
	if (x != 0 && y != 0)
	{
		result = chislitel / znaminatel;
		cout << "result of opiration = " << result;
	}
	else
		cout << "chislitel ili znamenatel = 0";
}

void lb2Zadanie2(double a, double x)
{
	double result = 0;
	result = pow(x, 2) - a * x;
	std::cout << result;
}*/

//laba 4
void lb4Zadanie1()
{
	using namespace dendid4;
	/*int** ptrarray = new int* [stroka];
	for (int count = 0; count < 2; count++)
		ptrarray[count] = new int[stolb];

	for (int count_row = 0; count_row < 6; count_row++)
		for (int count_column = 0; count_column < 6; count_column++)
		{
			ptrarray[count_row][count_column] = 1;
		}

	int sum = 0;
	for (int count_row = 0; count_row < 2; count_row++)
	{
		for (int count_column = 0; count_column < 5; count_column++)
		{
			if (count_column == 4)
			{
				sum = sum + ptrarray[count_row][count_column];
			}
		}
	}
	cout << "summa 4-ogo stolbca = " << sum;
	for (int count = 0; count < 2; count++)
		delete[]ptrarray[count];*/
	const int SIZE = 5;
	const int R_MIN = -50;
	const int R_MAX = 50;

	int arr[SIZE][SIZE];
	int i, j;

	srand(time(NULL));

	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
			arr[i][j] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
			// или тупо: arr[i][j] = rand()%101-50;
		}
	}

	int sum = 0;
	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
			cout << arr[i][j] << '\t';
			if (j == 3)
			{
				sum = sum + arr[i][j];
			}
		}
		cout << endl;
	}
	cout << "summa = " << sum;
}

int Sum(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void lb4Zadanie2()
{
	const int SIZE = 5;
	const int R_MIN = 10;
	const int R_MAX = 50;

	int arr[SIZE][SIZE];
	int i, j;

	srand(time(NULL));

	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
			arr[i][j] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
			// или тупо: arr[i][j] = rand()%101-50;
		}
	}

	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
			std::cout << arr[i][j]<<"   ";
		}
		std::cout << "\n";
	}

	int arr2[SIZE][SIZE];
	std::cout << "New" << endl;
	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
			arr2[i][j] = Sum(arr[i][j]);
			std::cout << arr2[i][j] << "  ";
		}
		std::cout << "\n";j
;	}
}

void reverseDiagonal()
{
	int array[5][5];
	const int R_MIN = 10;
	const int R_MAX = 50;
	for (int k = 0; k < 5; ++k)
	{
		for (int l = 0; l < 5; ++l)
		{
			array[k][l] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
			// или тупо: arr[i][j] = rand()%101-50;
		}
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j)
			std::cout << array[i][j] << "   ";
		std::cout << endl;
	}
	std::cout << "New" << endl;
	int i = 0, j = 5;
	while (i < j) {

		// For reversing elements of major
		// diagonal.
		swap(array[i][i], array[j - 1][j - 1]);

		// For reversing elements of minor
		// diagonal.
		swap(array[i][j - 1], array[j - 1][i]);

		i++;
		j--;
	}

	// Print matrix after reversals.
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j)
			std::cout << array[i][j] << "   ";
		std::cout << endl;
	}
}

void lb4Zadanie3()
{
	reverseDiagonal();
}

int main()
{
	//laba nomer 1
	//lb1();
	//laba nomer 2
	/*std::cout << "Vvedite nomer zadania";
	int nomer_zadanie = 0;
	std::cin >> nomer_zadanie;
	switch (nomer_zadanie)
	{
	case 1:
		std::cout << "vvedite chisla x and y";
		double x = 0;
		double y = 0;
		std::cin >> x, y;
		lb2Zadanie1(x,y);
	case 2:
		std::cout << "vvedite chisla a and x";
		double a = 0;
		double x = 0;
		std::cin >> a, x;
	}*/
	//laba nomer 3

	//laba nomer 4
	/*lb4Zadanie1();
	lb4Zadanie2();
	lb4Zadanie3();*/
	return 1;
}

