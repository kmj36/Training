import java.util.Scanner;
import java.io.*;

public class inout {
    public static void Scanner3Demo(){
        try{
            File file = new File("out.txt");
            Scanner sc = new Scanner(file);
            while(sc.hasNextInt()){
                System.out.println(sc.nextInt()*10000);
            }
            sc.close();
        } catch(FileNotFoundException e){
            e.printStackTrace();
        }
    }

    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int i;
        System.out.print("입력(만원): ");
        while(scan.hasNextInt()) {
            i = scan.nextInt();
            System.out.print(i + " 만원");
        }
        System.out.print("또 다시!");
        Scanner3Demo();
    }
}
