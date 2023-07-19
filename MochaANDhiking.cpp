#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void dfs(int src,  vector<vector<int> > &adj, vector<int> &vis, vector<int> v) {
    vis[src] = 1;
    for(auto it : adj[src]) {
        if(vis[it] != 1) {
            dfs(it, adj, vis, v);
        }
    }
}

void f(){
    int n;
    cin >> n;
    vector<int> a(n+2);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    vector<vector<int> > adj(n+1);
    for(int i = 1 ; i <= n ; i++) {
        if(a[i] == 0) {
            adj[i].push_back(n+1);
        } else {
            adj[n+1].push_back(i);
        }
    }
    vector<int>v;
    vector<int> vis(n+1, -1);
    dfs(1, adj, vis, v);
    // for(int x : v) cout << x << ' ';
    for(int i = 0 ; i < v.size() ; i++) cout << v[i] << ' ';
    cout << endl;
}

signed main(){
    int timer = 1;
    cin >> timer;
    for(int i = 1 ; i <= timer ; ++i)f();
    return 0;
}