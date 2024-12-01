#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Abdul Moeed "  ; 
    for(int i= 0 ; i < str.length() ; i++){
        cout << str[i] ;
    }
    cout << endl; 
    for( auto i : str) {
        cout << i ;
    }
    cout << endl ; 
    return 0;
}