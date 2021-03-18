import java.util.Scanner;

public class Main {
    public void check(int a) {
        if (a==0)
            System.out.println("zero");
        else if (a>0)
            System.out.println("positive");
        else
            System.out.println("negative");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        Main m = new Main();
        m.check(a);
//        System.out.println(check(a));
    }
}
