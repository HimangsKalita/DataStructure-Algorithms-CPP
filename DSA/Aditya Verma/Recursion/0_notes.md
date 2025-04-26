## Recursion

#### Conditions for a question to be Recursion  

1. Make decision to reduce the Input
2. Recursion - Decisions + Choices
3. Design a Recursion Tree
<br>

#### Problems where Recursion is used

1. Array
2. String
3. Linked List
4. Heap
5. Stack
6. Tree
7. Graph (DFS/Flood FIll)
8. DP
9. Backtracking
10. Divide and Conquer  
<br>

#### How to approach Recursion problem

1. Recursive Tree (IP/OP Method)
2. Base Condition - Induction - Hypothesis
3. Choice Diagram
<br>

#### Base Condition

1. Smallest Valid Input
2. Largest Invalid Input
<br>

#### Hypothesis Design - Induction Base Hypothesis 

For the problem print numbers from n to 1

**1. Hypotheses**  

**Reduce input** - Reduce Input by 1 to check the conditions  
For n = 10 -> 1,2,3...10  
For n-1 = 9 -> 1,2,3...9

so Hypothesis is 

Reducing the number n to n-1 will handle the rest of the number other than n itself

**2. Induction**

**Do the work for the missing Input**
10 is missing from second n = 9, so what we can conclude is that we have to handle 10 missing in first case n = 10 itself we have to handle it and not pass the problem to n=9

since we are printing number n to 1 we print the number in n = 10 itself  

**3. Base Condition**  
**Where to break recursion**  

Two Options  
1. Lowest valid  
2. Highest Invalid

**Ex. Code Example**  

```
void print1ToN(int n) {
    if (n == 1) // Base Condition
    {
        cout<<1<<"\n";

        return ;
    }

    print1ToN(n-1); // Hypothesis
    
    cout<<n<<"\n"; // Induction
} 
```
<Br>

#### Height of a Binary Tree

Count 1 node for each layer 