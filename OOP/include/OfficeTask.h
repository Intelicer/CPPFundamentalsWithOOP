#pragma once

#include "Task.h"

class OfficeTask : public Task
{
private:
	string taskType[3] = { "Meeting", "Report", "Presentation" };
	string officeName;
	int taskTypeID; // e.g., "Meeting", "Report", "Presentation"
	string officeLocation;
	string meetingTime;

public:
	OfficeTask(string taskName, int priorityLevel, int day, int month, int year,
		string description, User* taskDoer, string officeName,
		int taskTypeID, string officeLocation);

	void setOfficeName(string name);

	void setTaskType(int taskTypeID);

	void setOfficeLocation(string location);

	string getOfficeName();

	string getTaskType();

	string getOfficeLocation();
};

