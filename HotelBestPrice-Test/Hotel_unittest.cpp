#include "pch.h"
#include "../HotelBestPrice/Hotel.h"

TEST(Hotel, DefaultConstructor) {
    Hotel hotel;

    EXPECT_EQ(hotel.getName(), "");
    EXPECT_EQ(hotel.getValue(true, 0), 0);
    EXPECT_EQ(hotel.getValue(true, 1), 0);
    EXPECT_EQ(hotel.getValue(false, 0), 0);
    EXPECT_EQ(hotel.getValue(false, 1), 0);

    EXPECT_TRUE(true);
}

TEST(Hotel, ParameterConstructor) {
    Hotel hotel("test hotel", 5, 10, 20, 30, 40);

    EXPECT_EQ(hotel.getName(), "test hotel");
    EXPECT_EQ(hotel.getRating(), 5);
    EXPECT_EQ(hotel.getValue(true, 0), 10);
    EXPECT_EQ(hotel.getValue(true, 1), 20);
    EXPECT_EQ(hotel.getValue(false, 0), 30);
    EXPECT_EQ(hotel.getValue(false, 1), 40);

    EXPECT_TRUE(true);
}