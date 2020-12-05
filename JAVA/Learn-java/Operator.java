public class Operator {
    public static void main(String[] args){
        int result = 1+2;
        System.out.println(result);

        result -= 1;
        System.out.println(result);

        result *= 3;
        System.out.println(result);

        result /= 3;
        System.out.println(result);

        result %= 3;
        System.out.println(result);
        // 문자열 결합
        String a = "This is a";
        String b = "Connected String";
        String c = a+b;
        System.out.println(c);

        //단항 연산자
        int i = 3;
        i++;
        System.out.println(i);
        ++i;
        System.out.println(i);
        // c언어와 똑같이 ++i는 전위연산이고 i++는 후위연산이다.
    }
}
