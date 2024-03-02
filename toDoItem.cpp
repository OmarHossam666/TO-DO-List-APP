#include <toDoItem.h>

void toDoItem::create(string newDescription)
{
	srand(time(0));
	id = rand() % 100;
	this -> description = newDescription;
	this -> id = id;
}

int toDoItem::getId()
{
	return id;
}

string toDoItem::getDescription()
{
	return description;
}

bool toDoItem::getIsCompleted()
{
	return isCompleted;
}

string toDoItem::done(bool isDone)
{
	this -> isCompleted = isDone;
	if (isCompleted == 1)
	{
		return "Done";
	}
	else if(isCompleted == 0)
	{
		return "Not Done";
	}
}

bool toDoItem::setCompleted(bool status)
{
	this -> isCompleted = status;
	return isCompleted;
}
