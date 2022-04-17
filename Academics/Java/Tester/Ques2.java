public class Ques2 {

	public static void main(String[] args) {
		String s1 = "Wipro";
		String s2 = "X";
		int s = 3;
		
		StringBuffer sb = new StringBuffer();
		
		for (int i = 0 ; i < s - 1; i++) 
			sb.append(s1).append(s2);
		sb.append(s1);
		
		System.out.println(sb);
	}

}
