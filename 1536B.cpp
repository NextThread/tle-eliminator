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

void f(){
    int n;
    string s;
    cin >> n >> s;
    vector<string>st1, st2, st3;
    for(char ch = 'a' ; ch <= 'z' ; ch++) {
        string cur = "";
        cur += ch;
        st1.push_back(cur);
    }
    for(char ch = 'a' ; ch <= 'z' ; ch++) {
        for(char ch1 = 'a' ; ch1 <= 'z' ; ch1++) {
            string len2 = "";
            len2 += ch;
            len2 += ch1;
            st2.push_back(len2);
        }
    }
    for(char ch = 'a' ; ch <= 'z' ; ch++) {
        for(char ch1 = 'a' ; ch1 <= 'z' ; ch1++) {
            for(char ch2 = 'a' ; ch2 <= 'z' ; ch2++) {
            string len3 = "";
            len3 += ch;
            len3 += ch1;
            len3 += ch2;
            st3.push_back(len3);
        }
      }
    }
    // if(s.find("ac") == std::string::npos) {
    //     cout << "ac";
    //     return;
    // }
    // for(auto it : st1) cout << it << ' ';
    // cout << endl;
    // for(auto it : st2) cout << it << ' ';
    // cout << endl;
    // for(auto it : st3) cout << it << ' ';
    for(int i = 0 ; i < st1.size() ; i++) {
        if(s.find(st1[i]) == std::string::npos) {
            cout << st1[i] << '\n';
            return;
        }
    }
    for(int i = 0 ; i < st2.size() ; i++) {
        if(s.find(st2[i]) == std::string::npos) {
            cout << st2[i] << '\n';
            return;
        }
    }
    for(int i = 0 ; i < st3.size() ; i++) {
        if(s.find(st3[i]) == std::string::npos) {
            cout << st3[i] << '\n';
            return;
        }
    }
}

signed main(){
    int timer = 1;
    cin >> timer;
    for(int i = 1 ; i <= timer ; ++i)f();
    return 0;
}