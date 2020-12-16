// test.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "HotelReservation.h"
using namespace std;

int main()
{
    // regular ou fidelidade
    // data = semana ou fds
    bool regular = true;
    vector<int> datas;
    datas.push_back(0);
    datas.push_back(0);
    datas.push_back(0);

    HotelReservation hotelReservation;
    
    cout << hotelReservation.bestPrice(regular, datas);
}
