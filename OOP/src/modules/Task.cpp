#include <iostream>
#include <string>
#include <stdexcept>
#include "../../include/Task.h"

// scope resolution operator :: to implement the methods of 
//the class that are defined in header

using namespace std;

Task::Task(string taskName, int priorityLevel, int day, int month, int year, string description, User* taskDoer) {
    setTaskName(taskName);
    setPriorityLevel(priorityLevel);
    setTaskDueDate(day,month,year);
    setDescription(description);
	setTaskDoer(taskDoer);
}

void Task::setTaskName(string taskName) {
    if (taskName.empty()) {
        throw invalid_argument("Task name cannot be empty!");
    }
    this->taskName = taskName;
}
void Task::setPriorityLevel(int priorityLevel) {
    if (priorityLevel< 0 || priorityLevel > 3) {
        throw invalid_argument("Task priority level out of range!");
    }
    this->priorityLevel = priorityLevel;
}

void Task::setTaskDoer(User *taskDoer) {

    if (taskDoer == nullptr) {
        throw invalid_argument("Task doer cannot be empty!");
	}
    if( taskDoer->getUsername().empty()) {
        throw invalid_argument("Task doer username cannot be empty!");
	}
    this->taskDoer = taskDoer->getUsername();
}

void Task::setTaskDueDate(int day, int month, int year) {
    if (year < 1900 || year > 2100) {
        throw invalid_argument("Invalid year!");
    }
    if (month < 1 || month > 12) {
        throw invalid_argument("Invalid month!");
    }
    if (day < 1 || day > 31) {
        throw invalid_argument("Invalid day!");
    }
	taskDueDate.tm_year = year; // tm_year is years since 1900
	taskDueDate.tm_mon = month; // tm_mon is 0-11
	taskDueDate.tm_mday = day; // tm_year is years since 1900
}

void Task::setDescription(string description) {
    if (description.empty()) {
        throw invalid_argument("description cannot be empty!");
    }
    this->description = description;
}

string Task::getTaskName() {
    return this->taskName;
}

string Task::getTaskDueDateFormatted() {
    return to_string(this->taskDueDate.tm_mday) +
        "/" +
        to_string(this->taskDueDate.tm_mon) +
        "/" +
        to_string(this->taskDueDate.tm_year);
}

string Task::getDescription() {
    return this->description;
}

string Task::getTaskDoer() {
    return this->taskDoer;
}

string Task::retriveTaskDetails() {
	return "Task: " + 
        getTaskName() + 
		"\nAssigned to: " +
		getTaskDoer() +
		"\nPriority Level: " +
		to_string(priorityLevel) +
        "\nDue Date: " + 
        getTaskDueDateFormatted() + 
        "\nDescription: " + 
        getDescription();
}



