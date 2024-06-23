#include <iostream>
#include <cstring>
using namespace std;
void enter();
void show();
void search();
void update();
void deleterecord();

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
string* p1[20], * p2[20], * p3[20], * p4[20], * p5[20], * p6[20];

int total = 0;

int main()

{
	for (int i = 0; i < 20; i++)

	{
		p1[i] = &arr1[i];
		p2[i] = &arr2[i];
		p3[i] = &arr3[i];
		p4[i] = &arr4[i];
		p5[i] = &arr5[i];
		p6[i] = &arr6[i];
	}

	int value;

	while (true)

	{
		cout << endl;

		cout << "Press 1 to enter data" << endl;

		cout << "Press 2 to show data" << endl;

		cout << "Press 3 to search data" << endl;

		cout << "Press 4 to update data" << endl;

		cout << "Press 5 to delete data" << endl;

		cout << "Press 6 to exit" << endl;

		cout << endl;

		cin >> value;

		cout << endl;

		switch (value)

		{

		case 1:

			enter();
			break;

		case 2:

			show();
			break;

		case 3:

			search();
			break;

		case 4:

			update();
			break;

		case 5:

			deleterecord();
			break;

		case 6:

			exit(0);
			break;

		default:

			cout << "Invalid input" << endl;
			break;
		}
	}
}

void enter()

{

	int a = 0;

	cout << "How many students do u want to enter??" << endl;

	cin >> a;

	if (total == 0)

	{

		total = a + total;

		for (int i = 0; i < a; i++)

		{
			cout << endl;
			cout << "Enter the Data of student:  " << i + 1 << endl << endl;

			cout << "Enter name:  ";
			cin >> arr1[i];

			cout << "Enter Roll no:  ";
			cin >> arr2[i];

			cout << "Enter number of courses:  ";
			cin >> arr3[i];

			cout << "Enter semester:  ";
			cin >> arr4[i];

			cout << "Enter CGPA:  ";
			cin >> arr5[i];

			cout << "Enter contact:  ";
			cin >> arr6[i];
		}
	}

	else

	{
		for (int i = total; i < a + total; i++)


		{
			cout << endl;
			cout << "Enter the Data of student:  " << i + 1 << endl << endl;

			cout << "Enter name:  ";
			cin >> arr1[i];

			cout << "Enter Roll no:  ";
			cin >> arr2[i];

			cout << "Enter number of courses:  ";
			cin >> arr3[i];

			cout << "Enter semester:  ";
			cin >> arr4[i];

			cout << "Enter CGPA:  ";
			cin >> arr5[i];

			cout << "Enter contact:  ";
			cin >> arr6[i];
		}

		total = a + total;
	}
}

void show()

{
	if (total == 0)

	{
		cout << "No data is entered" << endl;
	}

	else

	{
		for (int i = 0; i < total; i++)

		{
			cout << endl;

			cout << "Data of Student:  " << i + 1 << endl << endl;

			cout << "Name:  " << *p1[i] << endl;

			cout << "Roll no:  " << *p2[i] << endl;

			cout << "Course:  " << *p3[i] << endl;

			cout << "Semester:  " << *p4[i] << endl;

			cout << "CGPA:  " << *p5[i] << endl;

			cout << "Contact:  " << *p6[i] << endl;
		}
	}
}

void search()

{
	if (total == 0)

	{
		cout << "No data is entered" << endl;
	}

	else

	{
		string rollno;

		cout << "Enter the roll no of student: " << endl;
		cin >> rollno;

		for (int i = 0; i < total; i++)

		{

			if (rollno == arr2[i])

			{
				cout << "Name:  " << *p1[i] << endl;

				cout << "Roll no:  " << *p2[i] << endl;

				cout << "Course:  " << *p3[i] << endl;

				cout << "Semester:  " << *p4[i] << endl;

				cout << "CGPA:  " << *p5[i] << endl;

				cout << "Contact:  " << *p6[i] << endl;
			}

			else

			{
				cout << endl;
				cout << "Invalid Input  " << endl;
				break;
			}
		}
	}
}

void update()

{

	if (total == 0)

	{

		cout << "No data is entered" << endl;

	}

	else

	{

		string rollno;

		cout << "Enter the roll no of student which you want to update: " << endl;
		cin >> rollno;

		for (int i = 0; i < total; i++)

		{

			if (rollno == arr2[i])

			{
				cout << endl;

				cout << "Previous data:  " << endl << endl;

				cout << "Data of Student:  " << i + 1 << endl;

				cout << "Name:  " << arr1[i] << endl;

				cout << "Roll no:  " << arr2[i] << endl;

				cout << "Course:  " << arr3[i] << endl;

				cout << "Semester:  " << arr4[i] << endl;

				cout << "CGPA:  " << arr5[i] << endl;

				cout << "Contact:  " << arr6[i] << endl;

				cout << endl;

				cout << "Enter new data:  " << endl << endl;

				cout << "Enter name:  ";
				cin >> arr1[i];

				cout << "Enter Roll no:  ";
				cin >> arr2[i];

				cout << "Enter course:  ";
				cin >> arr3[i];

				cout << "Enter semester:  ";
				cin >> arr4[i];

				cout << "Enter CGPA:  ";
				cin >> arr5[i];

				cout << "Enter contact:  ";
				cin >> arr6[i];
			}

			else

			{
				cout << endl;
				cout << "Invalid Input  " << endl;
				break;
			}
		}
	}
}

void deleterecord()

{

	if (total == 0)

	{

		cout << "No data is entered" << endl;

	}

	else

	{

		int a;

		cout << "Press 1 to delete all record" << endl;

		cout << "Press 2 to delete specific record" << endl;
		cin >> a;

		if (a == 1)

		{

			total = 0;
			cout << "All record is deleted..!!" << endl;

		}

		else if (a == 2)

		{
			string rollno;

			cout << "Enter the roll no of student which you wanted to delete: " << endl;
			cin >> rollno;

			for (int i = 0; i < total; i++)

			{

				if (rollno == arr2[i])

				{
					for (int j = i; j < total; j++)

					{
						*p1[j] = *p1[j + 1];

						*p2[j] = *p2[j + 1];

						*p3[j] = *p3[j + 1];

						*p4[j] = *p4[j + 1];

						*p5[j] = *p5[j + 1];

						*p6[j] = *p6[j + 1];
					}

					total--;

					cout << "Your required record is deleted" << endl;
				}

				else

				{
					cout << endl;
					cout << "Invalid Input  " << endl;
					break;
				}
			}
		}

		else

		{
			cout << "Invalid input";
		}
	}
}

