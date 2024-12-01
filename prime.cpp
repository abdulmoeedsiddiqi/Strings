#include<iostream>
using namespace std;
string isPrime(int n){

    for( int i = 2 ; i*i < n ; i++){
        if(n%i == 0){
            return " is Not a Prime Number. ";
        }
    }
    return " is Prime Number. ";
}
int main()
{
    int n ; 
    cout << "Enter a Number: " ; 
    cin >> n ;
    cout << n << isPrime(n) <<endl;
    return 0;
}