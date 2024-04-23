#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV : Appliance{
    protected:
        double screenSize;
    public:
        TV();
        TV(int powerRating, double screenSize);

        double getPowerConsumption();

        double getScreenSize();

        void setScreenSize(double screenSize);
};

#endif