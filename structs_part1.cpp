#include <iostream>
using namespace std;

struct DATE {
    int year;
    int month;
    int day;
};

struct STUDENT {
    char name[26];
    float time;
    int recent_chapter;
    struct DATE last_visit;
}
harryPotter;

int main(void)
{
    strcpy(harryPotter.name,"Potter");    // basic array cannot be assigned by a string it has to be char by char
    harryPotter.last_visit.year = 2020;
    harryPotter.last_visit.month = 1;
    harryPotter.last_visit.day = 7;

    // Structures Initiators
    DATE bithYear = {1992};
    DATE bithDate = {bithYear.year, 1, 7};

    // If an “internal” initiator is complete, we can omit the surrounding curly parentheses.
    STUDENT jamesBond = { "Bond", 3.5, 4, 2012, 12, 21};
    // If the internal initiator, referring to the last_visit field, doesn't cover all the fields.
    STUDENT mataHari = { "Mata Hari", 12., 12, { 2012 }  };


    cout << harryPotter.name<<" - "<<harryPotter.last_visit.day<<"/"<<harryPotter.last_visit.month<<"/"<<harryPotter.last_visit.year<<endl;

    return 0;
}