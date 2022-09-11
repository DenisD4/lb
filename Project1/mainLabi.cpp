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
#include <map>
#include <algorithm>
#include "conio.h"

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
	std::cout << "Vvedite stroku" << endl;;
	std::cin >> stroka;
	std::cout << stroka.substr(2);
	stroka.clear();
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

//laba 6
void lb6Zadanie1()
{
	tm ptm;
	time_t t = time(0);
	localtime_s(&ptm, &t);
	std::cout << ptm.tm_min << "/" << ptm.tm_hour << "/" << ptm.tm_sec << "/" << (ptm.tm_year + 1900);
}

void time_to_seconds(size_t& time, size_t& hrs, size_t& min, size_t& sec) {
	time = sec + min * 60 + hrs * 3600;
}

void seconds_to_time(size_t& time, size_t& hrs, size_t& min, size_t& sec)
{
	hrs = time / 3600;
	time = time % 3600;
	min = time / 60;
	time = time % 60;
	sec = time;
}

void lb6Zadanie2()
{
	std::cout << "Vvedite vrimia v formate h:m:s" << "\n";
	size_t hrs;
	size_t min;
	size_t sec;
	size_t seconds;
	size_t seconds_rek;
	std::cin >> hrs>> min >> sec;
	size_t time = 0;
	time_to_seconds(time, hrs, min, sec);
	std::cout << "Vvedite seconds duration of peredacha" <<  "\n";
	std::cin >> seconds;
	std::cout << "Vvedite seconds duration of reklama" << "\n";
	std::cin >> seconds_rek;
	size_t times = trunc(seconds / 300);
	size_t obshii = (times * seconds_rek) + seconds;
	time += obshii;
	seconds_to_time(time, hrs, min, sec);
	if (hrs >= 24 && min < 10)
	{
		hrs = hrs - 24;
		std::cout << "0" << hrs << " : " << "0" << min << " : " << sec << std::endl;
	}
	else if (hrs >= 24 && min > 10)
		std::cout << "0" << hrs << " : " << min << " : " << sec << std::endl;
	//else if (hrs < 24 )
	//std::cout << hrs << " : " << min << " : "<< sec << std::endl;
}
//laba 7
void lb7Zadanie1()
{
}
//laba 8 z1
namespace lb8
{
	enum List_tovarov
	{
		Chips = 0,
		Cola,
		Cheese,
		Whiskey,
		Cigaretts,
		Fanta
	};
	using Tovar_Colvo = std::unordered_map<List_tovarov, int>;
	using Tovar_name = std::unordered_map<List_tovarov, std::string>;
	class CProdavec
	{
	public:

		CProdavec(std::string Name) :m_name(Name)
		{}
		~CProdavec() {};
		void getName() { std::cout << m_name << std::endl; };
		std::unordered_map<List_tovarov, int> giveTraitsToColvoOfTovar()
		{
			std::unordered_map<List_tovarov, int> new_map;
			std::cout << "Vvedite col-vo tovarov" << std::endl;
			for (auto p : naim_tovar)
			{
				std::cout << p.second << ": ";
				int new_kolvo;
				std::cin >> new_kolvo;
				new_map[p.first] = new_kolvo;
				std::cout << "New = " << new_kolvo << " Old = " << tovar_colvo.at(p.first) << endl;
			}
			return new_map;
		};

		std::unordered_map<List_tovarov, int> giveTraitsToCenaOfTovar()
		{
			std::unordered_map<List_tovarov, int> new_map;
			std::cout << "Vvedite cenu tovarov v Rb" << std::endl;
			for (auto p : naim_tovar)
			{
				std::cout << p.second << ": ";
				int new_kolvo;
				std::cin >> new_kolvo;
				new_map[p.first] = new_kolvo;
			}
			return new_map;
		}

		int get_maxCena(std::unordered_map<List_tovarov, int> max_price)
		{
			int id = 0;
			int maxValue = 0;
			
			for (const auto& entry : max_price)
			{
				if (maxValue < entry.second)
				{
					maxValue = entry.second;
					id = entry.first;
				}
			}
			std::cout << "Max : " << naim_tovar.at(List_tovarov(id)) << " Cena : " << maxValue << " Rub";
			return maxValue;
		}

		int get_maxCenaDef()
		{
			int id = 0;
			int maxValue = 0;

			for (const auto& entry : ceni)
			{
				if (maxValue < entry.second)
				{
					maxValue = entry.second;
					id = entry.first;
				}
			}
			std::cout << "Max : " << naim_tovar.at(List_tovarov(id)) << " Cena : " << maxValue << " Rub";
			return maxValue;
		}
		void vivodDate()
		{
			tm ptm;
			time_t t = time(0);
			localtime_s(&ptm, &t);
			std::cout << ptm.tm_hour<< "/" << ptm.tm_min << "/" << ptm.tm_mday << "/" << (ptm.tm_mon + 1) << "/" << (ptm.tm_year + 1900);

		}

		void vivod_izmeneni()
		{
			for (auto f : tovar_colvo)
			{
				std::cout << naim_tovar.at(f.first) << " " << f.second << "\n";
			}
		}

	private:
		Tovar_Colvo ceni = { {List_tovarov::Chips, 100},
			{List_tovarov::Cola, 202},
			{List_tovarov::Cheese, 303},
			{List_tovarov::Whiskey, 401},
			{List_tovarov::Cigaretts, 555},
			{List_tovarov::Fanta, 80}
		};

		std::string m_name;
		Tovar_Colvo tovar_colvo = { {List_tovarov::Chips, 10},
			{List_tovarov::Cola, 20},
			{List_tovarov::Cheese, 30},
			{List_tovarov::Whiskey, 40},
			{List_tovarov::Cigaretts, 50},
			{List_tovarov::Fanta, 12}
		};

		Tovar_name naim_tovar = { {List_tovarov::Chips, "Chips"},
			{List_tovarov::Cola, "Cola"},
			{List_tovarov::Cheese, "Cheese"},
			{List_tovarov::Whiskey, "Whiskey"},
			{List_tovarov::Cigaretts, "Cigarets"},
			{List_tovarov::Fanta, "Fanta"} };
	};
	int max_cena;
}
namespace lb8z2
{
	
	class CSotrudnic
	{
	public:
		CSotrudnic(string imia = "Konstantin", string familia = "Vavulo", string otchestvo = "Nikitich", string doljnost = "Dolbeb", double zarpl = 1000.1, int god = 1993, int mes = 1, int den = 1)
			: name(imia),
			fam(familia),
			otch(otchestvo),
			dolj(doljnost),
			zp(zarpl),
			year(god),
			month(mes),
			day(den)
		{}
		void setInfo(string imia = "Konstantin", string familia = "Vavulo", string otchestvo = "Nikitich", string doljnost = "Dolbeb", double zarpl = 1000.1, int god = 1993, int mes = 1, int den = 1)
		{
			name = (imia);
			fam = (familia);
			otch = (otchestvo);
			dolj = (doljnost);
			zp = (zarpl);
			year = (god);
			month = (mes);
			day = (den);
		}

		int getYear()
		{
			return year;
		}

		int getDay()
		{
			return day;
		}

		int getMonth()
		{
			return month;
		}

		void getInfo()
		{
			std::cout << fam << " " << name << " " << otch << " " << dolj << " " << "Zarplata: " << zp << " " << year << "/" << month << "/" << day << "\n";
		}

	private:
		string imia_def = "Bob";
		string name;
		string fam;
		string otch;
		string dolj;
		double zp;
	public:
		int year;
		int month;
		int day;
		
	};
	bool comp(CSotrudnic const& lhs, CSotrudnic const& rhs)
	{
		int mladshe = false;
		if (lhs.year != rhs.year)
			return lhs.year > rhs.year;
		else
		{
			if (lhs.month != rhs.month)
				return lhs.month > rhs.month;
			else
			{
				return lhs.day > rhs.day;
			}
		}
	};
}

//laba 9
namespace lb9
{
	class z1uravn
	{
	public:
		z1uravn(int x = 17, int y = 4)
			: x(x),
			y(y)
		{}
		void getVal()
		{
			std::cout << "uravn: X^2+Y-2, X=17, Y=4. Result = " << (pow(x, 2) + y - 2);
		}
	private:
		int x = 17;
		int y = 4;
	};

	class Zveri_Lesa
	{
	public:
		Zveri_Lesa(int nomer = 1, string name = "None", string discript = "None")
			: nomer_zveria(nomer),
			name_of_piece(name),
			discription(discript)
		{}

		void setInfo(int nomer = 1, string name = "None", string discript = "None")
		{
			nomer_zveria = (nomer);
			name_of_piece = (name);
			discription = (discript);
		}

		void getInfo()
		{
			std::cout << "Nomer beast = " << nomer_zveria << " Vid " << name_of_piece << "\n" << "Discription: " << discription << endl;
		}
	private:
		int nomer_zveria;
		string name_of_piece;
		string discription;
	};
}

namespace lb10
{
	class Tovar
	{
	public:
		Tovar (string nazv = "Nissan", double grivna = 100000, string production = "Japanese")
			: name(nazv),
			grivna(grivna),
			production(production),
			usd(grivna * 36.9)
		{}
		//1 USD = 36,9 gr 08.09.2022
		string getName()
		{
			return name;
		}
		double PerevodVUSD(double griv = 100000)
		{
			if (this->name != "Toyoto")
			{
				if (griv)
					return (griv * 36.9);
				else
					return (grivna * 36.9);
			}
			else
			{
				if (griv)
					return (griv * 36.9 + 666);
				else
					return (grivna * 36.9 + 666);
			}
				
		}
	private:
		string name;
		double grivna;
		string production;
		double usd;
	};

	class Triangular
	{
	public:
		Triangular(double kat1 = 1, double kat2 = 1)
			: katet1(kat1),
			katet2(kat2),
			ploshad(katet1 * katet2 * (0.5)) {}
		double plosh(double kat1, double kat2)
		{
			std::cout << "Ploshad treug = " << ((0.5) * kat1 * kat2) << endl;
			return (((0.5) * kat1 * kat2));
		}
		double getKat1()
		{
			return this->katet1;
		}
		double getKat2()
		{
			return this->katet2;
		}
		void vivodPloshDefault()
		{
			ploshad = katet1 * katet2 * (0.5);
			std::cout << "Ploshad treug = " << ploshad << endl;
		}
		void setKatets(double kat1, double kat2)
		{
			katet1 = (kat1);
			katet2 = (kat2);
		}

	private:
		double katet1;
		double katet2;
		double ploshad;
	};

	class Prisma : public Triangular
	{
	public:
		Prisma(double h)
			: h(h) {}

		void getV(Triangular tri)
		{
			std::cout << "V = " << (this->h * tri.plosh(tri.getKat1(), tri.getKat2()));
		}

		void getV()
		{
			std::cout << "V = " << (this->h * this->plosh(this->getKat1(), this->getKat2())) << endl;
		}

	private:
		double h;
	};
}

namespace lb11
{
	class Detsad
	{
	public:
		Detsad(string name = "None", string adress = "None")
		: name(name),
		adress(adress)
		{}
	void setInfo()
	{
		std::cout << "Vvedite znaxhenia Nazvania i Adress" << endl;
		string n;
		string h;
		std::cin >> n;
		std::cin >> h;
		name = n;
		adress = h;
	}
	void getInfo()
	{
		std::cout << name << "\t" << adress;
	}
	private:
		string name;
		string adress;
	};
	class Group : public Detsad
	{
	public:
		Group(int nomer = 0, int age = 0, int kolvo = 0)
			:nomer(nomer),
			age(age),
			kolvo(kolvo)
		{}
		virtual void getInfoGroup()
		{
			this->getInfo();
			std::cout << endl;
			std::cout << nomer << "\t" << age << "\t" << kolvo;
		}
		void setInfoGroup()
		{
			std::cout << "Vvedite znaxhenia Nomera, Age, Kolvo" << endl;
			int n;
			int h;
			int k;
			std::cin >> n;
			std::cin >> h;
			std::cin >> k;
			nomer = n;
			age = h;
			kolvo = k;
		}

		void getInfoGroup(Detsad h)
		{
			h.getInfo();
			std::cout << endl;
			std::cout << nomer << "\t" << age << "\t" << kolvo;
		}
	private:
		int nomer;
		int age;
		int kolvo;
	};

	class D4 : public Group
	{
	public:
		void getInfoGroup() override
		{
			std::cout << imia;
			std::cout << endl;
			Group::getInfoGroup();
		}
	private:
		string imia = "Denis";
	};
}

namespace lb12
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
	/*lb5Zadanie1();
	int kolvo_bukv;
	std::cout << "Vvedite chislo bukv" << endl;
	std::cin >> kolvo_bukv;
	lb5Zadanie2(kolvo_bukv);
	lb5Zadanie3();*/


	//laba 6
	//lb6Zadanie1();
	//lb6Zadanie2();

	//laba 7
	/*std::cout << "Vvedite nomer zadania" << "\n";
	int nomer_zadanie = 0;
	std::cin >> nomer_zadanie;
	switch (nomer_zadanie)
	{
	case 1:
		lb5Zadanie1();
		break;
	case 2:
		int kolvo_bukv;
		std::cout << "Vvedite chislo bukv" << endl;
		std::cin >> kolvo_bukv;
		lb5Zadanie2(kolvo_bukv);
		break;
	case 3:
		lb5Zadanie3();
		break;
	default:
		std::cout << "Takogo zadania net";
		break;
	}*/

	//laba 8
	//z1
	/*using namespace lb8;
	using namespace std;
	CProdavec Ivanov("Ivanov");
	Ivanov.getName();
	Tovar_Colvo gg;
	Tovar_Colvo cena;
	int max;
	int otevet = 0;
	std::cout << "hotite li vi zdat svoi par-i cen i kol-va" << endl << "1 - da, 0 - net" << endl;
	std::cin >> otevet;
	switch (otevet)
	{
	case 1:
		// Задать инфу о количестве
		gg = Ivanov.giveTraitsToColvoOfTovar();
		// Задать инфу о цене
		cena = Ivanov.giveTraitsToCenaOfTovar();
		// Вывести макс цену
		max = Ivanov.get_maxCena(cena);
		//Date дата статична из-за отсутсвия условий вывода
		std::cout << "\n";
		Ivanov.vivodDate();
		break;
	case 0:
		Ivanov.vivod_izmeneni();
		Ivanov.get_maxCenaDef();
		std::cout << endl;
		Ivanov.vivodDate();
		break;
	default:
		std::cout << "none";
	}*/
	//lb 8 z 2
	/*using namespace lb8z2;
	std::vector<CSotrudnic> office;
	office.push_back(CSotrudnic());
	office.push_back(CSotrudnic("Dania", "Milohin", "Valerich", "technic", 2300.50, 2005, 12, 1));
	office.push_back(CSotrudnic("Den", "Vasilionak", "Anatolievich", "junior-prog (ORK)", 1500, 2003, 2, 12));
	int otvet = 0;
	string name;
	string familia;
	string otch;
	string job;
	double zp;
	int year;
	int month;
	int day;
	CSotrudnic your_choice;
	std::cout << "hotite li vi zadat svoego sotrudnica" << endl << "1 - da, 0 - net" << endl;
	std::cin >> otvet;
	switch (otvet)
	{
	case 1:
		std::cout << "Write Name" << endl;
		
		std::cin >> name;
		std::cout << "Write Familia" << endl;
		
		std::cin >> familia;
		std::cout << "Write Otchestvo" << endl;
		
		std::cin >> otch;
		std::cout << "Write Job" << endl;
		
		std::cin >> job;
		std::cout << "Write ZP" << endl;
		
		std::cin >> zp;
		std::cout << "Write Year of birthday (Example:2003)" << endl;
		
		std::cin >> year;
		std::cout << "Write Month of birthday (Example: 2)" << endl;
		
		std::cin >> month;
		std::cout << "Write Day of birthday (Example: 12)" << endl;
		
		std::cin >> day;
		your_choice.setInfo(name, familia, otch, job, zp, year, month, day);
		your_choice.getInfo();
		office.push_back(your_choice);
		break;
	}

	for (auto p : office)
	{
		p.getInfo();
	}

	auto min_el = std::min_element(office.begin(), office.end(), comp);
	std::cout << "Molodoi\n";
	(*min_el).getInfo();*/

	//Laba 9
	//z1 X^2+Y-2, X=17, Y=4
	using namespace lb9;
	//z1uravn gg;
	//gg.getVal();
	//z2
	/*Zveri_Lesa Sinitsa(1, "Kolia", "Ili zhuravl?");
	Sinitsa.getInfo();
	Sinitsa.setInfo(2, "Kolian", "V nebe");
	Sinitsa.getInfo();*/

	//laba 10
	using namespace lb10;
	//z1
	/*Triangular new_treug;
	new_treug.vivodPloshDefault();
	int kat1 = 0;
	int kat2 = 0;
	std::cout << "Vvedite kateti\n";
	std::cin >> kat1;
	std::cin >> kat2;
	new_treug.setKatets(kat1,kat2);
	new_treug.vivodPloshDefault();*/
	//z2
	/*Tovar car;
	std::cout << car.getName() << " Price = " << car.PerevodVUSD() << endl;
	Tovar car2("Toyoto");
	std::cout << car2.getName() << " Price = " << car2.PerevodVUSD() << endl;*/
	//z3
	//Prisma pr(10);
	//pr.getV();
	//pr.getV(new_treug);

	//laba 11 dodelat std::cout
	using namespace lb11;
	/*Detsad gg("Sh", "ggwp");
	//gg.getInfo();
	gg.setInfo();
	gg.getInfo();
	std::cout << endl;
	Group gg1(15,22,56);
	gg1.getInfoGroup(gg);
	std::cout << endl;
	gg1.setInfoGroup();
	gg1.getInfoGroup(gg);*/
	//D4 d4;
	//d4.getInfoGroup();
	
	//laba 12
	//primeri
	/*float x;
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 0, 85, NULL);
	LineTo(hDC, 200, 85);
	MoveToEx(hDC, 100, 0, NULL);
	LineTo(hDC, 100, 170);
	for (x = -8.0f; x <= 8.0f; x += 0.01f) // O(100,85) - center
	{
		MoveToEx(hDC, 10 * x + 100, -10 * sin(x) + 85, NULL);//10 - scale
		LineTo(hDC, 10 * x + 100, -10 * sin(x) + 85);
	}
	system("pause");
	return 1;

	using namespace std;
	if (GetSystemMetrics(SM_MOUSEPRESENT)) cout << ("true");
	_getch();

	printf("\nColor :\n1-Red\n2-Green\n3-White\n4-black\n");
	int iColor, Color1, Color2, Color3;
	cin >> iColor;
	switch (iColor) {
	case 1:
		Color1 = 255;
		Color2 = 0;
		Color3 = 0;
		break;
	case 2:
		Color1 = 0;
		Color2 = 255;
		Color3 = 0;
		break;
	case 3:
		Color1 = 255;
		Color2 = 255;
		Color3 = 255;
		break;
	case 4:
		Color1 = 0;
		Color2 = 0;
		Color3 = 0;
		break;
	default:
		cout << "Color is not found" << endl;
		_getch();
		return 0;
		break;
	}
	POINT cp;
	HDC hDC = GetDC(NULL);
	HPEN hPen = CreatePen(PS_SOLID, 2, RGB(Color1, Color2, Color3));
	HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

	GetCursorPos(&cp);
	MoveToEx(hDC, cp.x, cp.y, NULL);
	while ((cp.x != 0) && (cp.y != 0)) {
		GetCursorPos(&cp);
		LineTo(hDC, cp.x, cp.y);
	}
	SetCursorPos(cp.x, cp.y);
	SelectObject(hDC, hOldPen);
	DeleteObject(hPen);
	_getch();
	return 0;*

	//z2 lb 12
	/setlocale(LC_CTYPE, "Russian");
	int n = 0;
	cout << "Введите сторону квадрата: ";
	//cin >> n;
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << "5"; // верхняя стенка
	cout << endl;
	for (int i = 1; i < 9; i++)
	{
		cout << "5";  // левая стенка
		for (int i = 1; i < 9; i++)
			cout << " ";

		cout << "5" << endl; // правая стенка
	}
	for (int i = 10; i > 0; i--)
	{
		cout << "5";
	}

	// z1 lb 12
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(PS_SOLID, 3, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 10, 0, NULL);
	LineTo(hDC, 110, 0 );
	MoveToEx(hDC, 10, 0, NULL);
	LineTo(hDC, 10,110);
	MoveToEx(hDC, 10, 110, NULL);
	LineTo(hDC, 110, 110);
	MoveToEx(hDC, 110, 110, NULL);
	LineTo(hDC, 110, 0);
	MoveToEx(hDC, 120, 110, NULL);
	LineTo(hDC, 120, 0);
	//2-ond sq
	MoveToEx(hDC, 130, 0, NULL);
	LineTo(hDC, 230, 0);
	LineTo(hDC, 230, 110);
	LineTo(hDC, 130, 110);
	LineTo(hDC, 130, 0);
	_getch();*/
}

 