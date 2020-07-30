import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<(n/2+0.5); i++) {
            for (int j=i; j<n-(n/2+1); j++)
                System.out.print(" ");
            for (int k=0; k<=(i*2); k++)
                System.out.print("*");
            System.out.println("");
        }
    }
}
