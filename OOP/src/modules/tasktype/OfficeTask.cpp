#include "../../../include/OfficeTask.h"
#include <string>
#include <stdexcept>

using namespace std;

OfficeTask::OfficeTask(string taskName, int priorityLevel, int day, int month, int year,
    string description, User* taskDoer, string officeName,
    int taskTypeID, string taskLocation) : Task(taskName, priorityLevel, day,month, year,description,taskDoer)
{
    setOfficeName(officeName);
    setTaskType(taskTypeID);
    getTaskLocation(taskLocation);
}



/*
	Sets the name of the office where the task is to be performed.
	Throws invalid_argument if the office name is empty.
*/
void OfficeTask::setOfficeName(string name) {
    if (name.empty()) {
        throw invalid_argument("Office name cannot be empty!");
    }
    this->officeName = name;
}

/*
    Sets the type of the office task.
    Throws invalid_argument if the task type ID is not between 0 and 2.
*/
void OfficeTask::setTaskType(int taskTypeID) {
    if (taskTypeID < 0 || 2 < taskTypeID) {
        throw invalid_argument("TaskTypeID out of range");
    }
    this->taskTypeID = taskTypeID;
}

/*
    Sets the location of the office where the task is to be performed.
    Throws invalid_argument if the office location is empty.
*/
void OfficeTask::setTaskLocation(string location) {
    if (location.empty()) {
        throw invalid_argument("Office location cannot be empty!");
    }
    this->officeLocation = location;
}


/*
    Returns the name of the office where the task is to be performed.
*/
string OfficeTask::getOfficeName() {
    return this->officeName;
}
/*
    Returns the type of the office task.
*/
string OfficeTask::getTaskType() {
    return this->taskType[taskTypeID];
}

/*
    Returns the location of the office where the task is to be performed.
*/
string OfficeTask::getTaskLocation() {
    return this->officeLocation;
}




