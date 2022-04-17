import java.util.Iterator;
import java.util.TreeSet;

class Data {
	TreeSet<String> set;
	Data() {
		this.set = new TreeSet<>();
	}

	void add(String str) {
		this.set.add(str);
	}

	void traverse() {
		Iterator<String> it = this.set.iterator();
		while(it.hasNext()) {
			System.out.println(it.next());
		}
	}

	boolean search(String query) {
		Iterator<String> it = this.set.iterator();
		
		boolean result = false;
		
		while (it.hasNext()) {
			if (it.next().equals(query)) {
				result = true;
				break;
			}
		}

		return result;
	}

	void reverseTraverse() {
		Iterator<String> it = this.set.descendingIterator();
		while(it.hasNext())	{
			System.out.println(it.next());
		}
	}

}

public class temp {

	public static void main(String[] args) {

		Data data = new Data();
		data.add("Deepak");
		data.add("Pulkit");
		data.add("Saniya");
		data.add("Ishan");

		data.traverse();

		System.out.println("\nReverse Traverse");
		data.reverseTraverse();

		System.out.print("\n");

		boolean isFound = data.search("Saniya");
		if(isFound) System.out.println("Saniya Found");
		else System.out.println("Saniya Not Found");
	}

}