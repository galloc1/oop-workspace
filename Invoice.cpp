#include "Invoice.h"

bool Invoice::addServiceCost(double costDollars){
    if(costDollars >= 0.0){
        dollarsOwed += costDollars;
        return true;
    }
    return false;
}

double Invoice::getDollarsOwed(){
    return dollarsOwed;
}

std::string Invoice::getInvoiceId(){
    return invoiceId;
}