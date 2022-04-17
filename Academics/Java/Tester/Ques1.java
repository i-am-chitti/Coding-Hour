import java.util.ArrayList;
import java.util.List;

class MyArrayList<E> extends ArrayList<E> {
	@Override
	public boolean add(E e) {
		if (e instanceof Integer || e instanceof Float || e instanceof Double) {
			super.add(e);
			return true;
		} else {
			throw new ClassCastException("Only Integer, Float, and Double are supported.");
		}
	}
}

public class Ques1 {

	public static void main(String[] args) {
		List<Object> l = new MyArrayList<>();
		
		try {
			l.add(15);
			l.add(1.2F);
			l.add(3.1415D);
			l.add("Test");
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		System.out.println(l);

	}

}