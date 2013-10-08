package dp.iterator;

import java.util.Iterator;

class IterableString implements Iterable<Character> {
	private String original;

	public IterableString(String original) {
		this.original = original;
	}

	public Iterator<Character> iterator() {
		return new InnerIterator();
	}

	private class InnerIterator implements Iterator<Character> {
		private int index;
		public boolean hasNext() {
			return index < original.length();
		}

		public Character next() {
			Character c = original.charAt(index);
			index++;
			return c;
		}

		public void remove() {}
	}
}

public class Main {
	public static void main(String[] args) {
		foreach(new IterableString("Justin"));
	}
	public static void foreach(Iterable<Character> iterable) {
		Iterator<Character> iterator = iterable.iterator();
		while(iterator.hasNext()) {
			System.out.println(iterator.next());
		}      
	}
}
