#ifndef CARRECORD_H
#define CARRECORD_H

class CarRecord {
  private : 
      string carID_, 
             model_;
      int quantity_;
      double price_;
  public :
      CarRecord();
      CarRecord(string, string, int, double);
      CarRecord(const CarRecord &other);
      ~CarRecord();

      void setRecord(string, string, int, double);
      string toString();
      string getCarID() const { return carID_; }
      string getModel() const { return model_; }
      int getQuantity() const { return quantity_; }
      double getPrice() const { return price_; }
};

#endif
