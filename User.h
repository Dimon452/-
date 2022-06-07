#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

using namespace std;

class User
{
private:
	string name;
	
	vector<Car> history; 
	vector<Car> booked;
	double discount;
	double total;










	//�� ������ ������ � ���������� ���� ������ 
public:

	string get_name();
	void show_history(); //����������� ������� 
	void show_booked();
	double get_discount();
	double get_total();

	void set_name(string);     
	void set_discount(double);
	void set_total(double);

	void buy(Car); // ��������� ���������� ���� ����� 
    void book(Car);
	void cancel_book();
	
	Car choose_car(int);

	User(); 

	User(string new_name, vector<Car> new_history, vector<Car> new_booked); //����� ������ ����� � �������� 
	void show();

};