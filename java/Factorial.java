import java.util.Scanner;
class Factorial{
    int fact(int x){
        if(x==1)
            return 1;
        return x*fact(x-1);
    }
    public static void main(String... atg){
        Scanner in =new Scanner(System.in);
        System.out.println("give Integer value");
        int x=in.nextInt();
        Factorial fct =new Factorial();
        System.out.println(fct.fact(x));
        };
}
