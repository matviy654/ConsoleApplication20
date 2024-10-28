#include <iostream>

class Date {
private:
    int day, month, year;

public:

    Date() : day(1), month(1), year(2000) {} 
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

 
    void incrementDay();

   
    Date& operator++();          
    Date operator++(int);       
    Date& operator--();        
    Date operator--(int);        
    bool operator==(const Date& other) const;
    bool operator!=(const Date& other) const;
    bool operator>(const Date& other) const;
    bool operator<(const Date& other) const;
    Date& operator+=(int days);
    Date& operator-=(int days);
    Date& operator=(const Date& other);

    void operator()() const;

    friend std::ostream& operator<<(std::ostream& out, const Date& date);
    friend std::istream& operator>>(std::istream& in, Date& date);
};


int main() {
    Date date1(28, 2, 2024); 
    ++date1;
    std::cout << date1;
    return 0;
}
