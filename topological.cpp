#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void topsort(int start,vector<vector<int>> &adjlist,vector<int>&visited,stack<int>&st)
{
    visited[start]=1;
    for(auto it:adjlist[start])
    {
        if(!visited[it])topsort(it,adjlist,visited,st);
    }
    st.push(start);

}
vector<int>topo(int v,vector<vector<int>> &adjlist)
{
    vector<int>visited(v,0);
    stack<int>st;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])topsort(i,adjlist,visited,st);
    }
    vector<int>ans;
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;

}
int main()
{
    
    vector<vector<int>> adjlist={
        {},
        {},
        {1},
        {2},
        {0,1},
        {0,3}
    };
    int vertices=adjlist.size();
    vector<int>ans=topo(vertices,adjlist);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
}