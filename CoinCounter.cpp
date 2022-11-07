#include <vector>
#include <iostream> 

using namespace std;
vector <int> Coins;
int TotalSum = 0;

const int MOD = 1e9 + 7;
int Solve(int n, int s)
{

    for(auto c : Coins)
    {
        if( (s + c) == n) { TotalSum++; return 0;} // fails with bigger numbers
        if( (s + c) < n) Solve(n, s + c);
        if( (s + c) > n) return 0;
    }

    return TotalSum;
}


int main()
{
 
 int NumberOfCoins, DesiredSum;
 cin >> NumberOfCoins >> DesiredSum;
 
 for(int i = 0; i < NumberOfCoins; i++) 
 {
    int In = 0;
    cin >> In;
    Coins.push_back(In);
 }

 for(int i = 0; i < Coins.size() -1; i++) 
    if(Coins[i] > DesiredSum)
    {
        Coins.erase(Coins.begin() + i);
    };

    
 
  Solve(DesiredSum, 0);


    cout << (TotalSum % MOD) << endl;
    return 0;
}