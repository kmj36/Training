public class Scope {
    static int i; // 클래스 변수
    static double PI = 3.1415926535*2;

    static void a(){ // 스코프가 유효 범위
         int i=0; // a() 메소드의 새로운 i 변수(클래스 변수 보다 우선순위)
    } // i 삭제

    static void b(){
        i=0;
    } // i가 클래스 변수에  0 적용됨.

    static void st(){
        String title = "coding everybody!"; // 메소드 문자열
    }// 삭제

    static void c_1(){
        double PI = 3.1415926535;
        c_2();
    }

    static void c_2(){
        System.out.print(PI); // 다른 스코프에 있어서 클래스 변수
    }
    public static void main(String args[]){ // 스코프 범위를 벗어나 a()의 i가 사라짐
        for(i = 0; i < 5; i++){
            a(); // 메소드 변수 사용
            // b(); // 클래스 변수 사용
            st();
            //System.out.println(title); st()을 선언하여도 title은 호출할 수 없음.
            System.out.println(i);
        }

        for(int j = 0, sum=0; j< 10; j++){
            sum+=j;
            System.out.println(sum);
        }
        c_1();
       // sum = 0; // 반복문에서 선언한 것도 스코프 밖에서는 사용 할 수 없다.
    }
}
/*
* 지역변수는 정의된 시점에서.*/