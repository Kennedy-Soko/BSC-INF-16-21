#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib(0, 11);
    int daysUntilExpiration = distrib(gen);
    cout << "day " << daysUntilExpiration << endl;

    if(daysUntilExpiration == 0)
    cout <<"your subscription has expired" << endl;
    else if(daysUntilExpiration == 1)
    cout <<"your subscription will expire within a day! Renew now and save 20%" << endl;
    else if(daysUntilExpiration <= 5)
    cout <<"your subscription expires in " << daysUntilExpiration << " days, renew now and save 10%" <<endl;
    else if(daysUntilExpiration <= 10)
    cout <<"your subscription will expire soon. renew now!" <<endl;
    else
    cout <<"you have an active subscription " <<endl;
    
    return 0;
    
}