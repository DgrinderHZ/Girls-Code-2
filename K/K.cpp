#include <vector>
#include <iostream>
#include <set>
#include <bitset>
#include <algorithm>

using namespace std;

#define ll long long
#define F first
#define S second
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)


typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii > vpii;
typedef pair<double, double> pdd;
typedef vector<pdd > vpdd;

int inf = 100000008;

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE
  int t;
  vi ui(1000004, 0);
  cin >> t;
  while(t--){
    cin >> ui[3];
    cin >> ui[2];
    cin >> ui[1];
    int n; cin >> n;
      loopi(i,4 , n+1){
          ui[i] = 28*ui[i-1] - 175*ui[i-2] + 300*ui[i-3];
          ui[i] %= 1000000007;
      }
      cout << ui[n] <<endl;
  }
  return 0;
}


