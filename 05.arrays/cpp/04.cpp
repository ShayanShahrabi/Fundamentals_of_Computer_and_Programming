#include <iostream>
#include <string>

std::string findLexicographicallySmallestShift(const std::string& s) {
    std::string smallestShift = s; // Start with the original string
    
    int n = s.length();
    
    // Perform shifts from k = 1 to n
    for (int k = 1; k < n; ++k) {
        // Generate the k-shifted string
        std::string shifted = s.substr(k) + s.substr(0, k);
        
        // Update smallestShift if we found a smaller one
        if (shifted < smallestShift) {
            smallestShift = shifted;
        }
    }
    
    return smallestShift;
}

int main() {
    std::string s;
    std::cin >> s; // Read input string
    
    std::string result = findLexicographicallySmallestShift(s);
    
    std::cout << result << std::endl; // Output the smallest shift
    
    return 0;
}
