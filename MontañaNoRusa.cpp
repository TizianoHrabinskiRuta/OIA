#include <iostream>
#include <tuple>
#include <vector>


using namespace std;


int main()
{
    int Xi = 0, Yi = 0, Tally = 0, TotalChanges = 0, T1 = 0, T2 = 0;
    vector<tuple<int, int>> Elevations;

    cin >> TotalChanges;

    for(int i = 0; i < TotalChanges; i++)
    {
        cin >> T1 >> T2;
        Elevations.push_back(make_tuple(T1, T2));
    }

    cin >> Xi >> Yi;

    for(int i = 2; i < (Elevations.size() - 1); i += 2)//Cover edge case of if last mound has been passed
    {
        if(get<1>(Elevations[i]) <= Yi) 
        {
            Tally++;
        }
        
        if(get<1>(Elevations[i]) > Yi)  break;
    } 

    cout << Tally << endl;
    
    return 0;
}