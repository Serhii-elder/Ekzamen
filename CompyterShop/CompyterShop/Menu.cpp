#include "Menu.h"
#include<iostream>
#include <stdlib.h>
using namespace std;

void Menu()
{

	int choice = 0;
	bool exit = true;
	bool view = true;

	while (exit == true) {
		system("cls");
		cout << "\n\t{1} View all database\n\t{2} Database adjustment\n\t{3} Product search\n\t{4} Advanced search\n\t";
		cout << "{5} Price adjustment\n\t{6} Change in dollar exchange rate\n\t{0} Exit  ";
		cin >> choice;
		if (choice == 1) {

		}
		else if (choice == 2) {
			while (view == true)
			{

				system("cls");
				cout << "\n\t<1> Add product\n\t<2> Delete product\n\t<0> Back" << endl;
				cin >> choice;
				if (choice == 1) {

				}
				else if (choice == 2) {

				}else if (choice == 0) {
					view = false;
				}
				else {
					cout << "Wrong!" << endl;
				}
			}
		}
		else if (choice == 3) {
			while (view == true)
			{
				system("cls");
				cout << "\n\t<1> Search to price \n\t<2> Search by type\n\t<0> Back" << endl;
				cin >> choice;
				if (choice == 1) {

				}
				else if (choice == 2) {

				}
				else if (choice == 0) {
					view = false;
				}
				else {
					cout << "Wrong!" << endl;
				}
			}
		}
		else if (choice == 4) {
			while (view == true)
			{
				system("cls");
				cout << "\n\t<1> Search from cheap to more expensive \n\t<2> Search from expensive to cheap\n\t<3> ";
				cout << "Search for the specified price\n\t<4> Search from the specified price\n\t<5> ";
				cout << "Finding products that are less than 5 pieces\n\t<0> Back";
				cin >> choice;
				if (choice == 1) {

				}
				else if (choice == 2) {

				}
				else if (choice == 0) {
					view = false;
				}
				else {
					cout << "Wrong!" << endl;
				}
			}
		}
		else if (choice == 5) {

		}
		else if (choice == 0) {

			exit = false;
			cout << "GoodBay!"<<endl;
		}

		
		view = true;
	}


}
