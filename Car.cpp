#include "Car.h"

int Car::get_engine_power()
{
	return engine_power;
}

double Car::get_overclocking()
{
	return overclocking;
}

double Car::get_fuel_consumption()
{
	return fuel_consumption;
}

int Car::get_co2()
{
	return co2;
}

int Car::get_doors()
{
	return doors;
}

string Car::get_color()
{
	return color;
}

string Car::get_transmission()
{
	return transmission;
}

bool Car::get_climate_control()
{
	return climate_control;
}

double Car::get_max_speed()
{
	return max_speed;
}

string Car::get_mark()
{
	return mark;
}

string Car::get_brand()
{
	return brand;
}

double Car::get_price()
{
	return price;
}

string Car::get_environmental_standard()
{
	return environmental_standard;
}

double Car::get_engine_capacity()
{
	return engine_capacity;
}

string Car::get_fuel()
{
	return fuel;
}

string Car::get_type()
{
	return type;
}

string Car::get_gear()
{
	return gear;
}




void Car::set_engine_power(int q)
{
	engine_power = q;
}

void Car::set_overclocking(double w)
{
	overclocking = w;
}

void Car::set_fuel_consumption(double e)
{
	fuel_consumption = e;
}

void Car::set_co2(int r)
{
	co2 = r;
}

void Car::set_doors(int t)
{
	doors = t;
}

void Car::set_color(string y)
{
	color = y;
}

void Car::set_transmission(string u)
{
	transmission = u;
}

void Car::set_climate_control(bool i)
{
	climate_control = i;
}

void Car::set_max_speed(double o)
{
	max_speed = o;
}

void Car::set_mark(string p)
{
	mark = p;
}

void Car::set_brand(string a)
{
	brand = a;
}

void Car::set_price(double s)
{
	price = s;
}

void Car::set_environmental_standard(string d)
{
	environmental_standard = d;
}

void Car::set_engine_capacity(double f)
{
	engine_capacity = f;
}

void Car::set_fuel(string g)
{
	fuel = g;
}

void Car::set_type(string h)
{
	type = h;
}

void Car::set_gear(string j)
{
	gear = j;
}

Car::Car()//конструктор по умолчанию (смогу создавать экземпляр класса кар)
{
	 engine_power = 0;
	 overclocking = 0;
	 fuel_consumption = 0;
	 co2 = 0;
	 doors = 0;
	 color = "";
	 transmission = "";
	 climate_control = 1;
	 max_speed = 0;
	 mark = "";
	 brand = "";
	 price = 0;
	 environmental_standard = "";
	 engine_capacity = 0;
	 fuel = "";
	 type = "";
	 gear ="";
}
//чтобы можно было создать машину со сразу заданными параметрами 
Car::Car(int new_engine_power, double new_overclocking, double new_fuel_consumption, int new_co2, int new_doors, string new_color, string new_transmission, bool new_climate_control, double new_max_speed, string new_mark, string new_brand, double new_price, string new_environmental_standard, double new_engine_capacity, string new_fuel, string new_type, string new_gear)
{
	engine_power = new_engine_power;
	overclocking = new_overclocking;
	fuel_consumption = new_fuel_consumption;
	co2 = new_co2;
	doors = new_doors;
	color = new_color;
	transmission = new_transmission;
	climate_control = new_climate_control;
	max_speed = new_max_speed;
	mark = new_mark;
	brand = new_brand;
	price = new_price;
	environmental_standard = new_environmental_standard;
	engine_capacity = new_engine_capacity;
	fuel = new_fuel;
	type = new_type;
	gear = new_gear;
}

void Car::show()
{
	cout << brand <<" "<<mark << "("<<price<<" руб)"<<endl;

	cout << "Мощность двигателя-" << engine_power<<" Л.С."<<endl;
	cout << "Разгон до 100 км/ч-" << overclocking<<" C"<< endl;
	cout << "Расход топлива-" << fuel_consumption <<" Л/100КМ" << endl;
	cout << "Выделение углекислого газа-" << co2 << " г/КМ" << endl;
	cout << "Количество дверей-" << doors<<" Штуки" << endl;
	cout << "Цвет-" <<color<< endl;
	cout << "Коробка передач-" << transmission<< endl;
	cout << "Климат контроль-" << climate_control<< endl;
	cout << "Максимальная скорость-" << max_speed<<" КМ/ч" << endl;
	cout << "Экологический стандарт-" << environmental_standard<< endl;
	cout << "Объем двигателя-" << engine_capacity<<" Л" << endl;
	cout << "Вид топлива-" << fuel << endl;
	cout << "Тип машины-" << type << endl;
	cout << "Комплектация-" << gear << endl;
	

}
