#ifndef WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
	
	public:
		Warlock();
		// std::string const &getName() const;
		const std::string &getName() const;
		const std::string &getTitle() const;

};
#endif //WARLOCK_HPP