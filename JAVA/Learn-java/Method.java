import java.io.*; // 무시

public class Method {
    public static int sum(int a, int b) { // 메소드
        int temp = a + b;
        System.out.print(temp);
        return temp;
    }

    public static String numbering(int init, int limit) {
        int i = init;
        String output = "";
        while (i < limit) {
            output += i; // "" <- "1" <- "2" <- "3" <- "4"
            i++;
        }
        return output;
    }

    public static int one(int i) {
        if (i == 1)
            return 1;
        else if (i == 2)
            return 2;
        else if (i == 3)
            return 3;
        else
            return 0;
    }

    public static String[] getmembers() {
        String temp[] = {"1.24", "546", "1515", "5748"};
        return temp;
    }

    public static void main(String args[]) {
        int a = 8, b = 3, c= 2;
        String members[] = getmembers();
        int ret = sum(a, b);
        System.out.print('\n');
        ret = sum(7, 5);
        System.out.print('\n');
        ret = sum(8, 4);
        System.out.print('\n');
        ret = sum(56, -244);
        System.out.print('\n');

        String result = numbering(1, 5);
        System.out.println(result);
        try { // 무시
            // 다음 행은 out.txt 라는 파일에 numbering이라는 메소드가 반환한 값을 저장합니다.
            BufferedWriter out = new BufferedWriter(new FileWriter("out.txt"));
            out.write(result);
            out.close();
        } catch (IOException e) {
        }

        System.out.println(one(c));
        for(int i = 0; i<4;i++)
            System.out.println(members[i]);
    }
}