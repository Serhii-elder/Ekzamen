#include <iostream>
#include <fstream>
#include  <string.h>
using namespace std;

void DeleteMonitor()
{

	fstream moni;
	fstream temp;

	moni.open("monitor.txt", ios::in);
	temp.open("temp.txt", ios::out);
	char model[25];
	char price[25];
	char diagonal[25];
	char a[25];
	cin.ignore();
	cout << " \n\t Enter the price of monitor to delete record : ";
	cin.getline(a, 25);
	while (!moni.eof())
	{
		moni.getline(model, 25, '|');
		moni.getline(price, 25, '|');
		moni.getline(diagonal, 25);
		if (strcmp(price, a) == 0)
		{
			continue;
		}
		else
		{
			temp << model << '|' << price << '|' << diagonal << '\n';
		}


	}
	temp.close();
	moni.close();

	moni.open("monitor.txt", ios::out);
	temp.open("temp.txt", ios::in);
	while (!temp.eof())
	{
		temp.getline(model, 25, '|');
		temp.getline(price, 25, '|');
		temp.getline(diagonal, 25);
		moni << model << '|' << price << '|' << diagonal << '\n';
	}
	temp.close();
	moni.close();
	remove("temp.txt");
	cout << "\n Done! \n";
}
void UpdateMonitor()
{
	fstream moni;
	fstream temp;

	moni.open("monitor.txt", ios::in);
	temp.open("temp.txt", ios::out);
	char model[25];
	char diagonal[25];
	char price[25];
	char a[25];
	cin.ignore();
	cout << " \n\t Enter the price of monitor to update record : ";
	cin.getline(a, 25);
	while (!moni.eof())
	{
		moni.getline(model, 25, '|');
		moni.getline(price, 25, '|');
		moni.getline(diagonal, 25);
		if (strcmp(price, a) == 0)
		{

			cout << " \n\tenter new value of record  \n ";
			cout << " \n model : ";
			cin.getline(model, 25);
			cout << " \n price : ";
			cin.getline(price, 25);
			cout << " \n diagonal : ";
			cin.getline(diagonal, 25);
			temp << model << '|' << price << '|' << diagonal << '\n';
		}
		else
		{
			temp << model << '|' << price << '|' << diagonal << '\n';
		}


	}
	temp.close();
	moni.close();

	moni.open("monitor.txt", ios::out);
	temp.open("temp.txt", ios::in);
	while (!temp.eof())
	{
		temp.getline(model, 25, '|');
		temp.getline(price, 25, '|');
		temp.getline(diagonal, 25);
		moni << model << '|' << price << '|' << diagonal << '\n';
	}
	temp.close();
	moni.close();
	remove("temp.txt");
	cout << "\n Done! \n";
}
void DisplayAll()
{
	char model[25];
	char diagonal[25];
	char price[25];

	fstream moni;
	moni.open("monitor.txt", ios::in);

	cout << " \n\t model \t price \t diagonal \n";
	while (!moni.eof())
	{
		moni.getline(model, 25, '|');
		moni.getline(price, 25, '|');
		moni.getline(diagonal, 25);
		cout << "\n \t " << model << "\t" << price << "\t" << diagonal << endl;

	}
}
void SearchMonitor()
{

	fstream moni;
	moni.open("monitor.txt", ios::in);
	char model[25];
	char diagonal[25];
	char price[25];
	char a[25];
	cout << " \n enter the price to search about it : ";
	cin.ignore();
	cin.getline(a, 25);
	int x = 0;
	cout << " \n\t model \t price \t diagonal \n";
	while (!moni.eof())
	{
		moni.getline(model, 25, '|');
		moni.getline(price, 25, '|');
		moni.getline(diagonal, 25);
		if (strcmp(price, a) == 0)
		{
			cout << "\n \t " << model << "\t" << price << "\t" << diagonal << endl;
			x = 1;
			break;
		}

	}
	if (x == 0)
	{
		cout << " \n not found !!!!\n";
	}
	moni.close();
}
void  AddMonitor()
{

	char model[25];
	char diagonal[25];
	char price[25];
	fstream moni;
	moni.open("monitor.txt", ios::app);
	cin.ignore();
	cout << " \n Model : ";
	cin.getline(model, 25);
	cout << " \n Price : ";
	cin.getline(price, 25);
	cout << " \n Diagonal : ";
	cin.getline(diagonal, 25);
	moni << model << '|' << price << '|' << diagonal << '\n';
	cout << "Done!\n\t";
	moni.close();
}

int main()
{
	bool exit = true;
	while (exit)
	{
		cout << " {1} Add  \n {2} Search  \n {3} Display all \n {4} Update \n {5} Delete \n {6} Exit\n\tWrite your choose : ";
		int c;
		cin >> c;
		switch (c)
		{
		case 1:
			AddMonitor();
			break;
		case 2:
			SearchMonitor();
			break;
		case 3:
			DisplayAll();
			break;
		case 4:
			UpdateMonitor();

			break;
		case 5:
			DeleteMonitor();
			break;
		case 6:
			exit = false;
			break;
		default:
			cout << " \n choose right number \n";
		}
		cout << " if you continue to use program press ' y ' \n ";
		char f;
		cin >> f;
		if (f != 'y')
		{
			exit = false;
		}
	}
	return 0;
}

