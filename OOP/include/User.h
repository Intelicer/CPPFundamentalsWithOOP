#pragma once
#include <string>

using namespace std;


/*
	User represents a user of the system with attributes like username, email, password, and role.
	It includes methods to set and get these attributes with basic validation.
*/
class User {
	private:
		string username;
		string email;
		string password;
		string userRole = "user";
		


	public:

		/*
			Initializes a new User object with the provided username, password, email, and optional user role.
			Throws invalid_argument if any of the inputs are invalid.
		*/
		User(string username, string password, string email, string userRole = "user");


		/*
			Sets the username for the user.
			Throws invalid_argument if the username is empty.
		*/
		void setUsername(string username);
		
		/*
			Sets the email for the user.
			Throws invalid_argument if the email is empty or does not contain '@'.
		*/
		void setEmail(string email);
		
		/*
			Sets the password for the user.
			Throws invalid_argument if the password is less than 8 characters, does not contain at least one digit,
			one uppercase letter, and one special character.
		*/
		void setPassword(string password);


		/*
			Assigns a role to the user.
			Throws invalid_argument if the role is not "user" or "admin".
		*/
		void setUserRole(string userRole);

		
		/*
			Returns the username of the user.
		*/
		string getUsername();
		
		/*
			Returns the email of the user.
		*/
		string getEmail();
		
		/*
			Returns the password of the user.
		*/
		string getPassword();

		/*
			Returns the role of the user.
		*/
		string getRole();

};