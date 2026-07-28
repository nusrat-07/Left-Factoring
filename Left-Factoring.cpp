#include <iostream>
#include <string>
using namespace std;

int main()
{
    string gram, part1, part2;
    string modifiedGram = "", newGram = ""; // Stores modified grammar and new production
    int pos = 0;                        // Tracks the position of the common prefix

    cout << "Enter Production : A->";   // Ask the user to enter the production
    getline(cin, gram);                 // Read the complete production

    // Split production into two parts
    int pipePos = gram.find('|');       // Find the position of '|'

    if (pipePos == string::npos)        // Check if '|' is missing
    {
        cout << "Invalid Production!" << endl;
        return 0;
    }

    part1 = gram.substr(0, pipePos);    // Extract the first production
    part2 = gram.substr(pipePos + 1);   // Extract the second production

    // Find common prefix
    while (pos < part1.length() &&      // Ensure position is within first production
           pos < part2.length() &&      // Ensure position is within second production
           part1[pos] == part2[pos])    // Compare characters of both productions
    {
        modifiedGram += part1[pos];     // Store the common prefix
        pos++;                          // Move to the next character
    }

    // No common prefix
    if (modifiedGram.empty())
    {
        cout << "\nNo common prefix to left-factor." << endl;
        return 0;
    }

    // Add new non-terminal
    modifiedGram += "X";                // Append new non-terminal X

    // Remaining part of first production
    if (pos == part1.length())          // If first production ends after common prefix
        newGram += "$";                 // Add $ (epsilon)
    else
        newGram += part1.substr(pos);   // Store the remaining characters

    newGram += "|";                     // Separate the two productions

    // Remaining part of second production
    if (pos == part2.length())          // If second production ends after common prefix
        newGram += "$";                 // Add $ (epsilon)
    else
        newGram += part2.substr(pos);   // Store the remaining characters


    cout << "\nA->" << modifiedGram << endl; // Print the new factored production
    cout << "X->" << newGram << endl;        // Print the productions of X

    return 0;
}
