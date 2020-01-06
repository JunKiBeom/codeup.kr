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
        for(int i=in-1;i>=0;i--)
            System.out.print(arr[i]+" ");
    }
}
