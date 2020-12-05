class Cal2{
    int le, ri; // 필드 변수 생성

    public Cal2(int le, int ri){ // 생성자
        this.le = le; // this.le가 필드 변수임를 의미
        this.ri = ri; // this.ri가 필드 변수임을 의미
    }

    public int sum(){
        return this.le+this.ri;
    } // 메소드

    public double avg(){
        return (this.le+this.ri)/2;
    } // 메소드
}

public class reset_and_creater { // 기본 생성자 자동 생성
    public static void main(String args[]){
        Cal2 c34 = new Cal2(5,3); // 인스턴스 생성 및 생성자 호출
        
    }
}
