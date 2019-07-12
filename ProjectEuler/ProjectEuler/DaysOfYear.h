#include<assert.h>
//simple structure for problem19

/// type for representing day in a month: [1, 31]
typedef int Day;
/// type for representing a month: JAN for January, etc.	
enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

/// type for representing a month: JAN for January, etc.	
enum DaysOfWeek { MON, TUE, WED, THU, FRI, SAT, SUN };

struct DaysOfYear
{

	Day day;
	Month month;
	int year;
	DaysOfWeek dayOfWeek;

	///initialize today date
	DaysOfYear(Day d, Month m, int y, DaysOfWeek dow=MON) : day(d), month(static_cast<Month>(m)), year(y), dayOfWeek(dow)
	{}

	/// return next month
	void incMonth()
	{
		(month == DEC) ? month = JAN : month = static_cast<Month> (month + 1);
	}

	///return next day of week
	void incDayOfWeek()
	{
		(dayOfWeek == SUN) ? dayOfWeek = MON : dayOfWeek = static_cast<DaysOfWeek>(dayOfWeek + 1);
	}

	/// check if given year is leap
	bool is_leap(int y)
	{
		return (y % 4 == 0 && !(y % 100 == 0 && y % 400 != 0));
	}

	/// calculates the number of days in a current month in current year
	int month_days()
	{
		switch (month)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31; break;
		case 4: case 6: case 9: case 11: return 30; break;
		case 2: if (is_leap(year)) return 29;
				else return 28;
		default: return -1;
		}
	}

	///calculates tomorrow day
	void next_date()
	{
		if (month_days() == day)
		{
			if (month == DEC) year++;
			incMonth();
			day = 1;
		}
		else day++;
		incDayOfWeek();
	}

	///equal
	bool operator==(const DaysOfYear& oth)
	{
		return (this->year == oth.year && this->month == oth.month && this->day == oth.day);
	}

	///equaln't
	bool operator!=(const DaysOfYear& oth)
	{
		return !(*this == oth);
	}

	///prefix ++
	DaysOfYear& operator++()
	{
		next_date();
		return *this;
	}
	///postfix ++
	DaysOfYear operator++(int)
	{
		auto old = *this;
		++*this;
		return old;
	}
};
