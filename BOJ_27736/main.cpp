#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto u = int{ 0 };
	auto d = int{ 0 };
	auto x = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		int v;
		cin >> v;

		if (1 == v) {
			++u;
		}
		else if (-1 == v) {
			++d;
		}
		else {
			++x;
		}
	}

	const auto hf = (n + 1) / 2;
	if (hf <= x) {
		cout << "INVALID";
	}
	else {
		if (d < u) {
			cout << "APPROVED";
		}
		else {
			cout << "REJECTED";
		}
	}

	return 0;
}