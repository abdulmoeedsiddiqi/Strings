#include <iostream>
using namespace std;
void print(int n)
{
    while (n != 0)
    {
        int rem = n % 10;
        cout << rem << " ";
        n = n / 10;
    }
    cout << endl ; 
}

void count(int n)
{
    int cnt = 0 ;
    while (n != 0)
    {
        int rem = n % 10;
        // cout << rem << " ";
        cnt++ ;
        n = n / 10;
    }
    cout << "Count: " << cnt << endl ; 
}


void sum(int n)
{
    int sum = 0 ;
    while (n != 0)
    {
        int rem = n % 10;
        // cout << rem << " ";
        // cnt++ ;
        sum += rem ;
        n = n / 10;
    }
    cout << "Sum: " << sum << endl ; 
}
int main()
{
    int n = 34567;
    print(n);
    count(n);
    sum(n);
    return 0;
}