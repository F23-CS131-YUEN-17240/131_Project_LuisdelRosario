#ifndef INVENTORY_H
#define INVENTORY_H

#include "CarInventory.h"

class Inventory {
  private :
    CarRecord records[MAX_SIZE];
    CarRecord* recordPointers[MAX_SIZE];
    int numRecords;
  public :
    Inventory() { numRecords = 0; }
    Inventory(const Inventory &i);
    ~Inventory();

    void selectionSort(CarRecord* [], int, int);
    string toString();
    bool compare(const CarRecord*, const CarRecord*, int);
};

#endif
