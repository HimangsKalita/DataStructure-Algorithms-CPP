// https://www.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type

// Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
// Given a data type, help Geek in finding the size of it in byte.

// Data Type - Character, Integer, Long, Float and Double

// Example 1:

// Input: Character
// Output: 1
// Explaination: For java it would be 2 bytes.

// Example 2:

// Input: Integer
// Output: 4



// Your Task:

// Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
// Return -1 if the input data type is invalid.


#include <bits/stdc++.h>
using namespace std;

int dataTypeSize(string str) {

    if (str == "Character")
    {
        return sizeof(char);
    }else if (str == "Integer")
    {
        return sizeof(int);
    }else if (str == "Long")
    {
        return sizeof(long);
    }else if (str == "Float")
    {
        return sizeof(float);
    }else if(str == "Double")
    {
        return sizeof(double);
    }else
    {
        return -1;
    }
}

int main(){

    ios::sync_with_stdio(0);   
    cin.tie(0);

    cout<<dataTypeSize("Character");
    cout<<dataTypeSize("Integer");
    cout<<dataTypeSize("Long");
    cout<<dataTypeSize("Float");
    cout<<dataTypeSize("Double");


    return 0;
}

