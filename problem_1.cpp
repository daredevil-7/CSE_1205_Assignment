/*
Problem: Website Unique Visitor Counter

A website records the ID of every visitor who accesses it. Since a visitor may visit the website multiple times, the same Visitor ID can appear more than once in the log.
To determine the popularity of the website, the administrator wants to know how many unique visitors visited the site.
Write a program that uses an unordered_set to store the Visitor IDs and prints the total number of unique visitors.

Input

10
101
205
101
310
205
450
310
512
101
999

Output

Unique Visitors: 6
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    unordered_set<int> vis;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        vis.insert(k);
    }

    cout << "Unique Visitors: " << vis.size() << endl;

    return 0;
}
