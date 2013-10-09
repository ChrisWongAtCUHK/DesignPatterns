package dp.flyweight;

public class Main {

	public static void main(String[] args) {
		Factory factory=Factory.getInstance();
		factory.getAnimal("man").run();
		factory.getAnimal("dog").run();
		factory.getAnimal("man").run();
		factory.getAnimal("cat").run();
		factory.getAnimal("dog").run();
		factory.getAnimal("dog").run();
	}
}
