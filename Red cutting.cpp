
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cout << "Enter rod length: ";
cin >> n;
vector<int> price(n);
cout << "Enter prices for lengths 1 to " << n << ": ";
for (int i = 0; i < n; i++) {
cin >> price[i];
}
vector<int> dp(n + 1, 0);
for (int i = 1; i <= n; i++) {
int max_val = INT_MIN;
for (int j = 1; j <= i; j++) {
max_val = max(max_val, price[j - 1] + dp[i - j]);
}
dp[i] = max_val;
}
cout << "Maximum obtainable profit: " << dp[n] << endl;
return 0;
}
