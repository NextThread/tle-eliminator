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
#define int long long

void f(){
    int n; 
    cin >> n;
	string s = to_string(n);
	for (int i = s.size() - 1; i >= 0; i--) {
		for (int j = i+1; j < s.size(); j++) {
            // string p1 = s.substr(1, s[i]);
            // string p2 = s.substr(1, s[j]);
            string part1 = string(1, s[i]);
            string part2 = string(1, s[j]);
			int num = stoi(part1+part2);
			if (num % 25 == 0) {
				cout << s.size() - i - 2 << '\n';
				return;
			}
		}
	}
	cout << s.size() << '\n';
    return;
}

//.  g o o d

signed main(){
    int timer = 1;
    cin >> timer;
    for(int i = 1 ; i <= timer ; ++i)f();
    return 0;
}