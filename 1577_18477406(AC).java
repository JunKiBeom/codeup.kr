import java.util.Scanner;

public class Main {
    public static int myabs(int n) {
        if (n<0)
            return n*-1;
        return n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(myabs(n));
    }
}
