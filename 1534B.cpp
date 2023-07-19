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

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
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
#define int long long

int count_primes(int n)
{
    const int S = 10000;

    vector<int> primes;
    int nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 2, true);
    for (int i = 2; i <= nsqrt; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    int result = 0;
    vector<char> block(S);
    for (int k = 0; k * S <= n; k++)
    {
        fill(block.begin(), block.end(), true);
        int start = k * S;
        for (int p : primes)
        {
            int start_idx = (start + p - 1) / p;
            int j = max(start_idx, p) * p - start;
            for (; j < S; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < S && start + i <= n; i++)
        {
            if (block[i])
                result++;
        }
    }
    return result;
}

void f()
{
    // while picking up a string, 
    // be sure to check if it's reverse is available in the vector
    // in this way we can fill the boundary words
    // for middle 
    int n, m;
    cin >> n >> m;
    vector<string> dict(n);
    for(int i = 0 ; i < n ; i++) cin >> dict[i];


    map<string, int>mp;
    for(auto it : dict) mp[it] = 1;

    
    string res = "";
    int cnt = 0;
    string rever = "";
    set<string> origin, reve;
    vector<string> ori, rev;
    for(int i = 0 ; i < n ; i++){
        string curr = dict[i];
        reverse(curr.begin(), curr.end());
        if(curr == dict[i]) rever = curr;
        if(mp[curr] == 1){
            ori.push_back(dict[i]);
            rev.push_back(curr);
            // origin.insert(dict);

            mp[curr] = -1;
        }
    }
/*

4 2
oo
xo
ox
oo

ori = oo xo
rev = ox oo
oo xo ox oo

*/

    for(int i = 0 ; i < ori.size() ; i++) res += ori[i];
    for(int i = 0 ; i < ori.size() ; i++) res += rev[i];
    cout << res.size()/2<< '\n';
    for(int i = 0 ; i < res.size()/2 ; i++) cout << res[i];
    // cout << res << '\n';
}

signed main()
{
    int timer = 1;
    // cin >> timer;
    for (int i = 1; i <= timer; ++i)
        f();
    return 0;
}
