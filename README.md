# CSCI101-Final-Project

A short C++ program that reads coordinate data from a file, determines the maximum grid size, and prints characters in their given coordinates in a 2D array to reveal the hidden message.

IMPORTANT: I copied the data in the given InputData.docx file into notepad as plain text and removed the headers for simplification. The file was then named InputData.txt.
 
IMPORTANT: I wrote my code in Visual Studio but did not have a C++ compiler built-in or to import and my WiFi is too slow to download VS Studio’s community C++ compiler, as such, I just copy pasted my VS Studio code into an online C++ compiler website. I hope you do not mind.

1. Uses ifstream to open updated plain text InputData.txt file
2. Iterates given data to determine maxX and maxY to set the grid size.
3. Uses a struct called Point to store the x, y, and character values in a vector.
4. A 2D vector (the grid) is created and filled with spaces, the program then places the characters in their positions corresponding to their x, y coordinates, and finally prints the result using nested loops.
5. Final result should be “EICMDKO”.
