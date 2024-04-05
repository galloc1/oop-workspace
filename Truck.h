#ifndef TRUCK_H
#define TRUCK_H
#include <string>

class Truck{
    private:
        int code;
        std::string name;
    public:
        Truck() : code(0), name("") {}

        Truck(int b_code, std::string b_name) : code(b_code), name(b_name) {}

        std::string get_brand_name() {return name;}
        int get_brand_code() {return code;}

        ~Truck(){};
};

#endif