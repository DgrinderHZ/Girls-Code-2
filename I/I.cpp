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

typedef struct me{
    int val;
    struct me *left;
    struct me *right;
    me(){
        val = 0;
        left = right = NULL;
    }
}Tree;

map<int, int> p, emptyP;
void fillParent(int r, int h){

    if( h > 1){

        int lf = r-pow(2, h-1), rt = r-1;
        if(p[rt] == 1) p[rt] = r;
        fillParent(rt, h-1);
        if(p[lf] == 1) p[lf] = r;
        fillParent(lf, h-1);

    }else
        return;

}

int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  int n;
  cin >> n;
  while(n--){
    int h, n;
    cin >> h >> n;

    int root = (int)pow(2, h) - 1;

    fillParent(root, h);
    int i = 0;
    p[root] = -1;
    vi vq(n);
    while(n--){
        int q; cin >> q;
        p[q] =  1;
        vq[i] = q; i++;
    }

    fillParent(root, h);

    for(auto c: vq) cout << p[c] << " ";
    cout << endl;
    p = emptyP;
  }
  return 0;
}


