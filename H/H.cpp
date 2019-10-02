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
  int a, b, c;
  vi sieve(100009, 1);
  sieve[0] = 0;
  sieve[1] = 0;
  int i = 2;
  while(i*i <= 100003){
    if(sieve[i] == 1){
        int k = i*i;
        while(k <= 100003){
            sieve[k] = 0;
            k += i;
        }
    }
    i++;
  }

  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vi ar(n);
    loop(n) cin >> ar[i];

    int f, s , found = 0;
    loop(n){
        if(sieve[ar[i]] == 1){
            if(found == 0){
                f = i+1;
            }
            found = 1;
            s = i+1;
        }
    }
    if(found) cout << f << " " << s << endl;
    else cout<<-1 <<endl;
  }
  return 0;
}


