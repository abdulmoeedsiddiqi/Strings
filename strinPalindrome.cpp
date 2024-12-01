#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    bool palindrome = true ;
    
    int s  =  0 ;
    int e  =  str.size()-1;
    while(s < e ){
        if(str[s]  != str[e]){
            palindrome = false ;
            break;
        }
        s++ ; 
        e-- ;
    }
    return palindrome ; 
}

int main()
{
    string str = "lilolil";
    
    if( isPalindrome(str)){
        cout << "The string is a palindrome" ;
        }
     else{
         cout << "The string is not a palindrome" ;
    }
    return 0;
}