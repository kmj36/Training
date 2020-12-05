public class compare {
    public static void main(String[] args){
        // Boolean{true, false} 1,0 안됨
        //비교 연산자 '같음'
        System.out.println("\n== 연산자");
        System.out.println(1==2);
        System.out.println(1==1);
        //문자열 비교
        System.out.println("문자열 비교 =="+("one"=="two"));
        System.out.println("문자열 비교 !="+("one"!="one"));
        //비교 연산자 '다름'
        System.out.println("\n!= 연산자");
        System.out.println(1!=2);
        System.out.println(1!=1);
        //비교 연산자 '>'
        System.out.println("\n> 연산자");
        System.out.println(1>2);
        System.out.println(1>=1);
        //비교 연산자 '>'
        System.out.println("\n< 연산자");
        System.out.println(1<2);
        System.out.println(1<=1);
        String h= "Hello";
        String e= "Hello";
        System.out.println(h == e);
        System.out.println(h.equals(e));
    }
}
