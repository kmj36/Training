class A_fall{
    int velocity = 200;
    void drop(){
        System.out.println(velocity); // 인스턴스 변수 사용
    }

    void fast(){
        int velocity = 250;
        System.out.println(velocity); // fast의 변수 사용 색깔 다름
    }

    void instance(){
        int velocity = 300000;
        System.out.println(this.velocity); // this로 인스턴수 변수 사용
    }
}

public class scope2 {
    public static void main(String args[]){
        A_fall a1 = new A_fall();
        a1.drop();
        a1.fast();
        a1.instance();
    }
}
