#include <iostream>

using namespace std;

class Event

{

    //atrybuty
    int day, month, year;
    int hour, minute;
    string name;
public:

    Event(string="Brak",int=1,int=1,int=2015,int=12,int=0);
    ~Event();
    //metody
    void load();
    void show();
};

