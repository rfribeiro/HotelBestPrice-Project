#include <string>
#include <vector>
#include "Hotel.h"

using namespace std;

class HotelReservation
{
private:
	vector<Hotel> m_hotels;

public:
	HotelReservation();
	void addHotel(Hotel newHotel);
	Hotel getHotel();
	void fillData();
	string bestPrice(bool regular,
		vector<int> dates);
};