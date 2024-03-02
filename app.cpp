#include <toDoItem.h>

void loadingScreen()
{
	for (int i = 0; i < 1; i++)
	{
		system("cls");

		cout << "Loading";

		for (int i = 0; i < 5; i++)
		{
			cout << ".";
			Sleep(500);
		}

	}
}

int main()
{
	char choice;
	string input_Description;
	int marked_Id;
	list <toDoItem> toDoItems;
	toDoItems.clear();
	list <toDoItem>::iterator it;
	string version = "0.2.0v";

	while (true)
	{
	system("cls");

	cout << "To-Do-Item-Maker-" << version << endl;
	cout << "\n";

	if (toDoItems.empty())
	{
	cout << "Add Your First To-Do-Item." << endl;
	cout << "\n";
	}


	for (it = toDoItems.begin(); it != toDoItems.end(); it++)
	{
		string completed = it->getIsCompleted() ? "Done" : "Not Done";

		cout << it->getId() << " | " << it->getDescription() << " | " << completed << endl;
	}
	cout << "\n";

	cout << "[A]dd To-Do-Item." << endl;
	cout << "[C]omplete To-Do-Item." << endl;
	cout << "[Q]uit." << endl;
	cout << "Choose Your Option : ";
	cin >> choice;

	if (choice == 'A' || choice == 'a')
	{
		cout << "Enter Your Description : ";
		cin.clear();
		cin.ignore();
		getline(cin , input_Description);

		toDoItem newToDoItem;
		newToDoItem.create(input_Description);
		toDoItems.push_back(newToDoItem);
		loadingScreen();
	}
	else if (choice == 'C' || choice == 'c')
	{
		cout << "Enter The Id Of The To-Do-Item : ";
		cin >> marked_Id;

		for (it = toDoItems.begin() ; it != toDoItems.end() ; it++)
		{
			if (marked_Id == it->getId())
			{
				it->setCompleted(true);
				break;
			}
		}
		loadingScreen();
	}
	else if (choice == 'Q' || choice == 'q')
	{
		cout << "Have A Nice Day." << endl;
		break;
	}

	Sleep(500);

	}
	system("pause>0");
	return 0;
}