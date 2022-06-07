#include <iostream>
#include <string>
#include "Car.h"
#include "Filter.h"
#include <limits>

using namespace std;

int Filter::get_engine_power_to()
{
	return engine_power_to;
}

double Filter::get_overclocking_to()
{
	return overclocking_to;
}

double Filter::get_fuel_consumption_to()
{
	return fuel_consumption_to;
}

int Filter::get_co2_to()
{
	return co2_to;
}

int Filter::get_doors_to()
{
	return doors_to;
}

double Filter::get_max_speed_to()
{
	return max_speed_to;
}

double Filter::get_price_to()
{
	return price_to;
}

double Filter::get_engine_capacity_to()
{
	return engine_capacity_to;
}

void Filter::set_engine_power_to(int q)
{
	engine_power_to = q;
}

void Filter::set_overclocking_to(double q )
{
	overclocking_to = q;
}

void Filter::set_fuel_consumption_to(double q)
{
	fuel_consumption_to = q;
}

void Filter::set_co2_to(int q)
{
	co2_to = q;
}

void Filter::set_doors_to(int q)
{
	doors_to = q;
}

void Filter::set_max_speed_to(double q)
{
	max_speed_to = q;
}

void Filter::set_price_to(double q)
{
	price_to = q;
}

void Filter::set_engine_capacity_to(double q)
{
	engine_capacity_to = q;
}
//не можем указывать в функцию то что уже относится к классу ( передаем стороннюю переменную)

Filter::Filter()//конструктор по умолчанию 
{
	engine_power_to = std::numeric_limits<int>::max();

	overclocking_to = std::numeric_limits<double>::max();

	fuel_consumption_to = std::numeric_limits<double>::max();

	co2_to = std::numeric_limits<int>::max();

	doors_to = std::numeric_limits<int>::max();

	max_speed_to = std::numeric_limits<double>::max();

	price_to = std::numeric_limits<double>::max();

	engine_capacity_to = std::numeric_limits<double>::max();

	
}