package dp.nullobject;


public class Main {
	public static void main(String[] args){
		Application application = new Application(new NullPrintStream());
		application.go();
	}
}