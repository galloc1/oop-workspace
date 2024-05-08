#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice{
    protected:
        std::string invoiceId;
        double dollarsOwed;
    public:
        Invoice(std::string invoiceId) : invoiceId(invoiceId), dollarsOwed(0.0) {}
        bool addServiceCost(double costDollars);
        double getDollarsOwed();
        std::string getInvoiceId();
};

#endif