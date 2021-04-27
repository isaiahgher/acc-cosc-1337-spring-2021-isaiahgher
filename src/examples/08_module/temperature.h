//temperature.h

void write_to_file();
void read_from_file();

class Temperature
{
public:
    Temperature(int h, double r):hour(h), reading(r){/*empty code block*/}
    int get_hour()const{return hour;}
    int get)reading()const{return reading};

private: 
    int hour;
    double reading;
}