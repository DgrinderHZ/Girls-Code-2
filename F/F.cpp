#include <vector>
#include <iostream>
#include <set>
using namespace std;

#define ll long long
#define loop(n) for(int i = 0; i < n; i++)
#define loopi(i, a, n) for(int i = a; i < n; i++)
#define

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
    vi arr(n);
    loop(n){
        cin >> arr[i];
    }

    /// solve
    int ans = 0;
    loopi(i, 0, n-1){
        loopi(j, i+1, n){
            if(arr[i] > arr[j]) ans++;
        }
    }
    cout << ans << endl;
  }
  return 0;
}


