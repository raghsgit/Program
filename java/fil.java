import java.io.*;
class ReadData{
public static void main(String... argd)throws IOException{
	BufferedReader br=null;
try{
	BufferedReader br=new BufferedReader(new InputStreamReader(new FileReader("J:\\bin\\pwd")));
	}
	catch(FileNotFoundException fne){
		fne.printStackTrace();
	}
	byte c;
	try{
	while(true){
	
	System.out.println(br.readLine());
	
	}}catch(EndOfFileException fe){}
	
	br.close();
	

}}