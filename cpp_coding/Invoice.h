#if !defined(Invoice_H)
#define Invoice_H
#include <iostream>
#include <string>
using std::cout;
using std::string;
class Invoice
{
public:
    Invoice(string PN, string PD, int qn, int amo)
    {
        partName = PN;
        partDescription = PD;
        if (qn > 0)
        {
            quantity = qn;
        }
        else if (amo > 0)
        {
            price = amo;
        }
        cout << "Intial INVOICE";
        cout << "\nPart number: " << partName;
        cout << "\nPart description: " << partDescription;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price;
        cout << "\nVAT: " << VAT;
        cout << "\nDiscount: " << discount;
    }
    void getName(string PN)
    {
        partName = PN;
    }
    void getDescription(string PD)
    {
        partDescription = PD;
    }
    void getQuantity(int qn)
    {
        if(qn < 0) quantity = 0 ;
        else if( qn >= 0 ) quantity = qn;
    }
    void getPrice(int amo)
    {
        if(amo < 0) price = 0 ;
        else if( amo >= 0 ) price = amo;
    }
    void getDiscount(double dis)
    {
        if(dis < 0) discount = 0 ;
        else if( dis >= 0 ) discount = dis;
    }

string setName()
    {
        return partName;
    }
    string setDescription()
    {
        return partDescription;
    }
    int setQuantity()
    {
        return quantity;
    }
    int setPrice()
    {
        return price;
    }
    double setDiscount()
    {
        return discount;
    }
    double setVAT()
    {
        return VAT;
    }
    double setInvoiceAmount()
    {
        return quantity * price * (1.0 - VAT - discount); 
    }

private:
    string partName;
    string partDescription;
    int quantity{0};
    int price{0};
    double VAT{0.15};
    double discount{0.0};
};

#endif
