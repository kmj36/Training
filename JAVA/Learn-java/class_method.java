class Cal{ // static = 클래스의 맴버화 == 함수의 구조체 선언형식 구성원화
    public static void sum(int left, int right){
        System.out.println(left+right);
    }
    static double PI = 3.1415926535897931374;
    public static void avg(){
        System.out.println(PI*2);
    }
}

public class class_method {
    public static void main(String args[]){
        Cal.sum(-124,224);
        Cal.avg();
    }
}
