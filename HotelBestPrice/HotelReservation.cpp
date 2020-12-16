#include "HotelReservation.h"
#include <map>
#include <climits>

HotelReservation::HotelReservation()
{
	m_hotels.clear();
}

void HotelReservation::addHotel(Hotel newHotel)
{
	m_hotels.push_back(newHotel);
}

void HotelReservation::fillData()
{
	addHotel(Hotel("Parque das flores", 3, 110, 90, 80, 80));
	addHotel(Hotel("Jardim Botânico", 4, 160, 60, 110, 50));
	addHotel(Hotel("Mar Atlântico", 5, 220, 150, 100, 40));
}

string HotelReservation::bestPrice(bool regular,
	vector<int> dates)
{
	Hotel bestHotel;
	int bestValue = INT_MAX;

	for (auto& hotel : m_hotels)
	{
		int reservationValue = 0;
		for (auto& date : dates)
		{
			reservationValue += hotel.getValue(regular, date);
		}

		if (bestValue > reservationValue)
		{
			bestHotel = hotel;
			bestValue = reservationValue;
		}
		else if (bestValue == reservationValue && bestHotel.getRating() < hotel.getRating())
		{
			bestHotel = hotel;
			bestValue = reservationValue;
		}
	}

	return bestHotel.getName();
}