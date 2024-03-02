#ifndef TODOITEM_H
#define TODOITEM_H
#include <iostream>
#include <windows.h>
#include <string>
#include <list>
#include <ctime>

using namespace std;

class toDoItem 
{
private:
	int id;
	string description;
	bool isCompleted;
public:
	toDoItem() : id(0), description(" "), isCompleted(0) {}
	~toDoItem() = default;
	int getId();
	string getDescription();
	bool getIsCompleted();
	void create(string description);
	string done(bool isDone);
	bool setCompleted(bool status);
};

#endif