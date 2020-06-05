#include <iostream> //подключение библиотеки
using namespace std; //пространство имён

int main() {
    int a, b; //
    int number;
    cout<<"Input number a"; //вывод в консоль
    cin>>a; //ввод в консоль
    cout<<"Input number b";
    cin>>b;
    if (a<b){
        cout<<a;
    } else {
        cout<<b;
    }
}
