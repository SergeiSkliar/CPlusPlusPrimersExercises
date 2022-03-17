#include "date.h"

const std::vector<std::string> Date::months{ "January", "February", "March", "April", "May", "June", "July",
									"August", "September", "October", "November", "December"};
const std::vector<std::string> month_short{ "Jan", "Feb", "Mar", "Apr", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
const std::string Date::nums{ "0123456789" };
const std::string Date::alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };

std::ostream& print(std::ostream& os, const Date& date)
{
	os << date.day << '.' << date.month << '.' << date.year;
	return os;
}

Date::Date(const std::string& d) : Date()
{
	if (d.find_first_of(alphabet) != std::string::npos) 
	{
		std::vector<std::string>::size_type pos;
		for (pos = 0; pos != months.size(); ++pos)
		{
			if (d.find(months[pos]) != std::string::npos) {
				month = pos + 1;
				break;
			}
		}

	}


}
