#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "fecha.h"
#include <vector>

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

std::vector<long> take_date(std::vector<long>my_date(), std::fstream &file){
    char dates[20];
    while(!feof(file)){
        fgets(dates, 8, file);
    }
    rewind(file);
    for(int i = 0; !feof(file); i++){
        voiid(dates);
        fgets(date, 8, file);
        my_date.push_back(i) = atoi(dates);
    }
    return my_date();
}

void voiid(char date[]){
    for(int i = 0; i < 20; i++){
        date[i] = '\0';
    }
}