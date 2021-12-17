#include <iostream>

using namespace std;

float moneyRecived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

int main()
{
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank accout, you will recieve "<<moneyRecived(money)<<" after one year"<<endl;
    
    cout<<"For vip : If you have "<<money<<" Rs in your bank accout, you will recieve "<<moneyRecived(money,1.1)<<" after one year"<<endl;
    return 0;
}