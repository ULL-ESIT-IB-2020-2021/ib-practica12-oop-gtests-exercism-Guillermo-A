
class Date{
    public:
    Date_Trans(long date);
    void is_bisiesto();
    std::vector<long> take_date(std::vector<long> my_date(), std::fstream &file);
    private:
        int day, month, year;
};