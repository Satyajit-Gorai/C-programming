#include <bits/stdc++.h>

using namespace std;
//using namespace std::chrono;
//auto start = high_resolution_clock::now();


void dfs(int source,bool *vis,vector<int> graph[])
{
    vis[source] = true;
    cout<<source<<endl;
    for(auto child: graph[source])
        {
        if(!vis[child])
        {
            dfs(child,vis,graph);
        }
    }

}
int main()
{
    int n,e;
    cout<<"Enter no of vertices and edges:- \n";
    cin>>n>>e;
    cout<<"Enter the path from one vertex to anothr vertex:-\n";
    vector<int> graph[n+1];
    for(int i=1;i<=e;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[u].push_back(u);

    }
    cout << "graph created///"<<endl;
     //cout<<"printing graph..."<<endl;
     //std::vector<int>::iterator j;   
     //for(int i=1;i<=e;i++)
     //{
     //    cout <<" "<< i;
     //    for(j = graph[i].begin(); j != graph[i].end(); j++)
     //    {
     //        cout << " "<< *j;
     //    }
     //    cout<<endl;
     //}
     //cout<<"graph printed...\n";
    bool vis[n+1];
    memset(vis, false, sizeof(vis));
    for(int i=1;i<e;i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,graph);
        }
    }
     cout<<"end...\n";
    //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);
    //cout <<"Execution time is: "<<duration.count()<<" microseconds\n";
    return 0;

}