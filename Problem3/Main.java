package Problem3;

public class Main {
    public int reverse(int x) {
        int reverse = 0;
        while (x != 0) {
            int remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x = x / 10;
        }

        return reverse ;
    }

    public static void main(String[] args) {
        Main m = new Main();
        System.out.println(m.reverse(1534236469));
    }
}
