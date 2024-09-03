#include<iostream>
#include<math.h>
using namespace std;

int BitWise_Method(int Binary_number){
    int i = 0;
    int Decimal_number= 0;
    while(Binary_number > 0){
        int digit = (Binary_number & 1);
        Decimal_number = Decimal_number + digit * pow(2,i++);
        //Binary_number = Binary_number >> 10;
        Binary_number = Binary_number / 10;
        //cout << "\nDigit is "<<digit<< "\nBinary_Number"<<Binary_number;

    }
    return Decimal_number;     

}
int Division_Method(int Binary_number){
    int decimal_number;
    int i = 0;
    while(Binary_number > 0){
        int digit = Binary_number % 10;
        decimal_number = decimal_number + digit * pow(2,i++);
        Binary_number = Binary_number / 10;

    }
return decimal_number;
}
int main()
{
    int binary_number;
    int Decimal_number;
    cin >> binary_number;
    cout <<"Divisin Method"<<endl;
    Decimal_number = Division_Method(binary_number);
    cout<<"DecimalNumber is: "<<Decimal_number<<endl;
    cout <<"Bitwise Method"<<endl;
    Decimal_number = BitWise_Method(binary_number);
    cout<<"DecimalNumber is: "<<Decimal_number<<endl;

    return 0;
}