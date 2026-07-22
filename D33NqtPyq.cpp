#include <bits/stdc++.h>
using namespace std;

struct Transaction
{
    string sender;
    string receiver;
    double amount;
    int timestamp;
};

int main()
{
    int n;
    cin >> n;

    vector<Transaction> t(n);

    for(int i = 0; i < n; i++)
    {
        cin >> t[i].sender 
            >> t[i].receiver 
            >> t[i].amount 
            >> t[i].timestamp;
    }

    vector<bool> fraud(n, false);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(t[i].sender == t[j].sender &&
               t[i].receiver == t[j].receiver &&
               t[i].amount == t[j].amount &&
               abs(t[i].timestamp - t[j].timestamp) <= 60)
            {
                fraud[i] = true;
                fraud[j] = true;
            }
        }
    }

    // Print fraud transactions
    for(int i = 0; i < n; i++)
    {
        if(fraud[i])
        {
            cout << t[i].sender << " "
                 << t[i].receiver << " "
                 << fixed << setprecision(2) 
                 << t[i].amount << " "
                 << t[i].timestamp << endl;
        }
    }

    return 0;
}