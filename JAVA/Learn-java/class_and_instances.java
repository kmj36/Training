public class class_and_instances{
    public static void sum(int left, int right){ // 합계 메소드화
        System.out.println(left+right);
    }

    public static void avg(double left, double right){ // 평균 메소드화
        System.out.println((left+right)/2);
    }
    public static void main(String args[])
    {
        int left = 10, right = 20;
        sum(left, right);
        avg(left, right);
        left = 40;
        right = 60;
        sum(left, right);
        avg(left, right);
    }
}
