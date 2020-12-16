#include "pch.h"
#include "../HotelBestPrice/HotelReservation.h"

TEST(HotelReservation, TestParqueDasFlores) {
    bool regular = true;
    vector<int> datas;
    datas.push_back(0);
    datas.push_back(0);
    datas.push_back(0);

    HotelReservation hotelReservation;
    hotelReservation.fillData();
    EXPECT_EQ(hotelReservation.bestPrice(regular, datas), "Parque das flores");
    EXPECT_TRUE(true);
}

TEST(HotelReservation, TestJardimBotanico) {
    bool regular = true;
    vector<int> datas;
    datas.push_back(0);
    datas.push_back(1);
    datas.push_back(1);

    HotelReservation hotelReservation;
    hotelReservation.fillData();
    EXPECT_EQ(hotelReservation.bestPrice(regular, datas), "Jardim Botânico");
    EXPECT_TRUE(true);
}

TEST(HotelReservation, TestMarAtlantico) {
    bool regular = false;
    vector<int> datas;
    datas.push_back(0);
    datas.push_back(1);
    datas.push_back(1);

    HotelReservation hotelReservation;
    hotelReservation.fillData();
    EXPECT_EQ(hotelReservation.bestPrice(regular, datas), "Mar Atlântico");
    EXPECT_TRUE(true);
}