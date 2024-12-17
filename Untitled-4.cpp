#include<iostream>

int main(){
    unsigned short int x, n;
    std::cout<<"Введите с клавиатуры десятичное неотрицательное целое число X: \n";
    std::cin>>x;
    std::cout<<"Введите номер бита в этом числе n: \n";
    std::cin>>n;
    x=x&~(1<<n);
    std::cout<<"Число в десятичной системе счисления: "<<x<<std::endl;
    std::cout<<"Число в восьмеричной системе счисления: "<<std::oct<<x<<std::endl;
    std::cout<<"Число в шестнадцатеричной системе счисления: "<<std::hex<<x<<std::endl;
    return 0;
}//функция перевода
