#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {

    // Opens the InputData.txt file
    ifstream file("InputData.txt");

    // Defines data to be stored that will help find boundaries
    struct Point {int x; string character; int y;};
    vector<Point> points; // List to store all rows from file
    int x, y, maxX = 0, maxY = 0;
    string character;

    // Reads file row by row until end of file
    while (file >> x >> character >> y) {

        points.push_back({x, character, y});

        // Finds max coords for sizing boundaries
        if (x > maxX) maxX = x;
        if (y > maxY) maxY = y;
    }
    file.close(); // Closes file now that I have all the data I need

    // Creates 2d vector (grid) based on max boundaries found
    vector<vector<string>> grid(maxY + 1, vector<string>(maxX + 1, " "));

    // Fills grid with characters by itererating through saved points and placing said character
    // into the cooresponding [x][y] coordinates
    for (int i = 0; i < points.size(); i++) {

        int currentX = points[i].x;
        int currentY = points[i].y;
        string curCharacter = points[i].character;

        grid[currentY][currentX] = curCharacter;
    }

    // Prints the hidden message
    // Uses nested loop to iterate both rows and columns
    for (int i = 0; i <= maxY; i++) {

        for (int j = 0; j <= maxX; j++) {

            cout << grid[i][j];
        }

        cout << endl; // Moves to next line after finishing each row
    }

    return 0;
}
