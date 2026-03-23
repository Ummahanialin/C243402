#include <iostream>
using namespace std;
int main() {
int n, key;
cout << "Enter array size: ";
cin >> n;
int arr[n];
cout << "Enter " << n << " sorted elements:\n";
for(int i = 0; i < n; i++) {
cin >> arr[i];
}
cout << "Enter value to search: ";
cin >> key;
int low = 0, high = n - 1;
int mid;
int position = -1;
while(low <= high) {
mid = (low + high) / 2;
if(arr[mid] == key) {
position = mid;
break;
}
else if(arr[mid] < key) {
low = mid + 1;
}
else {
high = mid - 1;
}
}
if(position != -1) {
cout << "Element found at index: " << position << endl;
} else {
cout << "Element not found." << endl;
}
return 0;
}
