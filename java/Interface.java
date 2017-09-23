interface I1{
   float move(float speed ,float time);}
interface I2{
    float expenditure(float petrol, float  quant);}
class NonAbstract  implements I1,I2{
    @Override
     public float expenditure(float petrol, float  quant){
        return petrol*quant;
    }
    @Override
    public float move(float speed ,float time){
        return speed*time;
    }

    public static void main(String... args)
    {
       NonAbstract na =new NonAbstract();
        System.out.println(na.move(21.5f,7));
        System.out.println(na.expenditure(21.5f,7));
    }
}
