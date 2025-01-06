#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee
{
	private:
		string firstName;
		string lastName;
		double phoneNumber;
		string address;
		string city;
		int stateZip;
		string position;
		string jobTitle;
		string paymentType;
		int employeeNumber;
		double totalPay;
		struct Salaried;
		struct HourlyPay;
	public:
		Employee();
		Employee(string, string, int, string, string, int, string, string, string);
		void menu();
		void getData(int);
		void displayData();
		void modifyData();
		void deleteData();
};

