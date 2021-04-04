import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        int[] arr = new int[c];

        for (int i=0;i<c;i++)
            arr[i]=sc.nextInt();

        int tmp = 0;
        for (int i=0;i<c;i++) {
            for (int j=tmp;j<c;j++)
                System.out.print(arr[j]+" ");
            for (int k=0;k<tmp;k++)
                System.out.print(arr[k]+" ");
            tmp++;
            System.out.println();
        }
    }
}

/*
5
1 2 3 4 5
*/
