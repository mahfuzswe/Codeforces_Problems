#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to calculate the area of the triangle using the determinant formula
double calculate_area(int x1, int y1, int x2, int y2, int x3, int y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

// Function to count the boundary lattice points using the GCD method
int count_boundary_points(int x1, int y1, int x2, int y2, int x3, int y3) {
    auto gcd = [](int a, int b) {
        return b == 0 ? a : __gcd(b, a % b);
    };

    auto count_points_on_line = [&](int x1, int y1, int x2, int y2) {
        int dx = x2 - x1, dy = y2 - y1;
        int steps = gcd(abs(dx), abs(dy));
        return steps + 1;
    };

    int b1 = count_points_on_line(x1, y1, x2, y2);
    int b2 = count_points_on_line(x2, y2, x3, y3);
    int b3 = count_points_on_line(x3, y3, x1, y1);

    return b1 + b2 + b3 - 3; // Subtract 3 because the vertices are counted twice
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    double A = calculate_area(x1, y1, x2, y2, x3, y3);
    int B = count_boundary_points(x1, y1, x2, y2, x3, y3);
    int I = A - B / 2 + 1;

    cout << I << " " << B << endl;

    return 0;
}
