#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<string,int> m; //creation of map

    pair<string,int> pair1("babbar",3); //insertion of value
    m.insert(pair1);


    pair<string,int> pair2("love",1);
    m.insert(pair2);

    m["mera"]=1; //other way of insertion
    m["mera"]=2; //updation

    //search
    cout<<m["mera"]<<endl;
    cout<<m["babbar"]<<endl;
    //cout<<m.at("unknown")<<endl;  //no such key inserted
     cout<<m["unknown"]<<endl; //empty slot will be created with zero value
    cout<<m.at("unknown")<<endl;  //error will be shown if used before line no 25
    cout<<m.size()<<endl;
    cout<<m.count("babbar")<<endl;

    //how to iterate
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" " <<it->second<<endl;
        it++;
    }
    return 0;
}
