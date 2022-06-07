#include "Filter.h"
#include "User.h"
#include "Car.h"
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <sstream>


using namespace std;
 
void show(Car* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ") ";
		arr[i].show();
		cout << endl << endl;
	}
}

int option(Car* all, int n, Car* suitable, Filter &filter) //передача по параметра ссылке 
{
	int y, d;
	while (true)
	{
		cout << "Выберите параметр" << endl;
		cout << "1-Мощность двигателя" << endl;
		cout << "2-Разгон до 100 км/ч" << endl;
		cout << "3-Расход топлива на 100 км" << endl;
		cout << "4-Выбросы углекислого газа" << endl;
		cout << "5-Количество дверей" << endl;
		cout << "6-Цвет" << endl;
		cout << "7-Коробка передач" << endl;
		cout << "8-Климат контроль" << endl;
		cout << "9-Максимальная скорость" << endl;
		cout << "10-Модель" << endl;
		cout << "11-Марка" << endl;
		cout << "12-Цена" << endl;
		cout << "13-Экологический стандарт" << endl;
		cout << "14-Объем двигателя" << endl;
		cout << "15-Топливо" << endl;
		cout << "16-Тип автомобиля" << endl;
		cout << "17-Привод" << endl;
		cout << "18-Очистить фильтры" << endl;
		cout << "19-Посмотреть фильтр" << endl;
		cout << "20-Применить фильтры" << endl;		

		cin >> y;
	
		if (y == 1 || y == 4 || y == 5) // int
		{
			int from, to;
			if (y == 1)
			{
				cout << "Введите диапазон для задания мощности двигателя (л.с.):" << endl;
				from = filter.get_engine_power();
				to = filter.get_engine_power_to();
			}
			else if (y == 4)
			{
				cout << "Введите диапазон для задания выбросов углекислого газа (г/кг):" << endl;
				from = filter.get_co2();
				to = filter.get_co2_to();
			}
			else if (y == 5)
			{
				cout << "Введите диапазон для задания количества дверей (штуки):" << endl;
				from = filter.get_doors();
				to = filter.get_doors_to();
			}
			cout << "1-Укажите верхнюю границу (ДО)" << endl;
			cout << "2-Укажите нижнюю границу (ОТ)" << endl;
			cout << "3-Укажите верхнюю и нижнюю границы (ОТ и ДО)" << endl;
			cin >> d;
			if (d == 1)
			{
				cout << "ДО: ";
				cin >> to;
			}
			else if (d == 2)
			{
				cout << "OТ: ";
				cin >> from;
			}
			if (d == 3)
			{
				cout << "OТ: ";
				cin >> from;
				cout << "ДО: ";
				cin >> to;
			}
			if (y == 1)
			{
				filter.set_engine_power(from);
				filter.set_engine_power_to(to);
			}
			else if (y == 4)
			{
				filter.set_co2(from);
				filter.set_co2_to(to);
			}
			else if (y == 5)
			{
				cout << "Введите диапазон для задания количества дверей (штуки):" << endl;
				filter.set_doors(from);
				filter.set_doors_to(to);
			}

			
		}
		if (y == 2 || y == 3 || y == 9 || y == 12 || y == 14)
		{

				
			double from, to;

			if (y == 2)
			{
				cout << "Введите диапазон для задания времени разгона до 100 км/ч  (сек):" << endl;
				from = filter.get_overclocking();
				to = filter.get_overclocking_to();
			}
			else if (y == 3)
			{
				cout << "Введите диапазон для задания расхода топлива на 100 км (л):" << endl;
				from = filter.get_fuel_consumption();
				to = filter.get_fuel_consumption_to();
			}
			else if (y == 9)
			{
				cout << "Введите диапазон для задания максимальной скорости (км/ч):" << endl;
				from = filter.get_max_speed ();
				to = filter.get_max_speed_to();
			}
			else if (y == 12)
			{
				cout << "Введите диапазон для задания цены (руб):" << endl;
				from = filter.get_price();
				to = filter.get_price_to();
			}
			else if (y == 14)
			{
				cout << "Введите диапазон для задания объема двигателя (л):" << endl;
				from = filter.get_engine_capacity();
				to = filter.get_engine_capacity_to();
			}
			cout << "1-Укажите верхнюю границу (ДО)" << endl;
			cout << "2-Укажите нижнюю границу (ОТ)" << endl;
			cout << "3-Укажите верхнюю и нижнюю границы (ОТ и ДО)" << endl;
			cin >> d;
			if (d == 1)
			{
				cout << "ДО: ";
				cin >> to;
			}
			else if (d == 2)
			{
				cout << "OТ: ";
				cin >> from;
			}
			else if (d == 3)
			{
				cout << "OТ: ";
				cin >> from;
				cout << "ДО: ";
				cin >> to;
			}
			if (y == 2)
			{	
					filter.set_overclocking(from);
				filter.set_overclocking_to(to);
			}
			else if (y == 3)
			{
					filter.set_fuel_consumption(from);
					filter.set_fuel_consumption_to(to);
			}
			else if (y == 9)
			{
					filter.set_max_speed(from);
				filter.set_max_speed_to(to);
			}
			else if (y == 12)
			{
					filter.set_price(from);
					filter.set_price_to(to);
			}
			else if (y == 14)
			{
					filter.set_engine_capacity(from);
					filter.set_engine_capacity_to(to);
			}
		}
		string g;
		if (y == 6)
		{
			cout << "Введите желаемый цвет:" << endl;
			cin >>g ;
			filter.set_color(g);
		}
		else if (y == 7)
		{
			cout << "Введите желаемую коробку передач (auto/ manual):" << endl;
			cin >> g;
			filter.set_transmission(g);
		}
		else if (y == 10)
		{
			cout << "Введите модель:" << endl;
			cin >> g;
			filter.set_mark(g);
		}
		else if (y == 11)
		{
			cout << "Введите марку:" << endl;
			cin >> g;
			filter.set_brand(g);
		}
		else if (y == 13)
		{
			cout << "Введите экологический стандарт:" << endl;
			cin >> g;
			filter.set_environmental_standard(g);
		}
		else if (y == 15)
		{
			cout << "Укажите  вид топлива (diesel/ petrol):" << endl;
			cin >> g;
			filter.set_fuel(g);
		}
		else if (y == 16)
		{
			cout << "Укажите тип автомобиля (jeep/ crossover/ sedan/ hatchback):" << endl;
			cin >> g;
			filter.set_type(g);
		}
		else if (y == 17)
		{
			cout << "Укажите желаемую комплектацию(four-wheel_drive/ rear_drive):" << endl;
			cin >> g;
			filter.set_gear(g);
		}
		bool f;
		 if (y == 8)
		{
			cout << "Климат контроль (1-есть/ 0-нет):" << endl;
			cin >> f;
			filter.set_climate_control(f);
		}

		if (y == 18)
		{
			filter = Filter(); //создали новый фильтр который очистит старый фильтр (из-за того что новый фильтр заполнятеся нулями и макс значениями)
		}
		if (y == 19)
			filter.show();
		if (y == 20)
			break;
	/*	if (y == 21) {
		
		}*/
	}

	int k = 0;
	for (int i=0; i < n; i++)
		if (all[i].get_engine_power() >= filter.get_engine_power() && all[i].get_engine_power() <= filter.get_engine_power_to() &&
			all[i].get_overclocking() >= filter.get_overclocking() && all[i].get_overclocking() <= filter.get_overclocking_to() &&
			all[i].get_fuel_consumption() >= filter.get_fuel_consumption() && all[i].get_fuel_consumption() <= filter.get_fuel_consumption_to() &&
			all[i].get_co2() >= filter.get_co2() && all[i].get_co2() <= filter.get_co2_to() &&
			all[i].get_doors() >= filter.get_doors() && all[i].get_doors() <= filter.get_doors_to() &&
			all[i].get_max_speed() >= filter.get_max_speed() && all[i].get_max_speed() <= filter.get_max_speed_to()&&
			all[i].get_price() >= filter.get_price() && all[i].get_price() <= filter.get_price_to() &&
			all[i].get_engine_capacity() >= filter.get_engine_capacity() && all[i].get_engine_capacity() <= filter.get_engine_capacity_to() &&
			(all[i].get_color() == filter.get_color() || filter.get_color() == "")&&
			(all[i].get_transmission() == filter.get_transmission() || filter.get_transmission() == "") &&
			(all[i].get_mark() == filter.get_mark() || filter.get_mark() == "") &&
			(all[i].get_brand() == filter.get_brand()|| filter.get_brand()  == "") &&
			(all[i].get_environmental_standard() == filter.get_environmental_standard() || filter.get_environmental_standard() == "") &&
			(all[i].get_fuel() == filter.get_fuel() || filter.get_fuel()  == "") &&
			(all[i].get_type() == filter.get_type() || filter.get_type()  == "") &&
			(all[i].get_gear() == filter.get_gear() || filter.get_gear()== "") &&
			all[i].get_climate_control() == filter.get_climate_control() 
			)
		{
			suitable[k++] = all[i];
		}
	return k;
}

int main()
{

	setlocale(LC_ALL, "ru");
	cout << fixed;
	cout.precision(2);
	Car m;//создаем переменную типа кар
	//m.show();
	//int arr[100];
	Car all[100];
	Car suitable[100];
	ifstream file("TextFile1.txt");
	ifstream usersfile("users.txt");
	

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

	int n = 0; //кол-во всех машин 
	while (file >> engine_power >> overclocking >> fuel_consumption >> co2 >> doors 
		>> color >> transmission >> climate_control >> max_speed >> mark >> brand 
		>> price >> environmental_standard >> engine_capacity >> fuel >> type >> gear)
	{
		//чтобы изначально были все машины 
		suitable[n] = Car(engine_power, overclocking, fuel_consumption, co2, doors, 
			color, transmission, climate_control, max_speed, mark, brand, price,
			environmental_standard, engine_capacity, fuel, type, gear); 
		all[n++] = Car(engine_power, overclocking, fuel_consumption, co2, doors,
				color, transmission, climate_control, max_speed, mark, brand, price,
				environmental_standard, engine_capacity, fuel, type, gear);
	}
	Filter filter;
	int t = n, k;

	
	vector<User> users;
	// считываем всех пользователей из файлика users.dat в вектор users
	int number_of_users=0, number_of_current_user = 0;
	User current_user;
	
	if (usersfile.is_open())
	{
		string s;
		double d;
		while (getline(usersfile, s))
		{
			stringstream ss;
			ss << s;
			ss >> s >> d;
			current_user.set_name(s); //считали из файла имя 
			current_user.set_total(d);//считали из файла сумму 
			users.push_back(current_user);

		}
		usersfile.close();
	}
	number_of_users = users.size();
	while (true)
	{
		string b;
		cout << "Введите ваш логин: ";
		cin >> b;
		bool f = false; // предполагаем, что такого пользователя еще нет в файле
		for (int i = 0; i < number_of_users; i++)
			if (b == users[i].get_name())
			{
				f = true;
				current_user = users[i];
				number_of_current_user = i;
				cout << "Вы успешно вошли в систему" << endl;
				break;
			}
		if (f == false)
		{
			number_of_current_user = users.size();
			current_user.set_name(b);
			current_user.set_total(0);
			users.push_back(current_user);
			cout << "Вы успешно зарегистрировались" << endl;
		}

		while (true)
		{
			cout << "1-Уточнить параметры поиска" << endl;
			cout << "2-Показать подходящие варианты" << endl;
			cout << "3-Забронировать" << endl;
			cout << "4-Купить" << endl;
			
			cout << "5-Показать забронированные машины" << endl; // current_user.show_history()
			cout << "6-отменить бронь" << endl;
			cout << "7-размер скидки" << endl;
			cout << "8-Выйти" << endl;
			cin >> k;
			if (k == 1)
			{
				t = option(all, n, suitable, filter);
			}
			if (k == 2)
			{
				cout << "Вам подходит " << t << " автомобилей" << endl;
				show(suitable, t);//выводим список машин 
			}
			if (k == 3)
			{
				show(suitable, t);
				cout << "Введите доступное число: ";
				int number;
				cin >> number;
				number--;
				if (number >= 0 && number < t)
					current_user.book(suitable[number]);
				else
					cout << "Incorrect input" << endl;
				cout << endl;
			}
			if (k == 4)
			{
				current_user.show_booked();
				cout << endl;
				cout << "Введите номер машины: ";
				int number;
				cin >> number;
				number--;
				cout << "Ваша скидка: " << current_user.get_discount() << endl;
				Car buying = current_user.choose_car(number);
				buying.get_price(); // нужно посчитать итог. стоимость машины для текущего пользователя
				cout << buying.get_price() << endl;
				if (current_user.get_discount() != 0) {
					cout << "Новая цена автомобиля: " << (buying.get_price() * (1 - (current_user.get_discount() / 100)))<<endl;
				}
				current_user.buy(buying);
				
			}
		

			if (k == 5)
			{
				cout << "Забронированные машины: " << endl;
				current_user.show_booked();
			}
			if (k == 6)
			{
				current_user.cancel_book();
			}

			if (k == 7)
			{
				cout << current_user.get_discount() << endl;
			}
			if (k == 8)
			{
				break;
			}
		}

		users[number_of_current_user] = current_user;
		number_of_users = users.size();

		filter = Filter(); //создали новый фильтр который очистит старый фильтр (из-за того что новый фильтр заполнятеся нулями и макс значениями)
		cout << endl;
		cout << "1 - choose a new user" << endl;// если что-то кроме 2 то придем в начало цикла 
		cout << "2 - exit" << endl;
		cin >> t;
		if (t == 2)
			break;
	}

	ofstream usersfile2("users.txt");
	for (int i = 0; i < users.size(); i++)
	{
		usersfile2 << users[i].get_name() << " " << users[i].get_total()<<endl;
	}
	usersfile2.close();
}

