#include <vector>
#include <iostream>
#include <set>
#include <map>
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

  int n;
  cin >> n;
  while(n--){
    int c, len;
    string s;
    cin >> c >> len;
    cin >> s;
    loop(len){
        if(s[i] == '@') s[i] = '#';
        else if(i % 2 == 0 || i % 3 == 0 ){
            s[i] = 'a' + (((s[i]-'a')+c)%26);
        }
    }
    cout << s <<endl;
  }
  return 0;
}


