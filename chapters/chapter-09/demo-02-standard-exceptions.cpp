// ============================================================
// demo-02-standard-exceptions.cpp
// Objective: Catch std::invalid_argument and std::out_of_range
// from std::stoi. Catch order goes from specific to generic.
// SoundWave parses playlist ratings typed as text.
// ============================================================

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    cout << "=== SoundWave Demo 02: Standard Exceptions ===" << endl;
    cout << endl;

    // Sample inputs a user might type for a song rating (1-5),
    // plus bad cases for the conversion lesson.
    const int COUNT = 4;
    string inputs[COUNT] = {
        "4",                  // valid int
        "not_a_number",       // invalid_argument
        "999999999999999999", // out_of_range for int
        "2"                   // valid again — shows we keep going
    };

    for (int i = 0; i < COUNT; i++) {
        cout << "Input [" << i << "]: \"" << inputs[i] << "\"" << endl;

        try {
            int rating = stoi(inputs[i]);
            cout << "  Parsed rating: " << rating << endl;
        }
        // More specific catches first
        catch (const invalid_argument& error) {
            cout << "  invalid_argument: text is not a valid integer." << endl;
            cout << "  Message: " << error.what() << endl;
        }
        catch (const out_of_range& error) {
            cout << "  out_of_range: number is too large (or too small) for int." << endl;
            cout << "  Message: " << error.what() << endl;
        }
        // A generic catch would go last, if we used one:
        // catch (const exception& error) { ... }
        // Putting exception before invalid_argument / out_of_range
        // would hide those specific handlers (order matters).

        cout << endl;
    }

    cout << "Demo complete. Specific catch blocks ran; program did not abort." << endl;

    return 0;
}
