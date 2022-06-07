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










	//не совсем массив с элементами типа МАШИНА 
public:

	string get_name();
	void show_history(); //просмотреть историю 
	void show_booked();
	double get_discount();
	double get_total();

	void set_name(string);     
	void set_discount(double);
	void set_total(double);

	void buy(Car); // Принимает переменную типа маина 
    void book(Car);
	void cancel_book();
	
	Car choose_car(int);

	User(); 

	User(string new_name, vector<Car> new_history, vector<Car> new_booked); //чтобы задать юзера с историей 
	void show();

};