#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
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