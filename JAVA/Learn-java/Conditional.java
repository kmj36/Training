public class Conditional {
    public static void main(String[] args){
        if(true){
            System.out.println(1);
        }
        if(true) // 줄이기 가능
            System.out.println(2);
        else
            System.out.println(3);
        if(1==1){
            System.out.println(4);
        }

        if(false){
            System.out.println(5);
            System.out.println(6);
            System.out.println(7);
            System.out.println(8);
        }else{
            System.out.println(9);
        }

        if (false){
            System.out.println(10);
        }else if(true){
            System.out.println(11);
        }else if(true){
            System.out.println(12);
        }else {
            System.out.println(13);
        }
        switch(1){
            case 1:
                System.out.println("you selected:" + 1);
                break;
            case 2:
                System.out.println("you selected:" + 2);
                break;
            case 3:
                System.out.println("you selected:" + 3);
                break;
            case 4:
                System.out.println("you selected:" + 4);
                break;
            case 5:
                System.out.println("you selected:" + 5);
                break;
        }
    }
}
