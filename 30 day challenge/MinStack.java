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