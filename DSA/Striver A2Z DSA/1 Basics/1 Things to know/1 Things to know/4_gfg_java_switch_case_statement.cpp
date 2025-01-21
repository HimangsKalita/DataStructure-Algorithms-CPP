// https://www.geeksforgeeks.org/problems/java-switch-case-statement3529/1

// Java Switch Case statement
// Difficulty: BasicAccuracy: 48.02%Submissions: 74K+Points: 1

// Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
// If the user's choice is 1, calculate the area of the circle having the given radius(R).  
// Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

// Note : A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

// Examples :

// Input: choice = 1, R = 5
// Output: 78.53981633974483
// Explaination: The choice is 1. So we have to calculate the area of the circle.

// Input: choice = 2, L = 5, B = 10
// Output: 50
// Explaination: Here we have to calculate the area of the rectangle.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ R, L, B ≤ 100 

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    int choice;
    cin>>choice;

    vector<double> arr = {5,6};

    switch(choice) {

    case 1: {
        double radius = arr[0];
        double circleArea = M_PI * (radius * radius);
        return circleArea;
    }
case 2: {
    double length = arr[0];
    double breadth =  arr[1];
    double rectangleArea = length * breadth;
    return rectangleArea;
}
default: {
    double defaultValue = 0.00;
    return defaultValue;
}
}

return 0;
}

