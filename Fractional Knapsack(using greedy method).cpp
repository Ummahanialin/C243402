#include <iostream>
#include <algorithm>
using namespace std;
struct Item {
int value, weight;
};
bool compare(Item a, Item b) {
double r1 = (double)a.value / a.weight;
double r2 = (double)b.value / b.weight;
return r1 > r2;
}
int main() {
int n;
cout << "Enter number of items: ";
cin >> n;
Item arr[n];
cout << "Enter value and weight of items:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i].value >> arr[i].weight;
}
int capacity;
cout << "Enter knapsack capacity: ";
cin >> capacity;
sort(arr, arr + n, compare);
double totalValue = 0.0;
for (int i = 0; i < n; i++) {
if (capacity >= arr[i].weight) {
totalValue += arr[i].value;
capacity -= arr[i].weight;
} else {
totalValue += arr[i].value * ((double)capacity / arr[i].weight);
break;
}
}
cout << "Maximum value in knapsack = " << totalValue << endl;
return 0;
}
