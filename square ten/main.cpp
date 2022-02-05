#include <bits/stdc++.h>
#define pb push_back
#define sqr(x) (x)*(x)
#define sz(a) int(a.size())
#define reset(a,b) memset(a,b,sizeof(a))
#define oo 1000000007

using namespace std;

typedef pair<int,int> pii;
typedef long long ll;

char l[1000007],r[1000007];
int m,n;


void plus1(int pos){
    int t=1;
    for(int i=pos; i>=1; --i){
        if(l[i]=='9') l[i]='0';
        else{
            ++l[i];
            break;
        }
    }
}

vector<int> sub9(int s, int f){
    int t=0;
    vector<int> ans;
    for(int i=f; i>=s; --i){
        int v='0'-l[i]-t;
        if(v<0){
            v+=10;
            t=1;
        }else{
            t=0;
        }
        ans.pb(v);
    }
    return ans;
}

vector<int> sub(int s, int f){
    int t=0;
    vector<int> ans;
    for(int i=f; i>=s; --i){
        int v=r[i]-l[i]-t;
        if(v<0){
            v+=10;
            t=1;
        }else{
            t=0;
        }
        ans.pb(v);
    }
    return ans;
}

vector<int> add(vector<int> &a, vector<int> &b){
    while(sz(a)<sz(b)) a.pb(0);
    while(sz(b)<sz(a)) b.pb(0);
    vector<int> c;
    int t=0;
    for(int i=0; i<sz(a); ++i){
        int v=a[i]+b[i]+t;
        c.pb(v%10);
        t=v/10;
    }
    if(t>0) c.pb(t);
    return c;
}

void printVector(vector<int> &a){
    for(int i=sz(a)-1; i>=0; --i) printf("%d",a[i]);
}

struct Block{
    int s;
    vector<int> cnt;
    Block(){}
    Block(int _s, vector<int> &_cnt){
        s = _s;
        cnt = _cnt;
        while(sz(cnt)>1 && cnt[sz(cnt)-1]==0) cnt.pop_back();
    }
};
vector<Block> result;

int main(){
//    freopen("input.txt","r",stdin);
    scanf("%s",l+1);
    m=strlen(l+1);
    scanf("%s",r+1);
    n=strlen(r+1);
    for(int i=n; i>=n-m+1; --i) l[i]=l[i-(n-m)];
    for(int i=n-m; i>=1; --i) l[i]='0';

    int x=0;
    while(x<=n && l[x+1]==r[x+1]) ++x;
    if(x>n){
        puts("1");
        puts("0 1");
        return 0;
    }
    while(x<n){
        if(x==n-1){
            vector<int> cnt; cnt.pb(r[n]-l[n]+1);
            result.pb(Block(0,cnt));
            l[n]=r[n];
            break;
        }else if(l[n]!='1'){
            vector<int> cnt; cnt.pb(0);
            while(l[n]!='1'){
                plus1(n);
                ++cnt[0];
                while(x<n && l[x+1]==r[x+1]) ++x;
                if(x==n){
                    ++cnt[0];
                    break;
                }
            }
            result.pb(Block(0,cnt));
        }else{
            int u=n-1;
            while(u-1>x && l[u]=='0') --u;
            int len=n-u;
            int s=1;
            while((1<<(s)) <= len) ++s;
            int leftBound = n - (1<<(s));
            int rightBound = n - (1<<(s-1));
            leftBound = max(leftBound,0);
            if(x < leftBound){
                vector<int> cnt = sub9(leftBound+1,rightBound);
                result.pb(Block(s, cnt));
                for(int i=leftBound+1; i<=rightBound; ++i) l[i]='0';
                l[n]='0';
                plus1(leftBound);
            }else{
                vector<int> cnt = sub(leftBound+1, rightBound);
                result.pb(Block(s, cnt));
                for(int i=leftBound+1; i<=rightBound; ++i) l[i]=r[i];
                l[n]='0';
            }
            while(x<n && l[x+1]==r[x+1]) ++x;
            if(x<n) l[n]='1';
        }
    }
    printf("%d\n",sz(result));
    for(int i=0; i<sz(result); ){
        int j=i;
        vector<int> sum = result[i].cnt;
        while(j+1<sz(result) && result[j+1].s==result[i].s){
            vector<int> t=add(sum, result[++j].cnt);
            sum = t;
        }
        printf("%d ",result[i].s);
        printVector(sum);
        i=j+1;
        puts("");
    }
}
