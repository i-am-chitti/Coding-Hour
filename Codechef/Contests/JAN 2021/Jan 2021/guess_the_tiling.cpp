#include<bits/stdc++.h>
using namespace std;
#define fin  cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fout cout.flush()
#define initialize(w,t) memset(w,t,sizeof(w))
#define S(t) (ll)t.size()
#define bl '\n'
#define input(azz,szz,ezz) sfor(pzz,szz,ezz) cin>>azz[pzz]
#define all(v) v.begin(),v.end()
#define ll long long
#define ldb long double
#define db double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>
#define pldb pair<ldb,ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define vb vector<bool>
#define vldb vector<ldb>
#define vpll vector< pll >
#define vpldb vector< pldb >
#define sfor(i,azz,bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i,bzz,azz) for (ll i = (bzz); i >= (azz); --i)
const ll mod = 1e9+7;
// const ll mod=998244353 ;
const ll maxn = 1e6+1;
const ll llmax = (1ll<<60);
const int intmax = (1<<30);
vll fact , ifact;
vll primes;
vll spf;

bool solve(ll coutn){
  ll n,q,k;
  cin>>n>>q>>k;
  ll res[n][n];
  ll r;
  initialize(res,-1);
  cout<<1<<" "<<1<<" "<<1<<endl;
  fout;
  cin>>r;
  if(r==-1) return 0;
  if(r<k)
  {
    res[0][0]=1;
    res[0][1]=1;
    res[1][0]=1;
    res[1][1]=0;
  }
  else if(r>k)
  {
    res[0][0]=0;
    res[0][1]=1;
    res[1][0]=1;
    res[1][1]=0;
  }
  else
  {
    bool flag=0;
    ll ri=0,ci=1;
    sfor(i,0,3)
    {
      ll rj=0,cj=2;
      sfor(j,0,2)
      {
        k=r;
        cout<<1<<" "<<(rj%2)+1<<" "<<cj<<endl;
        fout;
        cin>>r;
        if(r==-1) return 0;
        if(r>k)
        {
          if(n==2)
          {
            flag=1;
            res[0][0]=0;
            res[0][1]=1;
            res[1][0]=1;
            res[1][1]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<1<<" "<<1<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          if(r<k)
          {
            flag=1;
            res[0][0]=1;
            res[0][1]=1;
            res[1][0]=1;
            res[1][1]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<1<<" "<<1<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
        }
        rj++;
      }
        if(flag) break;
        ri++;
        k=r;
        cout<<1<<" "<<(ri%2)+1<<" "<<ci<<endl;
        fout;
        cin>>r;
        if(r==-1) return 0;
        if(r>k)
        {
          if(n==2)
          {
            flag=1;
            res[0][0]=0;
            res[0][1]=1;
            res[1][0]=1;
            res[1][1]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<1<<" "<<1<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          if(r<k)
          {
            flag=1;
            res[0][0]=1;
            res[0][1]=1;
            res[1][0]=1;
            res[1][1]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<1<<" "<<1<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
        }
    }
  }
  sfor(i,2,n-1)
  {
      if(res[i-1][0]!=0)
       {
      k=r;
      cout<<1<<" "<<i<<" "<<1<<endl;
      fout;
      cin>>r;
      if(r==-1) return 0;
      res[i-1][0]^=1;
      if(r>k)
      {
        res[i][0]=1;
        res[i][1]=0;
      }
       }
       if(res[i-1][1]!=1)
       {
           k=r;
      cout<<1<<" "<<i<<" "<<2<<endl;
      fout;
      cin>>r;
      if(r==-1) return 0;
      res[i-1][1]^=1;
      if(r>k)
      {
        res[i][0]=1;
        res[i][1]=0;
      }
       }
       if(res[i][0]!=-1) continue;
      ll cj=0;
      sfor(j,0,3)
      {
        k=r;
        cout<<1<<" "<<i+1<<" "<<(cj%2)+1<<endl;
        fout;
        cin>>r;
        if(r==-1) return 0;
        if(r>k)
        {
          k=r;
          cout<<1<<" "<<i<<" "<<1<<endl;
          fout;
          cin>>r;
          res[i-1][0]^=1;
          if(r==-1) return 0;
          if(r<k)
          {
            res[i][0]=1;
            res[i][1]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<i<<" "<<1<<endl;
          fout;
          cin>>r;
          res[i-1][0]^=1;
          if(r==-1) return 0;
        }
        cj++;
      }
  }
  sfor(i,2,n-1)
  {
        if(res[0][i-1]!=0)
        {
      k=r;
      cout<<1<<" "<<1<<" "<<i<<endl;
      fout;
      cin>>r;
      if(r==-1) return 0;
      res[0][i-1]^=1;
      if(r>k)
      {
        res[0][i]=1;
        res[1][i]=0;
      }
        }
        if(res[1][i-1]!=1)
        {
            k=r;
      cout<<1<<" "<<2<<" "<<i<<endl;
      fout;
      cin>>r;
      if(r==-1) return 0;
      res[1][i-1]^=1;
      if(r>k)
      {
        res[0][i]=1;
        res[1][i]=0;
      }      
        }
        if(res[0][i]!=-1) continue;
      ll rj=0;
      sfor(j,0,3)
      {
        k=r;
        cout<<1<<" "<<(rj%2)+1<<" "<<i+1<<endl;
        fout;
        cin>>r;
        if(r==-1) return 0;
        if(r>k)
        {
            k=r;
          cout<<1<<" "<<1<<" "<<i<<endl;
          fout;
          cin>>r;
          res[0][i-1]^=1;
          if(r==-1) return 0;
          if(r<k)
          {
            res[0][i]=1;
            res[1][i]=0;
            break;
          }
          k=r;
          cout<<1<<" "<<1<<" "<<i<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          res[0][i-1]^=1;
        }
        rj++;
      }
  }
  sfor(i,2,n-1)
  {
    sfor(j,2,n-1)
    {
      if(res[i-1][j-1]!=0)
      {
        k=r;
          cout<<1<<" "<<i<<" "<<j<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          res[i-1][j-1]^=1;
      }
      if(res[i-1][j]!=1)
      {
        k=r;
        cout<<1<<" "<<i<<" "<<j+1<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          res[i-1][j]^=1;
      }
      if(res[i][j-1]!=1)
      {
        k=r;
        cout<<1<<" "<<i+1<<" "<<j<<endl;
          fout;
          cin>>r;
          if(r==-1) return 0;
          res[i][j-1]^=1;
      }
      
      k=r;
      cout<<1<<" "<<i+1<<" "<<j+1<<endl;
      fout;
      cin>>r;
      if(r==-1) return 0;
      if(r>k)
      {
        res[i][j]=0;
      }
      else
      {
        res[i][j]=1;
      }
    }
  }
  cout<<2<<endl;
  sfor(i,0,n-1)
  {
    sfor(j,0,n-1)
    {
      cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }
  fout;
  cin>>r;
  if(r==-1) return 0;
  return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(0));
    ll t=1;
    cin>>t;
    sfor(i,1,t)
        if(!solve(i)) break;
    return 0;
}