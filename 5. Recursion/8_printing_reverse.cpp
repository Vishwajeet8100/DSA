// ptinting in the reverse order
#include<iostream>
#include<vector>
using namespace std;
void print(int n){
    cout<<n<<" ";
    if(n == 0){
        return ;   // when print(0)  we will stop the loop by returning nothing the purpose is to just stop the loop .
    }
    print(n-1);
}
int main()
{
    print(5);
    return 0;
}

// thoery about call stack from chatgpt.

// Great! Let's break down the **stack call** for your recursive function `print(n)`.  

// ---

// ### **Function Execution & Stack Calls**
// The function `print(n)` recursively calls itself until `n == 0`, then it starts returning. Here’s how the **stack grows and shrinks**:

// #### **Step-by-Step Execution**
// **Function Call Sequence:**
// 1. `print(5)`
// 2. `print(4)`
// 3. `print(3)`
// 4. `print(2)`
// 5. `print(1)`
// 6. `print(0)` → **Base case reached, function starts returning**

// ---

// ### **Stack Representation**
// Each function call is **pushed** onto the stack, and once `n == 0`, calls start **popping** out.

// #### **Stack Growth (Push Operations)**
// ```
// Call: print(5) → cout << 5
// Call: print(4) → cout << 4
// Call: print(3) → cout << 3
// Call: print(2) → cout << 2
// Call: print(1) → cout << 1
// Call: print(0) → cout << 0
// (Base case reached, now stack unwinds)
// ```
// At this point, the **stack looks like this (Top → Bottom):**
// ```
// print(0)  <-- Top
// print(1)
// print(2)
// print(3)
// print(4)
// print(5)  <-- Bottom
// ```

// #### **Stack Unwinding (Pop Operations)**
// Now, as each function **returns**, it pops off the stack:
// ```
// Return: print(0) → Done (pops)
// Return: print(1) → Done (pops)
// Return: print(2) → Done (pops)
// Return: print(3) → Done (pops)
// Return: print(4) → Done (pops)
// Return: print(5) → Done (pops)
// ```
// Finally, `main()` finishes execution, and the program exits.

// ---

// ### **Final Output**
// ```
// 5 4 3 2 1 0
// ```

// ---

// ### **Visual Representation of Stack**
// | Stack Operation | Function Call | Console Output |
// |---------------|--------------|--------------|
// | Push | `print(5)` | `5 ` |
// | Push | `print(4)` | `4 ` |
// | Push | `print(3)` | `3 ` |
// | Push | `print(2)` | `2 ` |
// | Push | `print(1)` | `1 ` |
// | Push | `print(0)` | `0 ` |
// | Pop  | `print(0) returns` |   |
// | Pop  | `print(1) returns` |   |
// | Pop  | `print(2) returns` |   |
// | Pop  | `print(3) returns` |   |
// | Pop  | `print(4) returns` |   |
// | Pop  | `print(5) returns` |   |

// ---

// ### **Key Takeaways**
// 1. **Stack follows LIFO (Last In, First Out).**  
// 2. Each function call **adds a new stack frame** until the base case is reached.  
// 3. Once `print(0)` executes, **all function calls return one by one**, popping from the stack.  
// 4. The order of output is **top-down (5 to 0)** since the `cout` happens **before** the recursive call.  

// Would you like to see a **reverse-order print using recursion**? 🚀