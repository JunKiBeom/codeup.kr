import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[3];
        arr[2] = sc.nextInt();
        for (int i=2;i>0;i--)
            if (arr[i]>=60) {
                arr[i-1]=arr[i]/60;
                arr[i]%=60;
            }
        for (int e:arr)
            System.out.print(e+" ");
    }
}

