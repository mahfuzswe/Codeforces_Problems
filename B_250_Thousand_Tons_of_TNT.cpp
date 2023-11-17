#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findMinMax() {
    vector<int> numbers = {60978, 82265, 78961, 56708, 39846, 31071, 4913, 4769, 29092, 91348, 64119, 72421, 98405, 222, 14294};
    auto minElement = *min_element(numbers.begin(), numbers.end());
    auto maxElement = *max_element(numbers.begin(), numbers.end());
    cout << "Min: " << minElement << ", Max: " << maxElement << "\n";
}

int main() {
    findMinMax();
    return 0;
}