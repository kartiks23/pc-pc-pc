import java.util.*;

public class Stack2 {
    public static void main(String[] args) {
        Stack<Character> st = new Stack<>();
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch == ')') {
                if (st.peek() == '(') {
                    System.out.println("True");
                    return;
                } else {
                    while (st.peek() != '(') {
                        st.pop();
                    }
                    st.pop();
                }
            } else {
                st.push(ch);

            }
        }
        System.out.println("False");

    }
}
