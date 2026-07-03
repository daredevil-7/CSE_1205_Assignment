/*
Problem: Event Visitor Registration System

A technology conference keeps track of visitors using their unique Visitor IDs. Since some visitors may attempt to register more than once, the system must ensure that each Visitor ID is stored only once.

You are required to implement the registration system using an **`unordered_set`**.

After storing all visitor IDs, the system receives several queries asking whether specific visitors are registered.

Finally, print the total number of unique registered visitors.

Example

Input

8
101
205
101
310
450
205
512
101
5
205
700
512
100
310

Output

Registered
Not Registered
Registered
Not Registered
Registered
Total Unique Visitors: 4
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n, k, q;
    cin >> n;

    unordered_set<int> vis;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        vis.insert(k);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> k;
        if (vis.count(k))
            cout << "Registered" << endl;
        else
            cout << "Not Registered" << endl;
    }

    cout << "Total unique Visitors: " << vis.size() << endl;

    return 0;
}
