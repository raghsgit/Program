import java.io.*;
class ReadData{
public static void main(String... argd)throws IOException{
	FileReader fr=null;
try{
	fr=new FileReader("J:\\bin\\pwd");
	}
	catch(FileNotFoundException fne){
		fne.printStackTrace();
	}
	byte c;
	while(true){
		c=(byte)fr.read();
		if(c==-1)
			break;
		System.out.print((char)c);
	}
	fr.close();
	

}}