#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    // TODO: complete the function as per instructions
   int n = size;
    int prefix = 1;
    for (int i = 0; i < n; i++) {
    output[i] = prefix;prefix *= arr[i];
    }


int suffix = 1;
for (int i = n - 1; i >= 0; i--) {
output[i] *= suffix;
suffix *= arr[i];
}

return output;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}
