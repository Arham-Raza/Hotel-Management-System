#include<iostream>
#include<string>
#include<cstring>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;
struct Record
{

	int room_no; string name; string address; string nic; string number;
	int bill = 0, lbill = 0, fbill = 0, dbill = 0; int night;
	fstream myfile;
};

void Write_Registration(int r, string n1, string add, string nic, string num, int bill, int lbill, int fbill, int dbill, int night)
{
	fstream myfile;

	Record obj;
	obj.room_no = r;
	obj.name = n1;
	obj.address = add;
	obj.nic = nic;
	obj.number = num;
	obj.bill = bill;
	obj.lbill = lbill;
	obj.fbill = fbill;
	obj.dbill = dbill;
	obj.night = night;






	myfile.open("Record.txt", ios::app);
	myfile << "Room Number " << obj.room_no << endl << "Name " << obj.name << endl << "Address " << obj.address << endl << "NIC " << obj.nic << endl << "Number " << obj.number << endl << "Bill " << obj.bill << endl << "Laundary Bill " << obj.lbill << endl << "Food Bill " << obj.fbill << endl << "Drop Bill " << obj.dbill << endl << "Nights " << obj.night << endl;
	myfile.close();


}
	
void Intro() {
	system("COLOR 0A");
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                ***********************   " << endl;
	cout << "                                  HOTEL BEACH LUXURY                          " << endl;
	cout << "                                -----------------------                                              " << endl;
	cout << "                                ***********************                       " << endl;
	cout << "                                                             " << endl;
	cout << "                                                                   " << endl;
	cout << "                                WELCOME TO BEACH LUXURY HOTEL      " << endl;
	
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;
	cout << "                                                                                                " << endl;

	cout << "                                                                                      Program BY" << endl;
	cout << "                                                                                      Areeb Ali " << endl;
	cout << "                                                                                    Zohair Haris" << endl;
	cout << "                                                                                      Arham Raza" << endl;
	system("pause");
}

void pass()
{

pass:
	char ch;
	string pass = "";
	cout << "Password :";
	ch = _getch();
	while (ch != '\r')
	{
		pass.push_back(ch);
		cout << '*';
		ch = _getch();
	}
	if (pass == "1234")
	{

		cout << "\n\t\tLogin successful\n";
		system("pause");

	}
	else
	{
		cout << "\n\t\tLogin failed. Please try again\n";
		goto pass;
	}
}
void website() {


	std::string y = "start https://ramada-plaza-karachi.hotel-rez.com";
	system(y.c_str());





}
void Laundry(int r)
{
	
	fstream myfile2;
	int a, b,total;
	Record obj;




	cout << endl << "Charges Per Shirt: $5" << endl;
	cout << endl << "Charges Per Pair of Pants: $2" << endl;
	cout << endl << "How Many Shirts You Want to Send In Laundry: "; cin >> a;
	cout << endl << endl << "How Many Pair of Pants You Want to Send In Laundry: "; cin >> b;
	a = a * 5;
	b = b * 2;
	obj.lbill = a + b;
	myfile2.open("Bill.txt", ios::app);
	if (myfile2.is_open()) {
		myfile2 << endl;
		myfile2 << "TOTAL LAUNDRY BILL FOR ROOM NUMBER " << r << " IS $" << obj.lbill<<endl;
	}
	cout << "Laundry Bill for room " << r << " Is $" << obj.lbill<<endl;
	system("pause");
	




}
	

void Show_records() {
	fstream myfile;
	myfile.open("Record.Txt", ios::in);
	string line;
	if (myfile.is_open()) {
		while (!myfile.eof()) {
			getline(myfile, line);
			cout << line<<endl;
		}
	}
	system("pause");
}





void food(int r) {
	
	int choice;
		cout << "	> MENU DETAILS" << endl;
		cout << "	1-> Breakfast (Dougnut, French toast, Fried eggs) " << endl;
		cout << "	2-> Lunch (Baked Salmon with Avocado, Asian Steak Noodle Bowl, Grilled Chicken Sliders) " << endl;
		cout << "	3-> Dinner(Teriyaki Chicken Thighs, Beef Chilli with Rice, MarinatedFlank Steak)" << endl;

			cin >> choice;
		if (choice == 1)
		{

			int choice2;
			cout << "Choose from the following Breakfast Menu" << endl; 
			cout << "Doughnut ($3) (Enter 1)" << endl;
			cout << "French toast ($2) (Enter 2)" << endl;
			cout << "Fried Eggs ($5) (Enter 3)" << endl; 
			cin >> choice2;

			if (choice2 == 1)
			{
				cout << "Your Breakfast item is Doughnut" << endl; 
			}

			else if (choice2 == 2)
			{
				cout << "Your Breakfast item is French toast" << endl; 
			}

			else if (choice2 == 3)
			{



			}

			else
			{

				cout << "Your Breakfast item is Fried eggs" << endl;



				cout << "Incorrect Selection" << endl;



			}
		}

			else if (choice == 2)
		{
			int choice2;
			cout << "Choose from the following Lunch Menu" << endl; 
			cout << "Baked Salmon with Avocado ($15) (Enter 1)" << endl;
			cout << "Asian Steak Noodle Bowl ($11) (Enter 2)" << endl; 
			cout << "Grilled Chicken Sliders   ($13) (Enter 3)" << endl; 
			cin >> choice2;

			if (choice2 == 1)
			{
				cout << "Your Lunch item is Baked Salmon with Avocado" << endl;
				
			}

			else if (choice2 == 2)
			{
				cout << "Your Lunch item is Asian Steak Noodle Bowl" << endl; 
				
			}

			else if (choice2 == 3)
			{
				cout << "Your Lunch item is Grilled Chicken Sliders" << endl;
			
			}


			else
			{
				cout << "Incorrect Selection" << endl;
			}
		}



		


			else if (choice == 3)
		{
			int choice3;
			cout << "Choose from the following Dinner Menu" << endl;
			cout << "Teriyaki Chicken Thighs ($16) (Enter 1)" << endl;
			cout << "Beef Chilli with Rice ($18) (Enter 2)" << endl;
			cout << "Marinated Flank Steak ($20) (Enter 3)" << endl;
			cin >> choice3;

			if (choice3 == 1)
			{
				cout << "Your Dinner item is Teriyaki Chicken Thighs" << endl; 
			}

			else if (choice3 == 2)
			{
				cout << "Your Dinner item is Beef Chilli with Rice" << endl; 
			}




			else if (choice3 == 3)
			{
				cout << "Your Dinner item is Marinated Flank Steak" << endl; 
			}


			else
			{
				cout << "Incorrect Selection" << endl;
			}
		}



		



			else
		{
		cout << "Incorrect Selection" << endl;

		}



		

		
	
	




}

int main()
{
	int cho,count=0;
	system("COLOR 0A");
	char ch;
	fstream myfile;
	int r, bill, lbill = 0, fbill = 0, dbill = 0, night, flag;
	string n1, add, nic, num;
	string n2, add2, nic2, num2, r2, bill2, lbill2, fbill2, dbill2, night2;
	int total = 0, che;
	Intro();

	
	
		system("cls");
		system("COLOR A0");
		cout << "\n\n\n\tWELCOME TO MAIN MENU";
		cout << "\n\n\t0-> Check In";
		cout << "\n\n\t1-> Show all Registered Records";
	    cout << "\n\n\t6-> Laundry Service";
		cout << "\n\n\t7-> Food Ordering Service";
		cout << "\n\n\t8-> Drop to the Airport";
		cout << "\n\n\t9-> Visit our Website";
		cout << "\n\n\tE-> Exit";
		cout << "\n\n\tSelect your Option (0-9): ";



		cout << "\n\n\tSelect your Option (0-9): ";
	


	cin >> ch;

	switch (ch)
	{
	case '0':
		system("cls");
		cout << "\n Enter Record";
		cout << "\n	";
		cout << "\n\n Room Details...";
		cout << "\n\n\t Total Rooms	> 50";
		cout << "\n\n\t Ordinary Rooms $50/Night --> 01 - 30";
		cout << "\n\n\t Luxuary Rooms $100/Night --> 31 - 45";
		cout << "\n\n\t Royal Rooms $150/Night --> 46 - 50";

		do
		{
			cout << "\n\n Enter The Room number you want to stay in : ";
			cin >> r;
			cin.ignore();
			
		} while (r > 50);

		cout << "\n\n How Many Nights would you like to stay: ";
		cin >> night;
		cin.ignore();

		if (r >= 1 && r <= 30)
		{

			bill = 50;
		}

		else if (r >= 31 && r <= 45)
		{
			bill = 100;
		}

		else if (r >= 46 && r <= 50)
		{
			bill = 150;
		}

		bill = bill * night;

		cout << "\n\nEnter Name: ";
		getline(cin, n1);

		cout << "Enter Address: ";



		getline(cin, add);

		cout << "Enter N.I.C Number: ";
		getline(cin, nic);

		cout << "Enter Contact Number: ";
		getline(cin, num);







		Write_Registration(r, n1, add, nic, num, bill, lbill, fbill, dbill, night);
		cout << "Check In Complete	" << endl;
		break;


	case  '1':
		cout << "Enter Password to show all records"<<endl;
		pass();
		Show_records();
		break;
	case '2':
		cout << "Please Enter Your Room number";
		cin >> r;
			Laundry(r);
			break;
	case '3':
		system("cls");
		cout << "WELCOME TO FOOD ORDERING SERVICE!" << endl;

		cout << endl << "Enter Your Room Number: ";
		cin >> r;
		food(r);

	case '9':
		system("cls");
		website();

	case 'E':
		return 0;
	case 'e':
		return 0;
	}
	return 0;

}