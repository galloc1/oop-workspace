#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main(){
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalenceTest;
    equivalenceTest.runTests();

    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    return 0;
}