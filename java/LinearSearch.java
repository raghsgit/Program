import java.io.Console;
import java.io.*;//NumberFormatException;
class LinearSearch{
public static void main(String... args){
	Console c=System.console();
	int x[]=new int[10];
	System.out.println("give values    length=10");
	for(int i=0;i<10;i++){
		try{
			x[i]=Integer.parseInt(c.readLine());}
		catch(NumberFormatException e){
			System.out.println("ÿou not entered an integer value \nenter again");
			x[i]=Integer.parseInt(c.readLine());}
	}
	System.out.println("give number to be searched");
	int y;
	try{
		y=Integer.parseInt(c.readLine());}
	catch(NumberFormatException e){
			System.out.println("ÿou not entered an integer value \nenter again");
			y=Integer.parseInt(c.readLine());}
	for(int z:x){
		if(z==y){
			System.out.println("number is present in the array");
			return;
		}
	}
	System.out.println("number not found ");
	return;
	}
}

		
