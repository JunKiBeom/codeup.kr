import java.util.Scanner;

public class Main {
    static int GCD(int a, int b) {
        while (a*b!=0){
            if (a>b)
                a%=b;
            else
                b%=a;
        }
        return a+b;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println(GCD(a,b));
    }
}
