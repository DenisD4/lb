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
//#include <vector>
#include <unordered_map>
#include <cmath>
#include <string>
//include <sstream>
//#include <clocale>
//#include <locale>
#include <Windows.h>
using namespace std;

namespace dendid4
{
	void bubbleSort(int list[], int listLength)
	{
		while (listLength--)
		{
			bool swapped = false;

			for (int i = 0; i < listLength; i++)
			{
				if (list[i] > list[i + 1])
				{
					swap(list[i], list[i + 1]);
					swapped = true;
				}
			}

			if (swapped == false)
				break;
		}
	}

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
//void lb1()
//{
//	std::cout << "Hi, students" << endl;
//	std::cout << "IPF, Vasilionak Denis, 10903520";
//}
//// laba 2
//void lb2Zadanie1(double x, double y)
//{
//	double result = 0;
//	double chislitel = 0;
//	double znaminatel = 0;
//	chislitel = pow(x, 2) - 7 * x + y;
//	znaminatel = y;
//	if (x != 0 && y != 0)
//	{
//		result = chislitel / znaminatel;
//		cout << "result of opiration = " << result;
//	}
//	else
//		cout << "chislitel ili znamenatel = 0";
//}
//
//void lb2Zadanie2(double a, double x)
//{
//	double result = 0;
//	result = pow(x, 2) - a * x;
//	std::cout << "result = " << result;
//}
////laba 3
//void lb3Zadanie1()
//{
//	const int R_MIN = 101;
//	const int R_MAX = 200;
//	srand(time(NULL));
//	int mas[14];
//	for (int i = 0; i < 14; i++)
//	{
//		mas[i] = R_MIN + rand() % (R_MAX - R_MIN);
//		std::cout << mas[i] << "  ";
//	}
//}
//
//void lb3Zadanie2()
//{
//	for (int i = 0; i < 51; i++)
//		std::cout << i << endl;
//}



//int PerevodV2(int val)
//{
//	int num = 0, t = 0, d = 1;
//	num = val;
//	while (num)
//	{
//		t += (num % 2) * d;
//		//cout«t;
//		num = num / 2;
//		d = d * 10; // razryad
//	}
//	return t;
//}

//void lb3Zadanie3()
//{
//	const int SIZE = 5;
//	const int R_MIN = -50;
//	const int R_MAX = 50;
//
//	int arr[SIZE];
//	int i;
//
//	srand(time(NULL));
//
//	for (i = 0; i < SIZE; ++i)
//	{
//		arr[i] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
//		std::cout << arr[i] << "  ";
//	}
//	std::cout << endl << "Sort" << endl;
//	bubbleSort(arr,SIZE);
//	for (i = 0; i < SIZE; ++i)
//	{
//		std::cout << arr[i] << "  ";
//	}
//	std::cout << endl << "Binary" << endl;
//	for (i = 0; i < SIZE; ++i)
//	{
//		arr[i] = PerevodV2(arr[i]);
//		std::cout << arr[i] << "  ";
//	}
//}
//
////laba 4
//void lb4Zadanie1()
//{
//	using namespace dendid4;
//	/*int** ptrarray = new int* [stroka];
//	for (int count = 0; count < 2; count++)
//		ptrarray[count] = new int[stolb];
//
//	for (int count_row = 0; count_row < 6; count_row++)
//		for (int count_column = 0; count_column < 6; count_column++)
//		{
//			ptrarray[count_row][count_column] = 1;
//		}
//
//	int sum = 0;
//	for (int count_row = 0; count_row < 2; count_row++)
//	{
//		for (int count_column = 0; count_column < 5; count_column++)
//		{
//			if (count_column == 4)
//			{
//				sum = sum + ptrarray[count_row][count_column];
//			}
//		}
//	}
//	cout << "summa 4-ogo stolbca = " << sum;
//	for (int count = 0; count < 2; count++)
//		delete[]ptrarray[count];*/
//	const int SIZE = 5;
//	const int R_MIN = -50;
//	const int R_MAX = 50;
//
//	int arr[SIZE][SIZE];
//	int i, j;
//
//	srand(time(NULL));
//
//	for (i = 0; i < SIZE; ++i)
//	{
//		for (j = 0; j < SIZE; ++j)
//		{
//			arr[i][j] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
//			// или тупо: arr[i][j] = rand()%101-50;
//		}
//	}
//
//	int sum = 0;
//	for (i = 0; i < SIZE; ++i)
//	{
//		for (j = 0; j < SIZE; ++j)
//		{
//			cout << arr[i][j] << '\t';
//			if (j == 3)
//			{
//				sum = sum + arr[i][j];
//			}
//		}
//		cout << endl;
//	}
//	cout << "summa = " << sum;
//}
//
//int Sum(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//
//void lb4Zadanie2()
//{
//	const int SIZE = 5;
//	const int R_MIN = 10;
//	const int R_MAX = 50;
//
//	int arr[SIZE][SIZE];
//	int i, j;
//
//	srand(time(NULL));
//
//	for (i = 0; i < SIZE; ++i)
//	{
//		for (j = 0; j < SIZE; ++j)
//		{
//			arr[i][j] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
//			// или тупо: arr[i][j] = rand()%101-50;
//		}
//	}
//
//	for (i = 0; i < SIZE; ++i)
//	{
//		for (j = 0; j < SIZE; ++j)
//		{
//			std::cout << arr[i][j]<<"   ";
//		}
//		std::cout << "\n";
//	}
//
//	int arr2[SIZE][SIZE];
//	std::cout << "New" << endl;
//	for (i = 0; i < SIZE; ++i)
//	{
//		for (j = 0; j < SIZE; ++j)
//		{
//			arr2[i][j] = Sum(arr[i][j]);
//			std::cout << arr2[i][j] << "  ";
//		}
//		std::cout << "\n";j
//;	}
//}
//
//void reverseDiagonal()
//{
//	int array[5][5];
//	const int R_MIN = 10;
//	const int R_MAX = 50;
//	for (int k = 0; k < 5; ++k)
//	{
//		for (int l = 0; l < 5; ++l)
//		{
//			array[k][l] = rand() % int((R_MAX - R_MIN + 1) + R_MIN);
//			// или тупо: arr[i][j] = rand()%101-50;
//		}
//	}
//
//	for (int i = 0; i < 5; ++i) {
//		for (int j = 0; j < 5; ++j)
//			std::cout << array[i][j] << "   ";
//		std::cout << endl;
//	}
//	std::cout << "New" << endl;
//	int i = 0, j = 5;
//	while (i < j) {
//
//		// For reversing elements of major
//		// diagonal.
//		swap(array[i][i], array[j - 1][j - 1]);
//
//		// For reversing elements of minor
//		// diagonal.
//		swap(array[i][j - 1], array[j - 1][i]);
//
//		i++;
//		j--;
//	}
//
//	// Print matrix after reversals.
//	for (int i = 0; i < 5; ++i) {
//		for (int j = 0; j < 5; ++j)
//			std::cout << array[i][j] << "   ";
//		std::cout << endl;
//	}
//}
//
//void lb4Zadanie3()
//{
//	reverseDiagonal();
//}

//laba 5
void lb5Zadanie1()
{
	string stroka;
	std::cout << "Vvedite stroku";
	getline(cin, stroka);
	std::cout << stroka.substr(2);
}

void lb5Zadanie2(int val)
{
	
	int count_words = 0;
	string slovo;
	string text = "The text in console.";
	std::cout << text << endl;
	for (int i = 0; i < text.length(); i++)
	{
		if ((text.at(i) == ' ' || text.at(i) == '.') && text.at(i) != '\0')
		{
			count_words++;
		}
		else
		{
			slovo.push_back(text.at(i));
		}
		if ((text.at(i) == ' ' || text.at(i) == '.') && slovo.length() > val)
		{
			std::cout << slovo << endl;
			//slovo.clear();
		}
		if (text.at(i) == ' ' || text.at(i) == '.')
			slovo.clear();
	}
	std::cout << "Kol-vo slov = " << count_words;
}

void lb5Zadanie3()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "RUS");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string str;
	str = "insert smth русское";
	std::cout << str << endl;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '?') {
			str[i] = '*';
		}
		cout << str[i];
	}
}

void lb6Zadanie1()
{

}

int main()
{
	//laba nomer 1
	//lb1();
	
	//laba nomer 2
	/*std::cout << "Vvedite nomer zadania" << "\n";
	int nomer_zadanie = 0;
	std::cin >> nomer_zadanie;
	switch (nomer_zadanie)
	{
	case 1:
		std::cout << "vvedite chisla x and y" << "\n";
		double x;
		double y;
		std::cin >> x;
		std::cin >> y;
		lb2Zadanie1(x, y);
		break;
	case 2:
		std::cout << "vvedite chisla a and x" << "\n";
		double a;
		double k;
		std::cin >> a;
		std::cin >> k;
		lb2Zadanie2(a, k);
		break;
	default:
		std::cout << "Takogo zadania net";
	}*/

	//laba nomer 3
	//lb3Zadanie1();
	//lb3Zadanie2();
	//lb3Zadanie3();
	// 
	//laba nomer 4
	//lb4Zadanie1();
	//lb4Zadanie2();
	//lb4Zadanie3();

	//laba 5
	//lb5Zadanie1();
	/*int kolvo_bukv;
	std::cout << "Vvedite chislo bukv" << endl;
	std::cin >> kolvo_bukv;
	lb5Zadanie2(kolvo_bukv);*/
	//lb5Zadanie3();

	return 1;
}

