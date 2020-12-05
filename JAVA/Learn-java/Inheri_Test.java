class Mulitiple extends Calcula{
    public void multi(){
        System.out.println(this.left* this.right);
    }
}

public class Inheri_Test {
    public static void main(String args[]){
        Mulitiple c = new Mulitiple();
        c.setOprands(4,5);
        c.sum();
        c.avg();
        c.multi();
    }
}
