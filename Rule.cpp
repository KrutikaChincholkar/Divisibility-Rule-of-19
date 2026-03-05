#include <iostream>
using namespace std;

int main() {

    int num, temp;

    cout<<"Enter a number: ";
    cin>>num;

    temp = num;

    while(temp > 100) {
        int last = temp % 10;
        temp = temp / 10 + 2 * last;
    }

    if(temp % 19 == 0)
        cout<<num<<" is divisible by 19";
    else
        cout<<num<<" is not divisible by 19";

    return 0;
}
