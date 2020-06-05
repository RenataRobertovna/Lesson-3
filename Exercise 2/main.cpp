//Найти максимальное число!
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int number;
    cout<<"Input number a";
    cin>>a;
    cout<<"Input number b";
    cin>>b;
    cout<<"Input number c";
    cin>>c;
    cout<<"Input number d";
    cin>>d;
    int max;
    max = d;
    if (max<b){
        max = b;
    }
    if (max<c) {
        max = c;
    }
    if (max<d){
        max = d;
    }
    cout<<"Max="<<max;
}
