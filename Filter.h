#pragma once //чтобы только 1 раз подключался заголовочный файл)
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;
class Filter : public Car // наследование класса класса кар(чтобы хранить избранные параметры)
{
private:
	// к этим параметрам есть (от/до) поэтому сделаем (до) приписав фром (от) будет начальным названием переменной
	int engine_power_to;//ОТ
	double overclocking_to;
	double fuel_consumption_to;
	int co2_to;
	int doors_to;
	double max_speed_to;
	double price_to;
	double engine_capacity_to;

public:
	int get_engine_power_to();
	double get_overclocking_to();
	double get_fuel_consumption_to();
	int get_co2_to();
	int get_doors_to();
	double get_max_speed_to();
	double get_price_to();
	double get_engine_capacity_to();

	// get______________________________________

	void set_engine_power_to(int);
	void set_overclocking_to(double);
	void set_fuel_consumption_to(double);
	void set_co2_to(int);
	void set_doors_to(int);
	void set_max_speed_to(double);
	void set_price_to(double);
	void set_engine_capacity_to(double);
	Filter();
};