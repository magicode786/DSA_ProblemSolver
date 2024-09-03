#include<iostream>
#include<math.h>
using namespace std;

int Division_Method_Function(int Decimal_Number){
    int Binary_Number;
    int Quotient;
    int Remainder;
    int i =0;
    while (Decimal_Number > 0){
        int bit = Decimal_Number % 2;
        Binary_Number = Binary_Number + bit * pow(10,i++); //This is Just to display the number 1010
        Decimal_Number = Decimal_Number / 2;
        //cout << "Quotient : "<<Decimal_Number<<endl ;
        //cout << "Remainder:"<<bit<<endl; 
    }


    return Binary_Number;
}

int Bitwise_DecimalToBinaryConversionFunction(int Decimal_Number){
    int i = 0;
    int Binary_Number=0 ;
    while (Decimal_Number > 0){
        int bit = (Decimal_Number & 1);
        Binary_Number = Binary_Number + bit * pow(10,i++); //This is Just to display the number 1010
        Decimal_Number = Decimal_Number >> 1;
    }

    return  Binary_Number;


}
int main(){

    int Decimal_number = 0;
    int Binary_Number = 0;
    cout << "Enter the Number to Convert Decimal To Binary\n";
    cin >> Decimal_number;
    cout <<"Division Method: "<<endl;
    Binary_Number = Division_Method_Function(Decimal_number);
    cout << "Binary_Number is : "<<Binary_Number<<endl;
    cout <<"Bitwise Method"<<endl;
    Binary_Number = Bitwise_DecimalToBinaryConversionFunction(Decimal_number);
    cout << "Binary_Number is : "<<Binary_Number<<endl;

}