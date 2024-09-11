//
// Created by Sirojbek on 9/11/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int leftComputers = 50-int(n%50);
    if(leftComputers==50) {
        cout<<0<<endl;
    }
    else {
        cout<<leftComputers<<endl;
    }
    return 0;
}