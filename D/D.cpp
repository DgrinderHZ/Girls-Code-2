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
  vi days(10005, 0);
  days[1000] = 366+38;
  loopi(i,1001, 10002){
      if(i % 4 == 0) days[i] = days[i-1] + 366;
      else days[i] = days[i-1] + 365;
  }

  cin >> t;
  while(t--){
    int n;
    cin >> n;
    switch(days[n]%7){
    case 0:
        cout << "Monday" <<endl; break;
    case 1:
        cout << "Tuesday" <<endl; break;
    case 2:
        cout << "Wednesday" <<endl; break;
    case 3:
        cout << "Thursday" <<endl; break;
    case 4:
        cout << "Friday" <<endl; break;
    case 5:
        cout << "Saturday" <<endl; break;
    case 6:
        cout << "Sunday" <<endl; break;
    }
  }
  return 0;
}


