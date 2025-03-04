// https://www.codechef.com/learn/course/cpp-stl/CSTL01/problems/VECTORINTRO

// Vector Introduction

// We already know about arrays which help us store a collection of similar data elements. Another way of storing a collection of similar data is using vectors.

// Vectors are like smart arrays. They store data just like arrays but unlike fixed sized arrays, vectors can grow or shrink by themselves.

// Here's a quick reference for common vector operations in C++.

//     Declaration:

// vector<int> v;

// This declaration creates an empty vector which can hold integers.

// Similar to arrays, you can decide the data type for which you need a collection. For example,

// vector<string> v;  // this would declare an empty vector v of strings.

// Similar to arrays, you can also predefine the size of the vector with a declaration like

// vector<char> v(100); // This declaration creates a vector that can hold 100 characters.

//     Size:

// int sz = v.size();

// At any given point, you can determine the current size (the number of elements) in the vector.

//     Inserting an element:

// v.push_back(x); 

// This inserts an element x at the back of the vector. The size of the vector increases by 11 after this operation.

//     Removing an element:

// v.pop_back(); 

// This removes the last element from the vector. The size of the vector decreases by 11 after this operation.

//     Fetch an element:

// int ith_element = v[i]; 

// Similar to arrays, you can fetch the element at index i using v[i].
// Moreover, you can directly reference the first and last element using v.front(); and v.back(); respectively.

//     First and last of vector: As we know, vector is a container that represents a dynamic array. It provides member functions to access its elements, and begin() and end() are two of those member functions.

//   v.begin(); 
//   v.end();

// v.begin() returns an iterator(coming soon) pointing to the first element in the vector v. It essentially gives you the starting point from where you can begin iterating over the vector.

// Similarly, v.end() returns an iterator pointing to the position just after the last element in the vector v. It does not point to the last element itself but to the position just after it.

//     Clearing the vector:

// v.clear()

// The clear() function is used to remove all the elements of the vector container, thus making it size 0.

// It is important to note that although vector provides insertion and deletion operations, both of these happen at the back of the vector in constant time. If we try to insert/delete at a random position that would take linear time.

// Also note that all of the above mentioned operations take constant time except clear() which takes O(N)O(N). In other words, except clear() function, the complexity of all of the above mentioned operations is O(1)O(1).
// Task

//     Given N integers, write a program to print:
//         middle element if the N odd and is multiple of 3
//         first and last element(space separated) if N is even and is multiple of 3.
//         else sum of first and last element.

// Input Format

//     The first line of input will contain a single integer TT, denoting the number of test cases.
//     Each test case consists of two lines of input.
//         The first line of each test case contains a positive integer NN - the number of integers.
//         The second life each test case contains NN space separated integers.

// Output Format

// For each test case, output on a new line:

//     middle element if the N odd and is multiple of 3
//     space separated first and last element if N is even and is multiple of 3.
//     else sum of first and last element.

// Constraints

//     1≤T,N≤1001≤T,N≤100
//     All integers are positive and don't exceed 100100.

// Sample 1:
// Input
// Output

// 3
// 3
// 1 2 3
// 6
// 1 2 3 4 5 6
// 4 
// 1 2 3 4

// 2
// 1 6
// 5

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);   
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> v1;

        int x;

        for (int i = 0; i < n; ++i)
        {
            cin>>x;
            v1.push_back(x);
        }

        if (n%2 == 1 && n%3==0)
        {
            cout<<v1[n/2];
        }else if(n%2 ==0 && n%3 == 0) {

            cout<<v1[0]<<" "<<v1[n-1];
        }else
        {
            cout<<v1[0]+v1[n-1];
        }

        cout<<endl;
    }

    return 0;
}

