abstract class AbstractImplimentation{
    abstract float move(float speed ,float time);}
class ExtendingAbstractImplimentation extends AbstractImplimentation{
    @Override
     float move(float speed ,float time){
        return speed*time;
    }
    public static void main(String... args)
    {
        ExtendingAbstractImplimentation eai=new ExtendingAbstractImplimentation();
        System.out.println(eai.move(21.5f,7));
}        }
