long long int count(int S[], int m, int n)
{
    int size = m;
    int sum = n;
    int t[size + 1][sum + 1];
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    }
    for (int i = 1; i <= size; i++)
        for (int j = 1; j <= sum; j++)
            (S[i - 1] <= j) ? t[i][j] = t[i][j - S[i - 1]] + t[i - 1][j] : t[i][j] = t[i - 1][j];

    return t[size][sum];
}