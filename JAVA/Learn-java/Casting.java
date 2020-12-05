public class Casting {
    public static void main(String[] args){
        // 자동 형변환
        double a = 3.0F; // float 를 double로 자동 형변환
        int b = 3;
        float c = 1.0F;
        double e = b+c; // 2번 자동 형변환 c = int -> float -> double b = float -> double
        // 명시적 형 변환
        float a1 = (float) 100.0; // int를 float로 캐스팅
        int f = (int) 100.0F; // float를 int로 캐스팅
    }
}
