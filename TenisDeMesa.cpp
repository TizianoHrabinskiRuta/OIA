#include <vector>
#include <iostream>


using namespace std;

int main()
{
   
    vector<vector<int>> A;

    int N,M;

    cin >> N >> M;

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int K;
            cin >> K;
            A[i].push_back(K);
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << A[i][j];
        }
    }

    return 0;
}