#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
    char name[6];
    int id, quantity;

public:
    Inventory();
    Inventory(int id,int quantity);
    char getname();
    int getid();
    int getquantity();
    void getData(void);
    void Choice();
};

#endif
