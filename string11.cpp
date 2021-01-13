#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find number less than N 
// having k non-zero digits 
int k_nonzero_numbers(string s, int n, int k) 
{ 
    // Store the memorised values 
    int dp[n + 1][2][k + 1]; 
  
    // Initialise 
    for (int i = 0; i <= n; i++) 
        for (int j = 0; j < 2; j++) 
            for (int x = 0; x <= k; x++) 
                dp[i][j][x] = 0; 
  
    // Base 
    dp[0][0][0] = 1; 
  
    // Calculate all states 
    // For every state, from numbers 1 to N, 
    // the count of numbers which contain exactly j 
    // non zero digits is being computed and updated 
    // in the dp array. 
    for (int i = 0; i < n; ++i) { 
        int sm = 0; 
        while (sm < 2) { 
            for (int j = 0; j < k + 1; ++j) { 
                int x = 0; 
                while (x <= (sm ? 9 : s[i] - '0')) { 
                    dp[i + 1][sm || x < (s[i] - '0')][j + (x > 0)] 
                        += dp[i][sm][j]; 
                    ++x; 
                } 
            } 
            ++sm; 
        } 
    } 
  
    // Return the required answer 
    return dp[n][0][k] + dp[n][1][k]; 
} 
  
// Driver code 
int main() 
{ 
    string s = "25"; 
  
    int k = 2; 
  
    int n = s.size(); 
  
    // Function call 
    cout << k_nonzero_numbers(s, n, k); 
  
    return 0; 
} 
