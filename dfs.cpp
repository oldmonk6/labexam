#include<iostream>
#include<vector>
using namespace std;
void dfs(int start,vector<vector<int>>& adjlist,vector<int>&visited,vector<int>&ls)
{
    visited[start]=1;
    ls.push_back(start);
    for(auto it: adjlist[start])
    {
        if(!visited[it])
        {
            dfs(it,adjlist,visited,ls);
        }
    }


}
vector<int> dfsofgraph(int start,vector<vector<int>>& adjlist)
{
    int n=adjlist.size();
    vector<int>visited(n,0);
    vector<int>ls;
    dfs(start,adjlist,visited,ls);
    return ls;

}
int main()
{
    
    vector<vector<int>> adjlist={
        {1,2},
        {0,2,3},
        {0,1},
        {1}

    };
    vector<int>ls=dfsofgraph(0,adjlist);
    for(auto it:ls)
    {
        cout<<it<<" ";
    }


}