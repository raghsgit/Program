class MethodOverriding extends MethodOverLoading{
@Override
float m(int x,int y){
    return x/1.0f/y;
    }
    public static void main(String... args){
        MethodOverriding M=new MethodOverriding();
        System.out.println(M.m(12,45));
        System.out.println(new MethodOverLoading().m(12,45));
    }
}
