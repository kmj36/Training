import java.util.concurrent.DelayQueue;

class divisions extends Mulitiple{ // 상속된 클래스를 또 상속
    public void division(){
        System.out.println(this.left/this.right);
    }
}

public class overlap_Inheri {
    public static void main(String args[]){
        divisions a = new divisions();
        a.setOprands(5,3);
        a.sum();
        a.avg();
        a.multi();
        a.division();
    }
}
