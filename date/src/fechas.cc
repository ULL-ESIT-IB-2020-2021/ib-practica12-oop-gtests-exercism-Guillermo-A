#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "fecha.h"

Date::Date_Trans(long date){
    day = int(date/1000000);
    month = int((date-day*1000000)/10000);
    year = int(date-day*1000000-month*10000);
}

Date::Date(int, int, int){
    _day = day;
    _month = month;
    _year = year;
}

void Date::is_bisiesto(){
    const std::string bisiesto = "Es bisiesto";
    const std::string non_bisiesto = "No es bisiesto";
    if((year&4) == 0){
        std::cout << bisiesto << std::endl;
    }else{
        std::cout << non_bisiesto << std::endl;
    }
}