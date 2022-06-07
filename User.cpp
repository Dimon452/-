#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
#include "User.h"

using namespace std;

string User::get_name()
{
	return name;
}

void User::show_history()
{
	for (int i = 0; i < history.size(); i++) 
	{
		cout << i + 1 << ") ";
		history[i].show(); //�������� ������� ����� ������ 
	}
}

void User::show_booked()
{
	for (int i = 0; i < booked.size(); i++)
	{
		cout << i + 1 << ") ";
		booked[i].show(); 
	}
}

double User::get_discount()
{
	double sum = total;
/*	for (int i = 0; i < history.size(); i++)
	{
		sum += history[i].get_price();
	}
*/
	if (sum < 1000000)
	{
		discount = 0;
	}
	else if (sum < 5000000)
	{
		discount = 5;
	}
	else if (sum > 10000000)
	{
		discount = 10;
	}
	return discount;
}

void User::set_name(string new_name)
{
	name = new_name;
}

void User::set_discount(double new_discount)
{
	discount = new_discount;
}

void User::buy(Car new_Car)
{
	history.push_back(new_Car); //�������� � ����� ������� 
	total += (new_Car.get_price() * (1 - (get_discount() / 100)));
	cout << "����������� � �������� ������! " << endl;
}

double User::get_total()
{
	return total;
}

void User::set_total(double new_total)
{
	total = new_total;
}

void User::book(Car new_Car)
{
	if (booked.size() < 3)
	{
		cout << "�� ������� ������������� ������" << endl;
		booked.push_back(new_Car); //
	}
	else
		cout << "�� �� ������ ������������� ������ 3-� �����" << endl;
}
void User::cancel_book()
{
	int t;

	while (true)
	{
		show_booked();
		cout << "������� ���������� ����� ������, ������� ������ ����� � �����: ";
		cin >> t;
		if (t >= 0 && t < booked.size())
		{
			booked.erase(booked.begin() + t);//������� ��������������� ���������� (�����- ������ �������)
			cout << "����� �����!" << endl;
		}
		else
			cout << "������ ��� ������ ������������!" << endl;

		cout << "������� ���������� ������ ������������?(1-��/ 0-���) " << endl;
		cin >> t;
		if (t == 0)
		{
			break;
		}
	}

		
}

User::User()
{
	discount = 0;
	total = 0;
	name = "";
}

User::User(string new_name, vector<Car> new_history, vector<Car> new_booked)
{
	name = new_name;
	history = new_history;
	booked = new_booked;
}

void User::show()
{
	cout << "���: " <<name<<endl;
	cout << "��������� ������: " << endl;
	show_history();
	cout << "��������������� ������: " << endl;
	show_booked();
}

Car User::choose_car(int number)
{
	if (number >=0 && booked.size() > number)
		return booked[number];
	else
	{
		cout << "Invalid number" << endl;
		return Car();
	}
}
