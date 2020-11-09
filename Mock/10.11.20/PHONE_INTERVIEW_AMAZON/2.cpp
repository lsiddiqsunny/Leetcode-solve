/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
 

Example 1:

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 

Constraints:

Methods pop, top and getMin operations will always be called on non-empty stacks.
*/
class MinStack {

    private Stack<Integer> stack = new Stack<>();
    private Stack<Integer> minStack = new Stack<>();

    public void push(int x) {
        if(stack.empty()){
            stack.push(x);
            minStack.push(x);
        }else{
            stack.push(x);
            if(minStack.peek() > x){
                minStack.push(x);
            }else{
                minStack.push(minStack.peek());
            }
        }
    }

    public void pop() {
        if(stack.empty()){
            //throw exception
        }else{
            stack.pop();
            minStack.pop();
        }
    }

    public int top() {
        if(stack.empty()){
            //throw Exception();
            return -1;
        }else{
            return stack.peek();
        }
    }

    public int getMin() {
        if(minStack.empty()){
            //throw Exception
            return -1;
        }else{
            return minStack.peek();
        }
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */