#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int currsum = 0, maxsum = INT_MIN;

    for (int val : vec) {
        currsum += val;
        maxsum = max(currsum, maxsum);
        if (currsum < 0) {
            currsum = 0;
        }
    }

    cout << "Maximum subarray sum is: " << maxsum << endl;

    return 0;
}
