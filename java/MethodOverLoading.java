class MethodOverLoading{
   float m(int x, int y){
    return x*y;}
    float m(float x, float y){
    return x+y;}

public static void main(String[] args){
    MethodOverLoading M=new MethodOverLoading();
    System.out.println(M.m(4,2));
    System.out.println(M.m(1,2.0f));
    System.out.println(M.m(1.9f,2));
    System.out.println(M.m(1.9f,2.1f));
    }
}
