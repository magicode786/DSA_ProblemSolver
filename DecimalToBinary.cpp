#include<iostream>
#include<math.h>
using namespace std;

int DecimalToBinaryConversionFunction(int Decimal_Number){
    int Binary_Number;
    int Quotient;
    int Remainder;
    int i =0;
    while (Decimal_Number >= 2){
        Quotient = Decimal_Number / 2;
        Remainder = Decimal_Number % 2;
        Decimal_Number = Quotient;
        cout << "Quotient : "<<Quotient<<endl ;
        cout << "Remainder:"<<Remainder<<endl;
        Binary_Number = Binary_Number + Remainder * pow(10,i);
        i = i + 1;
    }
    Binary_Number = Binary_Number + Quotient * pow(10,i);


    return Binary_Number;
}
int main(){

    int Decimal_number = 0;
    int Binary_Number = 0;
    cout << "Enter the Number to Convert Decimal To Binary\n";
    cin >> Decimal_number;
    Binary_Number = DecimalToBinaryConversionFunction(Decimal_number);
    cout << "Binary_Number is : "<<Binary_Number<<endl;

}