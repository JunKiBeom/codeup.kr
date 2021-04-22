import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[5];
        int min=Integer.MAX_VALUE;

        for (int i=0;i<5;i++)
            arr[i] = sc.nextInt();

        int tmp;
        for (int i=0;i<5;i++) {
            tmp=Math.abs(n-arr[i]);
            if (min>=tmp)
                min=tmp;
        }
        System.out.println(min);
    }
}
