#include "../../../include/HomeTask.h"

using namespace std;

HomeTask::HomeTask(string taskName, int priorityLevel, int day, int month, int year,
    string description, User* taskDoer, string homeName,
    int taskTypeID) : Task(taskName, priorityLevel, day, month, year, description, taskDoer)
{
    setHomeName(homeName);
    setTaskType(taskTypeID);
}



void HomeTask::setHomeName(string name) {
    if (name.empty()) {
        throw invalid_argument("Office name cannot be empty!");
    }
    this->homeName = name;
}


void HomeTask::setTaskType(int taskTypeID) {
    if (taskTypeID < 0 || 2 < taskTypeID) {
        throw invalid_argument("TaskTypeID out of range");
    }
    this->taskTypeID = taskTypeID;
}




string HomeTask::getHomeName() {
    return this->homeName;
}


string HomeTask::getTaskType() {
    return this->taskTypes[taskTypeID];
}

