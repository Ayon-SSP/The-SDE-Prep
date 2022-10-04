/* C++ implementation for
   Job Sequencing Algorithm */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

// A structure to represent a job
struct Job
{
    char jobId;
    int deadline;
    int profit;
};

// Comparator function for sorting jobs
bool comp(Job a, Job b)
{
    return (a.profit > b.profit);
}

// Print maximum profit from jobs and Job Sequence
void JobSequence(vector<Job> vect)
{
    // sort in decreasing order
    sort(vect.begin(), vect.end(), comp);
    vector<bool> slots; // To keep track of free time slots
    string ans = "";    // to store the result
    int maxProfit = 0;  // to store max profit

    // making all slots free initially
    for (int i = 0; i < vect.size(); i++)
    {
        slots.emplace_back(false);
    }

    // computing the job sequence and max profit
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].deadline; j++)
        {
            if (slots[j] == false)
            {
                slots[j] = true;
                ans.push_back(vect[i].jobId);
                ans.push_back(' ');
                maxProfit += vect[i].profit;
                break;
            }
        }
    }

    // Printing the result
    cout << "Job Sequence to attain Maximum Profit = " << ans << endl;
    cout << "Maximum Profit = " << maxProfit << endl;
}
int main()
{
    fastio;
    // Vector of Jobs
    vector<Job> vect = {{'a', 2, 50}, {'b', 1, 8}, {'c', 2, 13}, {'d', 1, 12}, {'e', 3, 7}};

    // Invoking the function
    JobSequence(vect);
    return 0;
}