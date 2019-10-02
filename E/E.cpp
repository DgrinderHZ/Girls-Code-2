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
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vpdd p(n);
    loop(n){
        cin >> p[i].F >> p[i].S;
    }
    double slop = (p[1].S - p[0].S)/(p[1].F - p[0].F);
    if(slop < 0.) {
        cout << "Not Mountains and Valleys\n";
        break;
    }
    slop = (p[n-1].S - p[n-2].S)/(p[n-1].F - p[n-2].F);
    if(slop > 0.) {
        cout << "Not Mountains and Valleys\n";
        break;
    }

    int ans = 1;
    loopi(i, 1, n-2){

        slop = (p[i+1].S - p[i].S)/(p[i+1].F - p[i].F);

        if( i % 2 == 1 && slop > 0.) {
            ans  = 0;
            break;
        }

        if( i % 2 == 0 && slop < 0.) {
            ans  = 0;
            break;
        }

    }

    if(ans) cout << "Mountains and Valleys\n";
    else cout << "Not Mountains and Valleys\n";
  }
  return 0;
}


