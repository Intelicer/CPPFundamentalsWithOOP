#include <iostream>
#include <string>
#include "../../include/Task.h"
#include "../../include/OfficeTask.h"


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


struct OpOver
{
    
	int attr1;
	int attr2;

public:

    OpOver(int value1, int value2) {
        attr1 = value1;
        attr2 = value2;
	}

    OpOver operator-(OpOver obj){
        OpOver temp(0,0);
        temp.attr1 = this->attr1 - obj.attr1;
        temp.attr2 = this->attr2 - obj.attr2;
        return temp;
	}

    void display() {
        cout << "attr1: " << attr1 << ", attr2: " << attr2 << "\n";
	}

};


/*
	enumeration
	you can use enum to create a set of named integer constants
	For example if we have days of the week
	you can assign the starting value of the enum
	by changing the first value to the desired value
	For example enum daysOfWeek { Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
*/
enum daysOfWeek { Sunday, 
                Monday,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday };



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

	//app test task.cpp and  user.cpp
    //User user("mahmoud", "oasdo21ASd3#", "mahmoud@run.no");
    //Task task("Cleaning1", 1, 25, 10, 2025, "do it", &user);

    //cout << task.retriveTaskDetails() << "\n";
    //

    /*
        
		when using static variables inside a class
		it will be shared among all the objects of that class

		For example if we have a class Car
		you can count the number of cars created
        From the car class


        when using static in methods
		you can access the method without creating an object
         
		by using the class name
		For example if we have a class ClassName
		ClassName::MethodName();
    
    */


    /*
		You can create friend functions
		that can access private members of a class
		For example if we have a class ClassName
		friend void friendFunction(ClassName obj);
		but be careful when using friend functions
		because it breaks encapsulation
		and you must declare the function inside the class
		and the implementation outside the class

    */


    /*
		Operator Overloading
		You can overload operators for your classes
		For example if we have a class ClassName
		ClassName add(ClassName obj1, ClassName obj2);

        //Before

		obj3.add(obj1, obj2);
        
        void add(ClassName obj1, ClassName obj2){
			attr1 = obj1.attr1 + obj2.attr1;
			attr2 = obj1.attr2 + obj2.attr2;
        }

		//After with operator overloading
        obj3 = obj1 + obj2;
        
        ClassName operator+(ClassName obj){
            ClassName res;
            res.attr1 = this->attr1 + obj.attr1;
            res.attr2 = this->attr2 + obj.attr2;
            return res;
		}

        all operators that can do overloading to:
		+ - * / % ^ & | ~ ! = < > += -= *= /= %= ^= &= |= ++ -- , -> () []

		but be careful when using operator overloading
		because it can make your code less readable
		and you must declare the function inside the class
		and the implementation outside the class



    */
     //   OpOver obj1(5, 10);
	    //OpOver obj2(3, 6);

	    //// this->attr, this in this case represents 
     //   // the arttibute of the object that are before the minus operator
	    //OpOver obj3 = obj1 - obj2;
     //   
	    //obj3.display();
     //   



    /*
		Inheritance
		You can create a class that inherits from another class
		For example if we have a Base class
		class Base {
		//base class code
		};
		class Derived : public Base {
		//derived class code
        };

    */

    // Fix: Pass a pointer to User for OfficeTask constructor
    //User *user = new User("Mahmoud", "asmdKW$1", "msm@run.no");
    //OfficeTask task1("testOut", 2, 10, 12, 2040, 
    //                "Talk about progression", user, 
    //                "Toghther", 0, "Third floor bulding B");
    //
    //cout << task1.getDescription();


    /*
		Polymorphism
		You can create a class that inherits from another class
		and override its methods
		For example if we have a Base class
		class Base {
		//base class code
		virtual void show() {
		    cout << "Base class show function called" << endl;
            }
        };
		class Derived : public Base {
		//derived class code
        void show() override {
            cout << "Derived class show function called" << endl;
            }
        };
    */

    return 0;
}

