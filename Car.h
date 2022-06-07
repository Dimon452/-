#pragma once
#include <iostream>
#include <string>


using namespace std;
class Car
{
protected:

	int engine_power;//231  
	double overclocking;//7.5 sec
	double fuel_consumption;//6,8L/100
	int co2;//179 G/km
	int doors;//4
	string color;//white
	string transmission;//auto
	bool climate_control;//1-yes/2-no
	double max_speed;
	string mark; //х5
	string brand;// bmw
	double price;//8960000 rub
	string environmental_standard;//eu5
	double engine_capacity;//3L
	string fuel;//diesel
	string type; //crossover
	string gear;//full

public:
	int get_engine_power(); //методы 
	double get_overclocking();
	double get_fuel_consumption();
	int get_co2();
	int get_doors();
	string get_color();
	string get_transmission();
	bool get_climate_control();
	double get_max_speed();
	string get_mark();
	string get_brand();
	double get_price();
	string get_environmental_standard();
	double get_engine_capacity();
	string get_fuel();
	string get_type();
	string get_gear();
	// get______________________________________

	void set_engine_power(int);
	void set_overclocking(double);
	void set_fuel_consumption(double);
	void set_co2(int);
	void set_doors(int);
	void set_color(string);
	void set_transmission(string);
	void set_climate_control(bool);
	void set_max_speed(double);
	void set_mark(string);
	void set_brand(string);
	void set_price(double);
	void set_environmental_standard(string);
	void set_engine_capacity(double);
	void set_fuel(string);
	void set_type(string);
	void set_gear(string);
	// set______________________________________

	Car();
	Car(   int new_engine_power,
		double new_overclocking,
		double new_fuel_consumption,
		   int new_co2,
		   int new_doors,
		string new_color,
		string new_transmission,
		  bool new_climate_control,
		double new_max_speed,
		string new_mark,
		string new_brand,
		double new_price,
		string new_environmental_standard,
		double new_engine_capacity,
		string new_fuel,
		string new_type,
		string new_gear);

	void show();
};