public class array {
    public static void main(String[] args)
    {
        String classtemp[]={ "서환성", "양혜지", "양건희", "최서근" };
        int i[]={ 1,2,3,4 }, j;
        for(j=0;j<4;j++) {
            System.out.println(classtemp[j]);
            System.out.println(i[j]);
            System.out.println("배열 크기:"+i.length);
        }
    }
}
