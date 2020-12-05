import javax.print.attribute.SetOfIntegerSyntax;
import java.util.Set;

class status {
    String stat;

    public status(int num) {
        switch(num)
        {
            case 0: this.stat = "NONE"; break;
            case 1: this.stat = "CAUTION"; break;
            case 2: this.stat = "WARNING"; break;
            case 3: this.stat = "ERROR!"; break;
            case 4: this.stat = "BROKE!!!"; break;
        }
    }

    public void action() {
        if(this.stat.equals("NONE"))
        {
            System.out.println("Nothing");
        }else if(this.stat.equals("CAUTION"))
        {
            System.out.println("Find the problem");
        }else if(this.stat.equals("WARNING"))
        {
            System.out.println("Shutdown and fix");
        }else if(this.stat.equals("ERROR!"))
        {
            System.out.println("Shutdown and Lockdown and then  fix or Debug");
        }else if(this.stat.equals("BROKE!!!"))
        {
            System.out.println("If possible shutdown and fix by the way If negative RUN!!!!");
        }else
        {
            System.out.println("Function error@@");
        }
    }

}

class Checking extends status {
    public Checking(int num) {
        super(num);
    }

    public void action(){
        if(this.stat.equals("NONE"))
        {
            System.out.println("result"+"Nothing");
        }else if(this.stat.equals("CAUTION"))
        {
            System.out.println("result"+"Find the problem");
        }else if(this.stat.equals("WARNING"))
        {
            System.out.println("result"+"Shutdown and fix");
        }else if(this.stat.equals("ERROR!"))
        {
            System.out.println("result"+"Shutdown and Lockdown and then  fix or Debug");
        }else if(this.stat.equals("BROKE!!!"))
        {
            System.out.println("result"+"If possible shutdown and fix by the way If negative RUN!!!!");
        }else
        {
            System.out.println("result"+"Function error@@");
        }
    }
}

public class overriding {
    public static void main(String args[]){
        status p = new status(2);
        p.action();
    }
}
