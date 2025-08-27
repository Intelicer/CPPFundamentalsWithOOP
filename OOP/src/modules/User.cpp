#include "../../include/User.h"
#include <stdexcept>

using namespace std;


User::User(string username, string password, string email, string userRole) {
    setUsername(username);
    setPassword(password);
    setEmail(email);
    setUserRole(userRole);
}


void User::setUsername(string username) {
	if (username.empty()) {
		throw invalid_argument("Username cannot be empty");
	}
	this->username = username;
}

void User::setEmail(string email) {
	if (email.empty()) {
		throw invalid_argument("Email cannot be empty");
	}
    if (email.find('@') == string::npos) {
        throw invalid_argument("Email must contain '@'");
    }
	this->email = email;
}

void User::setPassword(string password) {
    if (password.length() < 8) {
        throw invalid_argument("Password must be at least 8 characters long");
    }

    // Check for at least one digit
    if (password.find_first_of("0123456789") == string::npos) {
        throw invalid_argument("Password must contain at least one digit");
    }

    // Check for at least one uppercase letter
    if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
        throw invalid_argument("Password must contain at least one uppercase letter");
    }

    // Check for at least one special character
    if (password.find_first_of("!@#$%^&*()_+-=[]{}|;:,.<>?") == string::npos) {
        throw invalid_argument("Password must contain at least one special character");
    }

	this->password = password;
}

void User::setUserRole(string userRole) {
    if (userRole != "user" && userRole != "admin") {
        throw invalid_argument("User role must be either 'user' or 'admin'");
    }
    this->userRole = userRole;
}

string User::getUsername() {
	return this->username;
}

string User::getEmail() {
	return this->email;
}

string User::getPassword() {
	return this->password;
}

string User::getRole() {
    return this->userRole;
}