public class Variable {
    public static void main(String[] args){
        int a=5;
        int b=3;
        System.out.println("a(5)+b(3)의 값:"+(a+b)); // 강제 형 변환 전에 괄호로 계산
        a= 43;
        System.out.println("a(43)+b(3)의 값:"+(a+b));
        double c=5.3;
        double d=4.24;
        System.out.println("실수 c(5.3)+d(4.24)의 값:"+(c+d));
        //문자열 변수는 String
        String t="test";
        System.out.println(t+"ing");
    }
}
