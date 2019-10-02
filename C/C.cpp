#include <vector>
#include <iostream>
#include <set>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)


typedef vector<int> vi;

int inf = 100000008;

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string bin = bitset<32>(n).to_string();
    int ans = count(bin.begin(),bin.end() , '1');
    cout << ((ans%2==1) ? 1 : 0);
  }
  return 0;
}


