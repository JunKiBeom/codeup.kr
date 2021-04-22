import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] score = new int[4][4];
        for (int i=0;i<3;i++)
            for (int j=0;j<3;j++)
                score[i][j] = sc.nextInt();

        for (int i=0;i<3;i++) {
            for (int j = 0; j < 3; j++) {
                score[i][3] += score[i][j];
                score[3][i] += score[j][i];
            }
            score[3][3] += score[i][3];
        }
        for (int i=0;i<4;i++) {
            for (int j = 0; j < 4; j++)
                System.out.print(score[i][j] + " ");
            System.out.println();
        }
    }
}
