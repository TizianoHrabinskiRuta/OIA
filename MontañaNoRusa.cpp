#include <iostream>
#include <tuple>
#include <vector>


using namespace std;


int main()
{
    int Xi, Yi, Tally = 0, TotalChanges, T1, T2;
    vector<tuple<int, int>> Elevations;

    cin >> TotalChanges;

    for(int i = 0; i < TotalChanges; i++)
    {
        cin >> T1 >> T2;
        Elevations.push_back(make_tuple(T1, T2));
    }

    cin >> Xi >> Yi;
    cout << "Elevation is: " << Yi << endl;

    for(int i = 0; i < (Elevations.size() - 1); i++)//Cover edge case of if last mound has been passed
    {
        if(i % 2 == 0) continue;



        if(get<1>(Elevations[i]) <= Yi) 
        {
            Tally++;
        }
        if(get<1>(Elevations[i]) > Yi) {cout << "pollo" << endl; break;}
    } 

    cout << Tally << endl;
    
    return 0;
}