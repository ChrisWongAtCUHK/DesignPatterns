package dp.flyweight;

public class Animal {
	private String name;
	public Animal(String name){
		this.name=name;
		System.out.println(this.name+"--Created\n");
	}
	public void run(){
		System.out.print(this.name+"--run\n");
	}
}
