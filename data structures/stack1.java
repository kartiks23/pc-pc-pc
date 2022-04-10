import java.util.*;

public class stack1 {
    public static void main(String[] args) {
        Stack2<Integer> myStack = new Stack2<>();
        myStack.push(10);
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());
        myStack.push(20);
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());
        myStack.push(30);
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());
        myStack.push(40);
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());
        myStack.pop();
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());
        myStack.pop();
        System.out.println(myStack + "--->>" + myStack.peek() + " " + myStack.size());  

    }
}
