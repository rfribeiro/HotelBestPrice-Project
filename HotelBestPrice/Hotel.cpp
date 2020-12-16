#include "Hotel.h"

Hotel::Hotel()
{
	this->sName = "";
	this->iRating = 0;
	this->iWeekValue = 0;
	this->iWeekendValue = 0;
	this->iWeekValueLoalty = 0;
	this->iWeekendValueLoalty = 0;
}

Hotel::Hotel(string name,
	int rating,
	int weekValue,
	int weekendValue,
	int weekValueLoalty,
	int weekendValueLoalty)
{
	this->sName = name;
	this->iRating = rating;
	this->iWeekValue = weekValue;
	this->iWeekendValue = weekendValue;
	this->iWeekValueLoalty = weekValueLoalty;
	this->iWeekendValueLoalty = weekendValueLoalty;
}

int Hotel::getValue(bool regular, int date)
{
	if (regular)
	{
		if (date == 0)
		{
			return this->iWeekValue;
		}
		else
		{
			return this->iWeekendValue;
		}
	}
	else
	{
		if (date == 0)
		{
			return this->iWeekValueLoalty;
		}
		else
		{
			return this->iWeekendValueLoalty;
		}
	}
}
string Hotel::getName()
{
	return this->sName;
}

int Hotel::getRating()
{
	return this->iRating;
}