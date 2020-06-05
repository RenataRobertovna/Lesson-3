//Пользоватедь вводит 5 платежей по кредиту, нужно вычеслить итоговую сумму и среднию.
#include <iostream>
using namespace std;

int main() {
   int assessment1, assessment2, assessment3, assessment4, assessment5;
   int total;
   int average;
   cout<<"Enter assessment 1 - "; cin>>assessment1;
   cout<<"Enter assessment 2 - "; cin>>assessment2;
   cout<<"Enter assessment 3 - "; cin>>assessment3;
   cout<<"Enter assessment 4 - "; cin>>assessment4;
   cout<<"Enter assessment 5 - "; cin>>assessment5;
   total = assessment1 + assessment2 + assessment3 + assessment4 + assessment5;
   cout<<"Total"<<total<<endl;
   average=total/5;
   cout<<"Average = "<<average<<endl;
   if (average > 0 && average < 4)
   {
       cout<<"Not allowed(((";
   } else if (average >= 4) {
       cout<<"Average!";
   }
}
