#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long startX, startY, destX, destY;
        cin >> startX >> startY >> destX >> destY;

        // If destination is below starting point
        if (destY < startY) {
            cout << -1 << "\n";
            continue;
        }

        long long diagonalMoves = destY - startY;
        long long currentX = startX + diagonalMoves;

        // If we cannot reach the required x coordinate
        if (currentX < destX) {
            cout << -1 << "\n";
            continue;
        }

        long long leftMoves = currentX - destX;

        long long totalMoves = diagonalMoves + leftMoves;

        cout << totalMoves << "\n";
    }

    return 0;
}