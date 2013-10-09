package dp.flyweight;

import java.util.*;

public class Factory {
	private Hashtable<String, Animal> pool=new Hashtable<String, Animal>();
	private static Factory instance=new Factory();
	public static Factory getInstance(){
		return instance;
	}
	public synchronized Animal getAnimal(String name){
		if(pool.get(name)==null){
			Animal tmpAnimal=new Animal(name);            
			pool.put(name,tmpAnimal);
			return tmpAnimal;
		}else{
			return pool.get(name); 
		}
	}
}
