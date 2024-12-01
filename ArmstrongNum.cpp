#include<iostream>
using namespace std;
int isArmstrong(int n){
    int copyN = n ;
    int sumOfCubes = 0 ;
    while ( n != 0){
        int digit  = n % 10 ;
        sumOfCubes += ( digit * digit * digit ); 
        n = n / 10 ;
    }
    return copyN==sumOfCubes ;
}
int main()
{
    int n = 153 ;
    if(isArmstrong(n)){
        cout << n << " is Armstrong.\n";
    }
    else{
        cout << n << " is not a Armstrong.\n";
    }
    return 0;
}