#pragma once
#include <string>
#include <stdexcept>
#include <ctime>

using namespace std;


class Task
{
private:
    string taskName;  
    tm taskDueDate;        
    string description;

public:

    Task(string taskName, int day, int month, int year, string description);


 
    void setTaskName(string name);

  
    void setTaskDueDate(int day, int month, int year);


    void setDescription(string description);


    string getTaskName();


    string getTaskDueDateFormatted();

    string getDescription();

	string getTaskDetails();
};

