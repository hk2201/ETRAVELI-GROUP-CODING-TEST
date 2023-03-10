#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int V, vector<vector<int>>& adj)
{
    vector<int> ind(V, 0);

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            ind[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (ind[i] == 0)
        {
            q.push(i);
        }
    }

    int cnt = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cnt++;

        for (auto it : adj[node])
        {
            ind[it]--;
            if (ind[it] == 0)
            {
                q.push(it);
            }
        }
    }

    if (cnt == V)
    {
        return false;
    }
    return true;
}

int main()
{

    int V = 4;

    vector<vector<int>> adj = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 1},
    };

    if (isCyclic(V, adj) == true)
    {
        cout << "Graph contains a Cycle";
    }
    else
    {
        cout << "There's no cycle in a graph";
    }

    return 0;
}
