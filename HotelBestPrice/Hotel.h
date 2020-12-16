#include <string>

using namespace std;

class Hotel
{
	string sName;
	int iRating;
	int iWeekValue;
	int iWeekendValue;
	int iWeekValueLoalty;
	int iWeekendValueLoalty;

public:
	Hotel();
	Hotel(string name,
		int rating,
		int weekValue,
		int weekendValue,
		int weekValueLoalty,
		int weekendValueLoalty);
	int getValue(bool regular, int date);
	string getName();
	int getRating();
};