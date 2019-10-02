#include <vector>
#include <iostream>
#include <set>
using namespace std;

#define ll long long
int inf = 100000008;

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE
  int t;
  cin >> t;
  while(t--){
    double s, a;
    cin >> s >> a;
    cout << (int)(s/a) <<endl;
  }
  return 0;
}


