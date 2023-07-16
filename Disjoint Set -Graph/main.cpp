#include <iostream>

using namespace std;
class disjoint{
vector<int>rank,parent;
public:
    disjoint(int n){
    rank.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    }
    int findparent(int node){
    if(node==parent[node]{
       return node;
    }
       return parent[node]=findparent(parent[node]);
    }
    void unionbyrank(int u,int v){
    int ul_u=findparent(u);
    int ul_v=findparent(v);
    if(ul_u==ul_v){   //they belong to same component
        return ;
    }
    if(rank(ul_v)<rank(ul_u)){
        parent[ul_v]=ul_u;
    }
    else if(rank(ul_u)<rank(ul_v)){
        parent[ul_u]=ul_v;
    }
    else{
        parent[ul_u]=ul_v;
        rank[ul_v]++;
    }
    }

};

int main()
{
    disjoint ds(7);
    ds.unionbyrank(1,2);
    ds.unionbyrank(2,3);
     ds.unionbyrank(4,5);
    ds.unionbyrank(6,7);
    ds.unionbyrank(5,6);
    if(ds.findparent(3)==ds.findparent(7)){
        cout<<"same component"<,endl;
    }
    else{
        cout<<"different component"<<endl;
    }

return 0;
}

