#include<bits/stdc++.h>

using namespace std;
//using namespace std::chrono;

//auto start = high_resolution_clock::now();
vector<vector<int>> graph;
vector<bool> visited;

void bfs(int node)
{
    queue<int> que;
    que.push(node);
    visited[node] = true;
    while(!que.empty())
    {
        node = que.front();
        que.pop();
        cout<< node << " ";
        for(int i =0; i<graph[node].size();i++)
        {
            if(!visited[graph[node][i]])
            {
                que.push(graph[node][i]);
                visited[graph[node][i]] = true;
            }
        }
    }
    cout<<"end...\n";
    //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);
    //cout <<"Execution time is: "<<duration.count()<<" microseconds\n";

}
int main()
{
    int n,u,v;
    cout<< "Enter the no of vertices: ";
    cin >> n;
    graph.resize(n+1);
    cout <<"\n enter path \n";
    for(int i=1;i<=n;i++)
    {
        cin >> u>>v;
        graph[u].push_back(v);
        graph[u].push_back(v);
    }
    cout<<"graph created///\n";
    visited.resize(n+1);
    bfs(1);
    return 0;
}