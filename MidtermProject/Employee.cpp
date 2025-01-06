#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;


struct Employee::HourlyPay
{
	double hoursWorked;
	double hourlyRate;
};

struct Employee::Salaried
{
	double salary;
	double bonus;
};

Employee::Employee()
{
	firstName = "";
	lastName = "";
	phoneNumber = 0;
	address = "";
	stateZip = 0;
	position = "";
	jobTitle = "";
	paymentType = "";
}

Employee::Employee(string fName, string lName, int pNumber, string adress, string city, int stZip, string pos, string jTitle, string pType)
{
	firstName = fName;
	lastName = lName;
	phoneNumber = pNumber;
	address = adress;
	stateZip = stZip;
	position = pos;
	jobTitle = jTitle;
	paymentType = pType;
}

void Employee::menu()
{
	employeeNumber = 1;
	int choice;
	char x;

	do
	{
		system("cls");
		cout << "--------------------------------\n";
		cout << "--------------------------------\n";
		cout << "------Employee Records----------\n";
		cout << "1. Enter New Employee Data\n";
		cout << "2. Display Employee Data\n";
		cout << "3. Edit Existing Employee Data\n";
		cout << "4. Terminate Employee Data\n";
		cout << "5. Exit program\n";
		cout << "Enter your selection: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			do
			{
				getData(employeeNumber);
				cout << "\nWould you like to enter another Empolyee Data? (Yes/No): ";
				cin >> x;
				employeeNumber++;
			} while (x == 'Y' || x == 'y');
			break;
		case 2:
			displayData();
			break;
		case 3:
			modifyData();
			break;
		case 4:
			deleteData();
			break;
		case 6:
			system("cls");
			cout << "Thank you for using the program!\n";
			cout << "Project by Manjot S. Samra\n";
			break;
		default:
			cout << "Re-enter your selection: ";
			cin.clear();
			cin >> choice;
			break;
		}
	} while (choice != 5);
}

void Employee::getData(int employeeNum)
{
	Salaried salaried;
	HourlyPay hourlyPay;

	system("cls");
	fstream file;
	int eNum = employeeNum;

	cout << fixed;
	cout << setprecision(0);
	cout << "--------------------------------\n";
	cout << "Enter the first name of the employee: ";
	cin >> firstName;

	cout << "\nEnter the last name of the employee: ";
	cin >> lastName;

	cout << "\nEnter the phone number of the employee: ";
	cin >> phoneNumber;
	cin.ignore();

	cout << "\nEnter the address of the employee: ";
	getline(cin, address);

	cout << "\nEnter the city of the employee: ";
	getline(cin, city);

	cout << "\nEnter the state zip of the employee: ";
	cin >> stateZip;
	cin.ignore();

	cout << "\nEnter the position of the employee: ";
	getline(cin, position);

	cout << "\nEnter the job title of the employee: ";
	getline(cin, jobTitle);

	cout << "\nEnter the payment type of the employee; Salaried(s) / Hourly (h) : ";
	cin >> paymentType;

	while (paymentType != "s" && paymentType != "S" && paymentType != "H" && paymentType != "h")
	{
		system("cls");
		cout << "Full Name: " << firstName << " " << lastName << "\nPhone Number: " << phoneNumber << "\n" << "Address: " << address << "\n" << "City: " << city << "\nStateZip: " << stateZip << "\nPosition: " << position
			<< "\nJob title: " << jobTitle;
		cout << "\nEnter the payment type of the employee; Salaried(s) / Hourly (h) : ";
		cin >> paymentType;
	}

	if (paymentType == "s" || paymentType == "S")
	{
		cout << "\nEnter the salary of the employee: ";
		cin >> salaried.salary;
		cout << "\nEnter the bonus of the employee: ";
		cin >> salaried.bonus;
		totalPay = salaried.salary + salaried.bonus;
		paymentType = "Salaried";
	}
	else if (paymentType == "H" || paymentType == "h")
	{
		cout << "\nWhat is the hourly pay of the employee: ";
		cin >> hourlyPay.hourlyRate;
		cout << "\nEnter the amount of hours has the employee worked (0-80 hours): ";
		cin >> hourlyPay.hoursWorked;
		while (hourlyPay.hoursWorked > 80)
		{
			cout << "\nEnter the amount of hours has the employee worked (0-80 hours) Try again: ";
			cin >> hourlyPay.hoursWorked;
		}
		totalPay = hourlyPay.hourlyRate * hourlyPay.hoursWorked;
		paymentType = "Hourly";
	}


	system("pause");
	system("cls");

	// cout << address; cout << "\n"; cout << firstName; cout << "\n"; cout << lastName; cout << "\n"; cout << phoneNumber; cout << "\n"; cout << city; cout << "\n"; cout << stateZip; cout << "\n"; cout << position; cout << "\n"; cout << jobTitle; cout << "\n"; cout << paymentType;

	file.open("Employee.txt", ios::app | ios::out);
	file << fixed << setprecision(0) << address << "$ " << eNum << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << "$ " << stateZip << " " << position
		<< " " << jobTitle << "$ " << paymentType << " " << totalPay << "\n";
	file.close();
}

void Employee::displayData()
{
	system("cls");
	int total = 1;
	fstream file;
	cout << "--------------------------------\n";
	cout << "------Employee display data------\n";
	file.open("Employee.txt", ios::in);
	if (!file)
	{
		cout << "File could not open! ";
		file.close();
	}
	else
	{
		address = "";
		cout << fixed << setprecision(0);

		getline(file, address, '$');
		address.erase(remove(address.begin(), address.end(), '\n'), address.end());
		file >> employeeNumber >> firstName >> lastName >> phoneNumber;
		getline(file, city, '$');
		file >> stateZip >> position;
		getline(file, jobTitle, '$');
		file >> paymentType >> totalPay;

		while (!file.eof())
		{
			cout << fixed << setprecision(0);
			cout << total++ << "." << "Full Name: " << firstName << " " << lastName << "\nPhone Number: " << phoneNumber << "\n" << "Address: " << address << "\n" << "City: " << city << "\nStateZip: " << stateZip << "\nPosition: " << position
				<< "\nJob title: " << jobTitle << "\nPayment type: " << paymentType << "\nTotal Pay: " << totalPay;
			cout << "\n";
			cout << "\n";
			cout << "Press enter to continue.\n";
			system("pause");
			system("cls");
			cout << "--------------------------------\n";
			address = "";

			getline(file, address, '$');
			address.erase(remove(address.begin(), address.end(), '\n'), address.end());
			file >> employeeNumber >> firstName >> lastName >> phoneNumber;
			getline(file, city, '$');
			file >> stateZip >> position;
			getline(file, jobTitle, '$');
			file >> paymentType >> totalPay;
		}
	}
	file.close();
	cout << "\n";
	system("pause");
}

void Employee::modifyData()
{

	Salaried salaried;
	HourlyPay hourlyPay;

	system("cls");
	int idCheck;
	int check = 0;
	fstream file, file1;

	cout << "--------------------------------\n";
	cout << "------Employee modify data------\n";
	file.open("Employee.txt", ios::in);

	if (!file)
	{
		cout << "File could not open! ";
		file.close();
	}
	else
	{
		cout << "\n Enter Employee #: ";
		cin.ignore();
		cin >> idCheck;
		cin.clear();
		file1.open("Temp.txt", ios::app | ios::out);

		if (!file1)
		{
			cout << "File 1 coult not open! \n";
			file1.close();
		}

		getline(file, address, '$');
		address.erase(remove(address.begin(), address.end(), '\n'), address.end());
		file >> employeeNumber >> firstName >> lastName >> phoneNumber;
		getline(file, city, '$');
		file >> stateZip >> position;
		getline(file, jobTitle, '$');
		file >> paymentType >> totalPay;

		while (!file.eof())
		{
			if (idCheck == employeeNumber && check == 0)
			{
				cout << "Enter the first name of the employee: ";
				cin >> firstName;

				cout << "\nEnter the last name of the employee: ";
				cin >> lastName;

				cout << "\nEnter the phone number of the employee: ";
				cin >> phoneNumber;
				cin.ignore();

				cout << "\nEnter the address of the employee: ";
				getline(cin, address);

				cout << "\nEnter the city of the employee: ";
				getline(cin, city);

				cout << "\nEnter the state zip of the employee: ";
				cin >> stateZip;
				cin.ignore();

				cout << "\nEnter the position of the employee: ";
				getline(cin, position);

				cout << "\nEnter the job title of the employee: ";
				getline(cin, jobTitle);

				cout << "\nEnter the payment type of the employee; Salaried(s) / Hourly (h) : ";
				cin >> paymentType;

				cout << "\n Employee details have been modified\n";

				while (paymentType != "s" && paymentType != "S" && paymentType != "H" && paymentType != "h")
				{
					system("cls");
					cout << "Full Name: " << firstName << " " << lastName << "\nPhone Number: " << phoneNumber << "\n" << "Address: " << address << "\n" << "City: " << city << "\nStateZip: " << stateZip << "\nPosition: " << position
						<< "\nJob title: " << jobTitle;
					cout << "\nEnter the payment type of the employee; Salaried(s) / Hourly (h) : ";
					cin >> paymentType;
				}

				if (paymentType == "s" || paymentType == "S")
				{
					cout << "\nEnter the salary of the employee: ";
					cin >> salaried.salary;
					cout << "\nEnter the bonus of the employee: ";
					cin >> salaried.bonus;
					totalPay = salaried.salary + salaried.bonus;
					paymentType = "Salaried";
				}
				else if (paymentType == "H" || paymentType == "h")
				{
					cout << "\nWhat is the hourly pay of the employee: ";
					cin >> hourlyPay.hourlyRate;
					cout << "\nEnter the amount of hours has the employee worked: ";
					cin >> hourlyPay.hoursWorked;
					while (hourlyPay.hoursWorked > 80)
					{
						cout << "\nEnter the amount of hours has the employee worked (0-80 hours) Try again: ";
						cin >> hourlyPay.hoursWorked;
					}
					totalPay = hourlyPay.hourlyRate * hourlyPay.hoursWorked;
					paymentType = "Hourly";
				}


				system("pause");
				system("cls");
				
				file1 << fixed << setprecision(0) << address << "$ " << employeeNumber << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << "$ " << stateZip << " " << position
					<< " " << jobTitle << "$ " << paymentType << " " << totalPay << "\n";
				check++;
			}
			else
			{
				file1 << fixed << setprecision(0) << address << "$ " << employeeNumber << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << "$ " << stateZip << " " << position
					<< " " << jobTitle << "$ " << paymentType << " " << totalPay << "\n";
			}

			getline(file, address, '$');
			address.erase(remove(address.begin(), address.end(), '\n'), address.end());
			file >> employeeNumber >> firstName >> lastName >> phoneNumber;
			getline(file, city, '$');
			file >> stateZip >> position;
			getline(file, jobTitle, '$');
			file >> paymentType >> totalPay;
		}

		if (check == 0)
		{
			cout << "\nThat Id was not found in the system.\n";
			system("pause");
		}
		file1.close();
		file.close();
	}
	ifstream fs;
	ofstream ft;
	string str;

	fs.open("Temp.txt");

	ft.open("Employee.txt", ios::out | ios::trunc);

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!";
		fs.close();
		exit(2);
	}

	if (fs && ft)
	{
		while (getline(fs, str))
		{
			ft << str << "\n";
		}
		cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
	}
	else
	{
		cout << "File Cannot Open...!!!";
	}

	fs.close();
	ft.close();

	remove("Temp.txt");
}

void Employee::deleteData()
{
	system("cls");
	int idCheck = 0;
	int check = 0;
	fstream file, file1;

	file1.open("Temp.txt", ios::out);

	if (!file1)
	{
		cout << "Error 324";
		cout << endl;
	}

	file.open("Employee.txt", ios::in);

	if (!file)
	{
		cout << "File could not open";
	}
	else
	{
		cout << "Enter the Employee ID to terminate: ";
		cin >> idCheck;

		getline(file, address, '$');
		address.erase(remove(address.begin(), address.end(), '\n'), address.end());
		file >> employeeNumber >> firstName >> lastName >> phoneNumber;
		getline(file, city, '$');
		file >> stateZip >> position;
		getline(file, jobTitle, '$');
		file >> paymentType >> totalPay;

		while (!file.eof())
		{
			if (idCheck == employeeNumber)
			{
				check++;
				cout << "The data has been deleted\n";
				system("pause");

			}
			else
			{
				if (employeeNumber < idCheck)
				{
					file1 << fixed << setprecision(0) << address << "$ " << employeeNumber << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << "$ " << stateZip << " " << position
						<< " " << jobTitle << "$ " << paymentType << " " << totalPay << "\n";
				}
				else if (employeeNumber > idCheck)
				{
					file1 << fixed << setprecision(0) << address << "$ " << employeeNumber - 1 << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << "$ " << stateZip << " " << position
						<< " " << jobTitle << "$ " << paymentType << " " << totalPay << "\n";
				}
			}

			getline(file, address, '$');
			address.erase(remove(address.begin(), address.end(), '\n'), address.end());
			file >> employeeNumber >> firstName >> lastName >> phoneNumber;
			getline(file, city, '$');
			file >> stateZip >> position;
			getline(file, jobTitle, '$');
			file >> paymentType >> totalPay;
		}
		file1.close();
		file.close();
	}

	if (check == 0)
	{
		cout << "Employee Id was not found\n";
		system("pause");
	}

	ifstream fs;
	ofstream ft;
	string str;

	fs.open("Temp.txt");

	ft.open("Employee.txt", ios::out | ios::trunc);

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!";
		fs.close();
		exit(2);
	}

	if (fs && ft)
	{
		while (getline(fs, str))
		{
			ft << str << "\n";
		}
		cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
	}
	else
	{
		cout << "File Cannot Open...!!!";
	}

	fs.close();
	ft.close();

	remove("Temp.txt");
}





/*system("cls");
	int idCheck = 0;
	int check = 0;
	fstream file, file1;

	file1.open("Temp.txt", ios::out);

	if (!file1)
	{
		cout << "Error 324";
		cout << endl;
	}

	file.open("Employee.txt", ios::in);

	if (!file)
	{
		cout << "File could not open";
	}
	else
	{
		cout << "Enter the Employee ID to terminate: ";
		cin >> idCheck;

		getline(file, address, '$');
		address.erase(remove(address.begin(), address.end(), '\n'), address.end());
		file >> employeeNumber >> firstName >> lastName >> phoneNumber >> city >> stateZip >> position
			>> jobTitle >> paymentType;

		while (!file.eof())
		{
			if (idCheck == employeeNumber)
			{
				check++;
				cout << "The data has been deleted\n";
				system("pause");

			}
			else
			{
				file1 << fixed << setprecision(0) << address << "$ " << employeeNumber << " " << firstName << " " << lastName << " " << phoneNumber << " " << city << " " << stateZip << " " << position
					<< " " << jobTitle << " " << paymentType << "\n";
			}

			getline(file, address, '$');
			address.erase(remove(address.begin(), address.end(), '\n'), address.end());
			file >> employeeNumber >> firstName >> lastName >> phoneNumber >> city >> stateZip >> position
				>> jobTitle >> paymentType;

			cout << employeeNumber;
			cout << firstName;
			cout << lastName;
			cout << phoneNumber;
			cout << city;
			cout << stateZip;
			cout << position;
			cout << jobTitle;
			cout << paymentType;
			system("pause");
		}

		if (check == 0)
		{
			cout << "Employee Id was not found\n";
			system("pause");
		}
		file1.close();
		file.close();
	}

	ifstream fs;
	ofstream ft;
	string str;

	fs.open("Temp.txt");

	ft.open("Employee.txt", ios::out | ios::trunc);

	if (!ft)
	{
		cout << "Error in Opening Destination File...!!!";
		fs.close();
		exit(2);
	}

	if (fs && ft)
	{
		while (getline(fs, str))
		{
			ft << str << "\n";
		}
		cout << "\n\n Source File Date Successfully Copied to Destination File...!!!";
	}
	else
	{
		cout << "File Cannot Open...!!!";
	}

	fs.close();
	ft.close();

	remove("Temp.txt");*/