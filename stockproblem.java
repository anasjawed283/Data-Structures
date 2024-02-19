import java.util.Stack;

public class StockSpanProblem {

    public static int[] calculateSpan(int[] arr) {
        int n = arr.length;
        int[] span = new int[n];
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < n; i++) {
            while (!stack.isEmpty() && arr[stack.peek()] <= arr[i]) {
                stack.pop();
            }

            span[i] = stack.isEmpty() ? i + 1 : i - stack.peek();
            stack.push(i);
        }

        return span;
    }

    public static void main(String[] args) {
        int[] stockPrices = {100, 80, 60, 70, 60, 75, 85};
        int[] span = calculateSpan(stockPrices);

        System.out.println("Stock Prices: ");
        for (int price : stockPrices) {
            System.out.print(price + " ");
        }

        System.out.println("\nStock Spans: ");
        for (int s : span) {
            System.out.print(s + " ");
        }
    }
}