#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class divisor
{

public:
    int result(int arr[], int N)
    {

        int solution = arr[0];
        // printf("%d",arr);
        // printf("%d",N);
        for (int i = 0; i < N; i++)
        {
            solution = __gcd(solution, arr[i]);
        }
        return solution;
    }
};

int main()
{
    divisor ob;
    int arr[] = {2, 3, 34, 34};
    int n = 4;
    cout<<ob.result(arr, n);

    return 0;
}