#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "fecha.h"

Date::Date(long date){
    _day = int(date/1000000);
    _month = int((date-day*1000000)/10000);
    _year = int(date-day*1000000-month*10000);
    day = _day;
    month = _month;
    year = _year

}

void Date::is_bisiesto(){
    if((year&4) == 0){
        std::cout << "Es bisiesto" << std::endl;
    }else{
        std::cout << "No es bisiesto" << std::endl;
    }
}