#include <iostream>

using namespace std;

class BankDeposit{
    int principle;
    int year;
    float rate;
    float value;
    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principle = p;
    year = y;
    rate = r;
    value = principle;

    for (int i = 0; i < y; i++)
    {
        value = value *(1+r);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principle = p;
    year = y;
    rate = float(r)/100;
    value = principle;

    for (int i = 0; i < y; i++)
    {
        value = value *(1+rate);
    }
}

void BankDeposit :: show(){
    cout<<"Principal amount was "<<principle
        <<", Return value after years"<<year
        <<" is "<<value<<endl;
}

int main()
{
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;

    b3.show();

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    b1 = BankDeposit(p,y,r);
    b1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>r;
    b2 = BankDeposit(p,y,R);
    b2.show();

    return 0;
}