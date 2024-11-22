#include "Warlock.hpp"

// Coplier's form (Constructor+Destructor+Copy constructor+Operator overload=)
// Constructor
Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title) 
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}
// Destractor
Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}
// Copy constructor
Warlock::Warlock(const Warlock &other) : _name(other._name), _title(other._title) {}
// Operator overload =
// https://en.cppreference.com/w/cpp/language/copy_assignment , https://stackoverflow.com/questions/59364218/copy-assignment-operator-clarification , https://cplusplus.com/doc/tutorial/classes2/
Warlock& Warlock::operator=(const Warlock &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_title = other._title;
	}
	return *this;
}
void Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

const std::string& Warlock::getName() const
{
	return _name;
}

const std::string & Warlock::getTitle() const
{
	return _title;
}