import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result;
        for (int i=0;i<=n;i++) {
            result = n - i;
            if (result % Math.sqrt(result) == 0) {
                System.out.println(i + " " + (int) Math.sqrt(result));
                break;
            }
        }
    }
}

