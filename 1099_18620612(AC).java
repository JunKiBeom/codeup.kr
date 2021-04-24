import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] map = new int[10][10];
        int x=1, y=1;

        for (int i=0;i<10;i++)
            for (int j=0;j<10;j++)
                map[i][j]=sc.nextInt();

        while (map[x][y]!=2){ // 2에 도달할때까지 반복
            map[x][y]=9;
            if (map[x][y+1]!=1) // 오른쪽으로 이동
                y++;
            else if (map[x+1][y]!=1) // 아래로 이동
                x++;
            else
                break;
        }
        map[x][y]=9; // 시작 지점이 2일경우 바로 반볻문을 나오므로 2로 마스킹
        
        for (int i=0;i<10;i++) {
            for (int j = 0; j < 10; j++)
                System.out.print(map[i][j] + " ");
            System.out.println("");
        }
    }
}
