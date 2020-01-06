import java.util.Scanner;
public class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int in=sc.nextInt();
        int[] arr=new int[in];
        for (int i=0;i<in;i++) {
            int num = sc.nextInt();
            arr[i]=num;
        }
        int min=arr[0];
        for(int i=0;i<in;i++)
            if (min>arr[i])
                min=arr[i];
        System.out.println(min);
    }
}
