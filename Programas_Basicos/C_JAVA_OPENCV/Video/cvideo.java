public class cvideo{
	static{
		System.loadLibrary("cvideo");
	}

	private native void startvideo();
	
	public static void main(String[] args){
		new cvideo().startvideo();
	}
}
