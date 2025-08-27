#include <iostream>
#include <string>
#include "../../include/Task.h"


using namespace std;
/**
 * Struct is a class that could be idenentified inside a class to make nested class
 *
 * Here is a Person struct that has info like name and age with encapsulation
 */

struct Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age) {
        setName(name);
        setAge(age);
    }

    void setName(string name) {
        if (name.empty()) {
            throw invalid_argument("Name cannot be empty!");
        }
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;

    }

    string getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }
};

/**
 * Another struct but isnt encapsulated and doesnt have any constructor declerard
 */

struct Boat
{
    string name;
    int model;

};

/*
	Main function
	Runs the application
*/
int main()
{
    //person struct 
    //Person p{ "mah",12 };
    //cout << p.getName() << "\n";

    //boat struct 
    //Boat boat{ "mah",12 };
    //cout << p.getName() << "\n";


    //Task
    //Task t1 = { "Clean",1,25,4,2026, "test1"};
    //cout << t1.getTaskDetails() << "\n";

    //   cout << "\n";
    //   Task* t2 = &t1;
	//cout << t2 << "\n"; //place in memory address
	//t2->setDescription("testing");
	//cout << t2->getDescription() << "\n"; //get what is contained in the memory address






    //pointer new and delete functionality
    //   cout << "\n";
	//Task* t3 = new Task("Buy Grogeries", 10,12,2026, "Apple, Tomato");
	//cout << t3 << "\n"; //memory address
    //   t3->setTaskName("Shopping");
	//cout << t3->getTaskDetails();





    /*
        Task t1 = { "Clean1",1,30,12,2026, "test2", user1};
        Task t2 = { "Clean2",2,30,12,2026, "test2", user1};
        Task t3 = { "Clean3",3,21,7,2026, "test3", user1 };

        Task arr[3] = { t1,t2,t3 };
	    //cout << arr << "\n"; //address of the first element in the array
        //   cout << (*arr).getDescription() << "\n"; //content of the first element in the array

	    //cout << arr+1 << "\n"; //address of the second element in the array
        //   cout << (arr+1)->getDescription() << "\n"; //content of the second element in the array

        //using pointers in array
        Task *ptr = arr;
	    cout << ptr << "\n"; //address of the first element in the array
	    cout << ptr->getDescription() << "\n"; //address of the first element in the array
	    cout << (ptr + 1)->getDescription() << "\n"; //content of the second element in the array
    
	    //using sizeof will return the bytes used by the array
	    //so we have to devided by the first elemnt size to get the number of elements in the array
        for (size_t i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
        {
            cout << (ptr + i)->getDescription() << "\n"; 

        }
	    //another way of doing a for loop is doing for each loop
        for (Task i:arr)
        {
            cout << i.getDescription() << "\n"; 

        }
    */




    User user("mahmoud","oasdo21ASd3#","mahmoud@run.no");
    Task task("Cleaning1",1,25,10,2025,"do it", &user);

	cout << task.getTaskDetails() << "\n";

    return 0;
}

