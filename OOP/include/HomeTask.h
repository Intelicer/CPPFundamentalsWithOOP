#pragma once

#include "Task.h"
using namespace std;

class HomeTask : public Task
{
private:
	string taskTypes[3] = { "Cleaning", "Washing", "Making Food" };
	string homeName;
	int taskTypeID; 

public:
	/* 
		Initializes a new HomeTask object with the provided task name, priority level, due date, description, home name, and task type ID.
		Throws invalid_argument if any of the inputs are invalid.
	*/
	HomeTask(string taskName, int priorityLevel, int day, int month, int year,
		string description, User* taskDoer, string homeName,
		int taskTypeID);

	/* 
		sets the name of the home where the task is to be performed.
		Throws invalid_argument if the home name is empty.
	*/ 
	void setHomeName(string homeName);

	/*
		sets the type of the home task based on the provided taskTypeID.
		Throws invalid_argument if the taskTypeID is out of range (not between 0 and 2).
	*/
	void setTaskType(int taskTypeID);

	/*
		returns the name of the home where the task is to be performed.
	*/
	string getHomeName();

	/*
		returns the type of the home task as a string.
	*/
	string getTaskType();

};

