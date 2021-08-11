import java.util.Scanner;

public class Main {
    static int SelfN(int n) {
        for (int i=0;i<=n;i++) {
            int tmpNum = i;
            int tmpVal = 0;

            while (tmpNum > 0) {    // 각 자리수 더하는 과정
                tmpVal+=tmpNum%10;
                tmpNum/=10;
            }

            if (n==tmpVal+i) {    // 제너레이터 찾음
                return 0;
            }
        }
        return n;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int num = 0;

        for (int i = a; i <= b; i++) {
            num+=SelfN(i);
        }

        System.out.println(num);
    }

}

