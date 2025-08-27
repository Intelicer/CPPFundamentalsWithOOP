#pragma once
#include <string>
#include <stdexcept>
#include <ctime>
#include "User.h"

using namespace std;

/*
	Task represents a task with attributes like task name, priority level, due date, and description.
	It includes methods to set and get these attributes with basic validation.
*/
class Task
{
private:
    
	string taskDoer;
    string taskName;  
    int priorityLevel;
    tm taskDueDate;        
    string description;

public:

    /*
		Initializes a new Task object with the provided task name, priority level, due date, and description.
		Throws invalid_argument if any of the inputs are invalid.

    */
    Task(string taskName, int priorityLevel, int day, int month, int year, string description, User *taskDoer);


    /*
	    sets the name of the task.
	    Throws invalid_argument if the task name is empty.
    */
    void setTaskName(string name);

    /*
        sets the priority level of the task.
        Throws invalid_argument if the priority level is not between 0 and 3.
	*/
    void setPriorityLevel(int priorityLevel);

    /*
        sets the user who is assigned to do the task.
        
	*/
	void setTaskDoer(User *taskDoer);
  
    /*
        sets the due date of the task.
        Throws invalid_argument if the date is invalid.
	*/
    void setTaskDueDate(int day, int month, int year);

    /*
		sets the description of the task.
		Throws invalid_argument if the description is empty.
    */
    void setDescription(string description);


    /*
	* returns the name of the task.
    */
    string getTaskName();


    /*
		returns the due date of the task formatted as "DD/MM/YYYY".
    */
    string getTaskDueDateFormatted();

	/* 
        returns the description of the task
    */
    string getDescription();

    /*
		returns the user who is assigned to do the task.
	*/
	string getTaskDoer();

    /*
        returns all the details of the task as a formatted string.
	*/
	string getTaskDetails();
};

