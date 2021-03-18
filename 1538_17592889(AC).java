import java.util.Scanner;

public class Main {
    static void check(int a) {
        if (a%2==0)
            System.out.println("even");
        else
            System.out.println("odd");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        check(a);
//        System.out.println(check(a));
    }
}
