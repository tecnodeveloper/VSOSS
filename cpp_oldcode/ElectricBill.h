#if !defined(ElectricBill_H)
#define ElectricBill_H

class ElectricBill{
    public:
        ElectricBill(int a)
        {}
    void getAmount(int a)
    {
        if(a > 0) {amountpaid = a;}
        else {amountpaid = 0;}
    }
    double setAmount()
    {
        return amountpaid;
    }
    double setVAT()
    {
        return amountpaid * 0.18;
    }
    double setEWURA()
    {
        return amountpaid * 0.01;
    }
    double setREA()
    {
        return amountpaid * 0.03; 
    }
    double setUnits()
    {
        return ((amountpaid - setVAT() - setEWURA() - setREA() - 5000) / 295);
    }
    private:
    double amountpaid;
};

#endif // ElectricBill_H
