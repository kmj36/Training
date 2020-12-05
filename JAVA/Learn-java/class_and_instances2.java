class Calculator{
    int left, right;

    public void setOprands(int left, int right){
        this.left = left;
        this.right = right;
    }

    public void sum(){
        System.out.println(this.left+this.right);
    }

    public void avg(){
        System.out.println((this.left+this.right)/2);
    }
}

public class class_and_instances2 {
    public static void main(String args[]){
        Calculator c = new Calculator();
        c.setOprands(7,4);
        c.sum();
        c.avg();

        Calculator c2 = new Calculator();
        c2.setOprands(15,-45);
        c2.sum();
        c2.avg();
    }
}
