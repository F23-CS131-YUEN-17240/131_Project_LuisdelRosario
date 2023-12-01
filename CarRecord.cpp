#include "CarRecord.h"

CarRecord :: CarRecord() {
  carID_ = "N/A";
  model_ = "N/A";
  quantity_ = 0;
  price_ = 0.0;
}

CarRecord :: CarRecord(string carID, string model, int quantity, double price) {
  setRecord(carID, model, quantity, price);
}

CarRecord :: CarRecord(const CarRecord &other) {
  setRecord(other.carID_, other.model_, other.quantity_, other.price_);
}

CarRecord :: ~CarRecord() {
  //no specific need for cleanup, so empty destructor
}

void CarRecord :: setRecord(string carID, string model, int quantity, double price) {
  carID_ = carID;
  model_ = model;
  quantity_ = quantity;
  price_ = price; 
}

string CarRecord :: toString() {
  stringstream ss;
  ss << left << setw(21) << carID_
     << setw(17) << model_
     << right << setw(8) << quantity_
     << fixed << setprecision(2) << setw(19) << price_ << endl;
  return ss.str();
}
