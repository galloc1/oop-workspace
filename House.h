#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House{
    protected:
        Appliance** appliances;
        int numAppliances;
        int currentSize;
    public:
        House();
        House(int numAppliances);

        bool addAppliance(Appliance* appliance);

        double getTotalPowerConsumption();
};

#endif