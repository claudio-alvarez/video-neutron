class Image
{
        private native void print();
        public static void main(String[] args)
        {
           	Mat m = new Mat();
		jni_func(m.getNativeObjAddr());
		
        }
        static{
                System.loadLibrary("Image");
        }
}
